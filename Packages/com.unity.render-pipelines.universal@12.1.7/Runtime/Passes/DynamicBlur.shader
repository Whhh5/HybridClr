Shader "Custom/DynamicBlur"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Cutoff ("Alpha Cutoff", Range(0,1)) = 0.5
        _Color ("Color", Color) = (1,1,1,1)
    }
    SubShader
    {
        Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
            
            // 
            sampler2D _CameraDepthTexture;
            sampler2D _CameraColorTexture;
            
            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Color;
            float _Cutoff;

            // global variables
            float4x4 _ViewProjectionNoJitter;
            float4x4 _PreviousViewProjectionNoJitter;
            float4x4 _lastFrameModel;


            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 texcoord : TEXCOORD0;
                float3 nonJitterScreenPos : TEXCOORD1;
                float3 lastScreenPos : TEXCOORD2;
            };
        
            struct appdata {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                float4 worldPos = mul(unity_ObjectToWorld, v.vertex);
                o.nonJitterScreenPos = ComputeScreenPos(mul(_ViewProjectionNoJitter, worldPos)).xyw;
                float3 lastWorldPos = ComputeScreenPos(mul(_lastFrameModel, v.vertex)).xyw;
                o.lastScreenPos = ComputeScreenPos(mul(_PreviousViewProjectionNoJitter, lastWorldPos)).xyw;
                o.texcoord = v.texcoord;
                return o;
            }
            float2 frag(v2f i) : SV_Target
            {
                float2 col = TRANSFORM_TEX(i.texcoord, _MainTex);
                return col;
#if CUT_OFF
                i.texcoord = TRANSFORM_TEX(i.texcoord, _MainTex);
                float4 c = tex2D(_MainTex, i.texcoord);
                clip(c.a * _Color.a - _Cutoff);
#endif
                float4 velocity = float4(i.nonJitterScreenPos.xy, i.lastScreenPos.xy) / float4(i.nonJitterScreenPos.zz, i.lastScreenPos.zz);
#if UNITY_UV_STARTS_AT_TOP
                return velocity.xw - velocity.zy;
#else
                return velocity.xy - velocity.zw;
#endif
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
