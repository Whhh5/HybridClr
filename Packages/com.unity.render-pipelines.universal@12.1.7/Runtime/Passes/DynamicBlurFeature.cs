using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

namespace UnityEngine.Rendering.Universal
{

    [CustomEditor(typeof(DynamicBlurFeature))]
    public class DynamicBlurFeatureEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
        }

    }
    public class DynamicBlurFeature : ScriptableRendererFeature
    {
        private DynamicBlurPass m_DynamicBlurPass = new();
        private Shader m_DynamicBlurShader = null;
        private Material m_DynamicBlurMaterial = null;
        public override void Create()
        {
            m_DynamicBlurShader = Shader.Find("Custom/DynamicBlur");
            m_DynamicBlurMaterial = new Material(m_DynamicBlurShader);
            m_DynamicBlurPass = new();
            m_DynamicBlurPass.InitParams(m_DynamicBlurMaterial);
        }
        public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
        {
            renderer.EnqueuePass(m_DynamicBlurPass);
        }

    }

    public class DynamicBlurPass : ScriptableRenderPass
    {
        public string passName = "Dynamic Blur Pass";
        private Material m_DynamicBlurMaterial = null;
        // …œ“ª÷°µƒæÿ’Û
        private string k_PreviousViewProjectionNoJitter = "_PreviousViewProjectionNoJitter";
        private string k_ViewProjectionNoJitter = "_ViewProjectionNoJitter";
        private string k_PreviousObjectModel = "_ViewProjectionNoJitter";
        private Matrix4x4 localMatrix;
        public void InitParams(Material f_Material)
        {
            m_DynamicBlurMaterial = f_Material;
        }
        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            var cmd = CommandBufferPool.Get();
            var cameraData = renderingData.cameraData;
            var camera = cameraData.camera;
            var urpCamera = camera.GetComponent<UniversalAdditionalCameraData>();
            if (urpCamera == null)
            {
                return;
            }

            var motionData = urpCamera.motionVectorsPersistentData;
            using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.DynamicBlurPass)))
            {
                cmd.SetGlobalMatrix(k_PreviousViewProjectionNoJitter, motionData.previousViewProjectionStereo[0]);
                cmd.SetGlobalMatrix(k_ViewProjectionNoJitter, motionData.viewProjectionStereo[0]);
                cmd.SetGlobalMatrix(k_PreviousObjectModel, this.localMatrix);


                int tile2 = 2;
                cmd.GetTemporaryRT(tile2, Screen.width / 2, Screen.height / 2, 0, FilterMode.Point);

                //int tile2 = 2;

            }
            context.ExecuteCommandBuffer(cmd);
            CommandBufferPool.Release(cmd);

            var obj = GameObject.Find("Cube");
            var tran = obj.transform;
            Matrix4x4 localMatrix = Matrix4x4.TRS(tran.localPosition, tran.localRotation, tran.localScale);
            this.localMatrix = localMatrix;
        }
    }
}
