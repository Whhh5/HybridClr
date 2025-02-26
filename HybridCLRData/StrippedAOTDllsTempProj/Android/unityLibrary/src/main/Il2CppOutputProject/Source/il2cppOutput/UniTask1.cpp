﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds>
struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt>
struct IEqualityComparer_1_t2EDEDBAF19E8BF7F3EA065CC1D0D3578B4A90052;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>
struct IEqualityComparer_1_tE5166E96F3B07686A8D0875FE3BF15DC56FED779;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion>
struct IEqualityComparer_1_tC69064DA61A5BCF7B3EA5F0B53979229260D3DCB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt>
struct IEqualityComparer_1_t7E98D8AD41D5E0E35D1CFF51C260ABD2A500B2F3;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect>
struct IEqualityComparer_1_tFC2ABE854EE94E6C4917178A3A4652222F165E32;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt>
struct IEqualityComparer_1_tDC8906B8491813B2FB353E856B89603200C3255B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>
struct IEqualityComparer_1_t5442E8A434F2EE43566F33724D3E6C43B4737A72;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B;
// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUniTask[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.StateTuple
struct StateTuple_t27A8C28D7DAA053BA3AA779D90305BC35E575256  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B  : public RuntimeObject
{
};

struct Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields
{
	// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Default
	Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* ___Default_0;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
	// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::debuggingId
	RuntimeObject* ___debuggingId_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RangeInt
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};

// Cysharp.Threading.Tasks.Internal.ValueStopwatch
struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E 
{
	// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::startTimestamp
	int64_t ___startTimestamp_1;
};

struct ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields
{
	// System.Double Cysharp.Threading.Tasks.Internal.ValueStopwatch::TimestampToTicks
	double ___TimestampToTicks_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.BoundsInt
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Size
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B  : public RuntimeObject
{
};

struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2
	RuntimeObject* ___Vector2_0;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3
	RuntimeObject* ___Vector3_1;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector4
	RuntimeObject* ___Vector4_2;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color
	RuntimeObject* ___Color_3;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color32
	RuntimeObject* ___Color32_4;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Rect
	RuntimeObject* ___Rect_5;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Bounds
	RuntimeObject* ___Bounds_6;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Quaternion
	RuntimeObject* ___Quaternion_7;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2Type_8;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3Type_9;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector4Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector4Type_10;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::colorType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___colorType_11;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::color32Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___color32Type_12;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectType_13;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsType_14;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::quaternionType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___quaternionType_15;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2Int
	RuntimeObject* ___Vector2Int_16;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3Int
	RuntimeObject* ___Vector3Int_17;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RangeInt
	RuntimeObject* ___RangeInt_18;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RectInt
	RuntimeObject* ___RectInt_19;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::BoundsInt
	RuntimeObject* ___BoundsInt_20;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2IntType_21;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3IntType_22;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rangeIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rangeIntType_23;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectIntType_24;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsIntType_25;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean System.RuntimeTypeHandle::Equals(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___startTimestamp0, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___ex0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___timing0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::GetDefaultHelper(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E_RuntimeMethod_var);
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___type0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEqualityComparer_GetDefaultHelper_mBD5CBC13CCF4A2D1A0E121A874B47648D919CC1E_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24924));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 24925));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24926));
		// var t = type.TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24927));
		Type_t* L_0 = ___type0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24928));
		NullCheck(L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1;
		L_1 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24928));
		V_0 = L_1;
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24929));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24930));
		bool L_3;
		L_3 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24930));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24931));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24932));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0;
		V_2 = L_5;
		goto IL_0172;
	}

IL_0023:
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24933));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24934));
		bool L_7;
		L_7 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24934));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24935));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24936));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1;
		V_2 = L_9;
		goto IL_0172;
	}

IL_003e:
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24937));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24938));
		bool L_11;
		L_11 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24938));
		V_4 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24939));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24940));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2;
		V_2 = L_13;
		goto IL_0172;
	}

IL_005b:
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24941));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24942));
		bool L_15;
		L_15 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24942));
		V_5 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24943));
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24944));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_17 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3;
		V_2 = L_17;
		goto IL_0172;
	}

IL_0078:
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24945));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24946));
		bool L_19;
		L_19 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24946));
		V_6 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24947));
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24948));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4;
		V_2 = L_21;
		goto IL_0172;
	}

IL_0095:
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24949));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24950));
		bool L_23;
		L_23 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24950));
		V_7 = L_23;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24951));
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24952));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5;
		V_2 = L_25;
		goto IL_0172;
	}

IL_00b2:
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24953));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24954));
		bool L_27;
		L_27 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24954));
		V_8 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24955));
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00cf;
		}
	}
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24956));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6;
		V_2 = L_29;
		goto IL_0172;
	}

IL_00cf:
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24957));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24958));
		bool L_31;
		L_31 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24958));
		V_9 = L_31;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24959));
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24960));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7;
		V_2 = L_33;
		goto IL_0172;
	}

IL_00ec:
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24961));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType_21;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24962));
		bool L_35;
		L_35 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24962));
		V_10 = L_35;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24963));
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0106;
		}
	}
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24964));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16;
		V_2 = L_37;
		goto IL_0172;
	}

IL_0106:
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24965));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType_22;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24966));
		bool L_39;
		L_39 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24966));
		V_11 = L_39;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24967));
		bool L_40 = V_11;
		if (!L_40)
		{
			goto IL_0120;
		}
	}
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24968));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_41 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17;
		V_2 = L_41;
		goto IL_0172;
	}

IL_0120:
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24969));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType_23;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24970));
		bool L_43;
		L_43 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24970));
		V_12 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24971));
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_013a;
		}
	}
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24972));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18;
		V_2 = L_45;
		goto IL_0172;
	}

IL_013a:
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24973));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24974));
		bool L_47;
		L_47 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24974));
		V_13 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24975));
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0154;
		}
	}
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24976));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19;
		V_2 = L_49;
		goto IL_0172;
	}

IL_0154:
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24977));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType_25;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24978));
		bool L_51;
		L_51 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24978));
		V_14 = L_51;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24979));
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_016e;
		}
	}
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24980));
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		RuntimeObject* L_53 = ((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20;
		V_2 = L_53;
		goto IL_0172;
	}

IL_016e:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24981));
		V_2 = NULL;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24982));
		RuntimeObject* L_54 = V_2;
		return L_54;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityEqualityComparer__cctor_m27C5F8E0B687AFEC0F3E4EBB9BC857453B466BF8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24983));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 24984));
	{
		// public static readonly IEqualityComparer<Vector2> Vector2 = new Vector2EqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24985));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24986));
		Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* L_0 = (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892*)il2cpp_codegen_object_new(Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24986));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2_0), (void*)L_0);
		// public static readonly IEqualityComparer<Vector3> Vector3 = new Vector3EqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24987));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24988));
		Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* L_1 = (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3*)il2cpp_codegen_object_new(Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24988));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3_1), (void*)L_1);
		// public static readonly IEqualityComparer<Vector4> Vector4 = new Vector4EqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24989));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24990));
		Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* L_2 = (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152*)il2cpp_codegen_object_new(Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24990));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector4_2), (void*)L_2);
		// public static readonly IEqualityComparer<Color> Color = new ColorEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24991));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24992));
		ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* L_3 = (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B*)il2cpp_codegen_object_new(ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24992));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color_3), (void*)L_3);
		// public static readonly IEqualityComparer<Color32> Color32 = new Color32EqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24993));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24994));
		Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* L_4 = (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C*)il2cpp_codegen_object_new(Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24994));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Color32_4), (void*)L_4);
		// public static readonly IEqualityComparer<Rect> Rect = new RectEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24995));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24996));
		RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* L_5 = (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46*)il2cpp_codegen_object_new(RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24996));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Rect_5), (void*)L_5);
		// public static readonly IEqualityComparer<Bounds> Bounds = new BoundsEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24997));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24998));
		BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* L_6 = (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742*)il2cpp_codegen_object_new(BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24998));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Bounds_6), (void*)L_6);
		// public static readonly IEqualityComparer<Quaternion> Quaternion = new QuaternionEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 24999));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25000));
		QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* L_7 = (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9*)il2cpp_codegen_object_new(QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25000));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Quaternion_7), (void*)L_7);
		// static readonly RuntimeTypeHandle vector2Type = typeof(Vector2).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25001));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25002));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25002));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25003));
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25003));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2Type_8 = L_10;
		// static readonly RuntimeTypeHandle vector3Type = typeof(Vector3).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25004));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25005));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25005));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25006));
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25006));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3Type_9 = L_13;
		// static readonly RuntimeTypeHandle vector4Type = typeof(Vector4).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25007));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25008));
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25008));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25009));
		NullCheck(L_15);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16;
		L_16 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25009));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector4Type_10 = L_16;
		// static readonly RuntimeTypeHandle colorType = typeof(Color).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25010));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25011));
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25011));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25012));
		NullCheck(L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25012));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___colorType_11 = L_19;
		// static readonly RuntimeTypeHandle color32Type = typeof(Color32).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25013));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25014));
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25014));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25015));
		NullCheck(L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22;
		L_22 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25015));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___color32Type_12 = L_22;
		// static readonly RuntimeTypeHandle rectType = typeof(Rect).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25016));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25017));
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25017));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25018));
		NullCheck(L_24);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25;
		L_25 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25018));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectType_13 = L_25;
		// static readonly RuntimeTypeHandle boundsType = typeof(Bounds).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25019));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25020));
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25020));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25021));
		NullCheck(L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28;
		L_28 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25021));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsType_14 = L_28;
		// static readonly RuntimeTypeHandle quaternionType = typeof(Quaternion).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25022));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25023));
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25023));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25024));
		NullCheck(L_30);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31;
		L_31 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25024));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___quaternionType_15 = L_31;
		// public static readonly IEqualityComparer<Vector2Int> Vector2Int = new Vector2IntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25025));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25026));
		Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* L_32 = (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC*)il2cpp_codegen_object_new(Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6(L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25026));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector2Int_16), (void*)L_32);
		// public static readonly IEqualityComparer<Vector3Int> Vector3Int = new Vector3IntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25027));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25028));
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_33 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25028));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___Vector3Int_17), (void*)L_33);
		// public static readonly IEqualityComparer<RangeInt> RangeInt = new RangeIntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25029));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25030));
		RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* L_34 = (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C*)il2cpp_codegen_object_new(RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25030));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RangeInt_18), (void*)L_34);
		// public static readonly IEqualityComparer<RectInt> RectInt = new RectIntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25031));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25032));
		RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* L_35 = (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1*)il2cpp_codegen_object_new(RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25032));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___RectInt_19), (void*)L_35);
		// public static readonly IEqualityComparer<BoundsInt> BoundsInt = new BoundsIntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25033));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25034));
		BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* L_36 = (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A*)il2cpp_codegen_object_new(BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25034));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___BoundsInt_20), (void*)L_36);
		// static readonly RuntimeTypeHandle vector2IntType = typeof(Vector2Int).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25035));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25036));
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25036));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25037));
		NullCheck(L_38);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39;
		L_39 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25037));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector2IntType_21 = L_39;
		// static readonly RuntimeTypeHandle vector3IntType = typeof(Vector3Int).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25038));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25039));
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25039));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25040));
		NullCheck(L_41);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42;
		L_42 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25040));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___vector3IntType_22 = L_42;
		// static readonly RuntimeTypeHandle rangeIntType = typeof(RangeInt).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25041));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25042));
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25042));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25043));
		NullCheck(L_44);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45;
		L_45 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25043));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rangeIntType_23 = L_45;
		// static readonly RuntimeTypeHandle rectIntType = typeof(RectInt).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25044));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25045));
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25045));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25046));
		NullCheck(L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48;
		L_48 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_47);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25046));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___rectIntType_24 = L_48;
		// static readonly RuntimeTypeHandle boundsIntType = typeof(BoundsInt).TypeHandle;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25047));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25048));
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25048));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25049));
		NullCheck(L_50);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51;
		L_51 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(145 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25049));
		((UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_il2cpp_TypeInfo_var))->___boundsIntType_25 = L_51;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::Equals(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2EqualityComparer_Equals_mDCF8794B659CF4F453670F50C038E29AB7A45B5F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25067));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25068));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25069));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25070));
		float* L_0 = (&(&___self0)->___x_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25071));
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25071));
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25072));
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25072));
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25073));
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::GetHashCode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2EqualityComparer_GetHashCode_mE3C5D0219CB404919B2DABFE2EA1A2DB4928BC43_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25074));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25075));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25076));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25077));
		float* L_0 = (&(&___obj0)->___x_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25078));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25078));
		float* L_2 = (&(&___obj0)->___y_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25079));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25079));
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25080));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222 (Vector2EqualityComparer_tE4C81CF0A1FCDFD45FA543C57ECC3A6139712892* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2EqualityComparer__ctor_m207C26FCCF0F5DC22A53A9B0F60F4147ABA55222_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::Equals(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3EqualityComparer_Equals_m37AFB52DA45A16EEC47E0EFA7547C7A92F7CE00C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25081));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25082));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25083));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25084));
		float* L_0 = (&(&___self0)->___x_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector1;
		float L_2 = L_1.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25085));
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25085));
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector1;
		float L_6 = L_5.___y_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25086));
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25086));
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vector1;
		float L_10 = L_9.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25087));
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25087));
		G_B4_0 = ((int32_t)(L_11));
		goto IL_003e;
	}

IL_003d:
	{
		G_B4_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25088));
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::GetHashCode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3EqualityComparer_GetHashCode_m2E0133ED677D6B890BC03F7C7558EDAEEF5B5989_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25089));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25090));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25091));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25092));
		float* L_0 = (&(&___obj0)->___x_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25093));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25093));
		float* L_2 = (&(&___obj0)->___y_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25094));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25094));
		float* L_4 = (&(&___obj0)->___z_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25095));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25095));
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002e;
	}

IL_002e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25096));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49 (Vector3EqualityComparer_t0A97326CCE9EE3A3180EB7733604BDA24742A6D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3EqualityComparer__ctor_m106F2FE1F18B2947A2D4B57C79D52F88BA085E49_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::Equals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___self0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector4EqualityComparer_Equals_m2086F254F3E0DBB61870C6AFC2071F0B55D46BEE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25097));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25098));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25099));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25100));
		float* L_0 = (&(&___self0)->___x_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___vector1;
		float L_2 = L_1.___x_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25101));
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25101));
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___vector1;
		float L_6 = L_5.___y_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25102));
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25102));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___vector1;
		float L_10 = L_9.___z_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25103));
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25103));
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___vector1;
		float L_14 = L_13.___w_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25104));
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25104));
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25105));
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::GetHashCode(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector4EqualityComparer_GetHashCode_m9A62BAC63109A30401C65E44DFDDC6DCC8A032DB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25106));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25107));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25108));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25109));
		float* L_0 = (&(&___obj0)->___x_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25110));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25110));
		float* L_2 = (&(&___obj0)->___y_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25111));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25111));
		float* L_4 = (&(&___obj0)->___z_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25112));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25112));
		float* L_6 = (&(&___obj0)->___w_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25113));
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25113));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25114));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E (Vector4EqualityComparer_t239B34303C7CC2F1FBFFCC246905B0D7049B1152* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector4EqualityComparer__ctor_m5E6E79B4C6602C5483FC06EF3C519FE37C7F030E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::Equals(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___other1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ColorEqualityComparer_Equals_mB179B1B397F1F1168EC53962ABB3523FF74AFD6B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25116));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25117));
		// return self.r.Equals(other.r) && self.g.Equals(other.g) && self.b.Equals(other.b) && self.a.Equals(other.a);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25118));
		float* L_0 = (&(&___self0)->___r_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___other1;
		float L_2 = L_1.___r_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25119));
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25119));
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___g_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___other1;
		float L_6 = L_5.___g_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25120));
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25120));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___b_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___other1;
		float L_10 = L_9.___b_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25121));
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25121));
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___a_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___other1;
		float L_14 = L_13.___a_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25122));
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25122));
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25123));
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::GetHashCode(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ColorEqualityComparer_GetHashCode_mE8448792E611375BF81BEB3F74EF316C9C5089F1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25124));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25125));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25126));
		// return obj.r.GetHashCode() ^ obj.g.GetHashCode() << 2 ^ obj.b.GetHashCode() >> 2 ^ obj.a.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25127));
		float* L_0 = (&(&___obj0)->___r_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25128));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25128));
		float* L_2 = (&(&___obj0)->___g_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25129));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25129));
		float* L_4 = (&(&___obj0)->___b_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25130));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25130));
		float* L_6 = (&(&___obj0)->___a_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25131));
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25131));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25132));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947 (ColorEqualityComparer_t5BFCE192ACDD784BECD34F1EC0544C3012418E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ColorEqualityComparer__ctor_m80FBCEE72A7623DD986FDA00A8C2D00BBF13E947_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::Equals(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___self0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5_RuntimeMethod_var);
	float V_0 = 0.0f;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___other1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectEqualityComparer_Equals_m7C5D4094F024E1E3303902EC45511360AB84C3A5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25134));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25135));
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25136));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25137));
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25137));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25138));
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25138));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25139));
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25139));
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25140));
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25140));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25141));
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25141));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25142));
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25142));
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25143));
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25143));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25144));
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25144));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25145));
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25145));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25146));
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25146));
		V_0 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25147));
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25147));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25148));
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25148));
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25149));
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::GetHashCode(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41_RuntimeMethod_var);
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectEqualityComparer_GetHashCode_m371270E3930F1051BA8A383A7AD4E8185F34BB41_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25152));
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25154));
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25154));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25155));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25155));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25156));
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25156));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25157));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25157));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25158));
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25158));
		V_0 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25159));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25159));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25160));
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25160));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25161));
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25161));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25162));
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885 (RectEqualityComparer_t6AC0D199CDEAFA4B26E21746A8C56D7F9F7DDD46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectEqualityComparer__ctor_m01CF0A80C073920D7259C0CF6F5E3768B3CCC885_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::Equals(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___self0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC_RuntimeMethod_var);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsEqualityComparer_Equals_mEEBF4CEE6EFACEE9C65585CF206560F896E450BC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25164));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25165));
		// return self.center.Equals(vector.center) && self.extents.Equals(vector.extents);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25166));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25167));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25167));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25168));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25168));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25169));
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25169));
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25170));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25171));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25171));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25172));
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25172));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25173));
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::GetHashCode(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332 (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332_RuntimeMethod_var);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsEqualityComparer_GetHashCode_m3B5BB89CBE2292F63CE1AF79355488D5FA842332_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25175));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25176));
		// return obj.center.GetHashCode() ^ obj.extents.GetHashCode() << 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25178));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25178));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25179));
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25179));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25180));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25180));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25181));
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25181));
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0031;
	}

IL_0031:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25182));
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B (BoundsEqualityComparer_t8B121029C54808DA48F1C767746CA716644D6742* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsEqualityComparer__ctor_m744245C474174E3821DDF6B29A3C9507E5F7E31B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::Equals(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___self0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, QuaternionEqualityComparer_Equals_m31074902EFDF140C640FE4572226107F8051AED6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25184));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25185));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25186));
		float* L_0 = (&(&___self0)->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25187));
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25187));
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25188));
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25188));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___vector1;
		float L_10 = L_9.___z_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25189));
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25189));
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___vector1;
		float L_14 = L_13.___w_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25190));
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25190));
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25191));
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::GetHashCode(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108 (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, QuaternionEqualityComparer_GetHashCode_m16370B5BA87F585E8EF9F90079BE8639A736B108_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25193));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25194));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25195));
		float* L_0 = (&(&___obj0)->___x_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25196));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25196));
		float* L_2 = (&(&___obj0)->___y_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25197));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25197));
		float* L_4 = (&(&___obj0)->___z_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25198));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25198));
		float* L_6 = (&(&___obj0)->___w_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25199));
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25199));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25200));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D (QuaternionEqualityComparer_t7DC680591918EBB65CE078C445BE26391A1685F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, QuaternionEqualityComparer__ctor_mFCB6AB9DDAFA9A18AB3234EBC4DD559ACEDFD81D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::Equals(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___self0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Color32EqualityComparer_Equals_m65994327B8D4AE5F437ECDBB056B51121D4E123C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25201));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25202));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25203));
		// return self.a.Equals(vector.a) && self.r.Equals(vector.r) && self.g.Equals(vector.g) && self.b.Equals(vector.b);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25204));
		uint8_t* L_0 = (&(&___self0)->___a_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___vector1;
		uint8_t L_2 = L_1.___a_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25205));
		bool L_3;
		L_3 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25205));
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_4 = (&(&___self0)->___r_1);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___vector1;
		uint8_t L_6 = L_5.___r_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25206));
		bool L_7;
		L_7 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25206));
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_8 = (&(&___self0)->___g_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___vector1;
		uint8_t L_10 = L_9.___g_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25207));
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_8, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25207));
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_12 = (&(&___self0)->___b_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___vector1;
		uint8_t L_14 = L_13.___b_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25208));
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_12, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25208));
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25209));
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::GetHashCode(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Color32EqualityComparer_GetHashCode_m6C09A2DCB410B21E5A7B29BF078997D13BD828AC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25211));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25212));
		// return obj.a.GetHashCode() ^ obj.r.GetHashCode() << 2 ^ obj.g.GetHashCode() >> 2 ^ obj.b.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25213));
		uint8_t* L_0 = (&(&___obj0)->___a_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25214));
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25214));
		uint8_t* L_2 = (&(&___obj0)->___r_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25215));
		int32_t L_3;
		L_3 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25215));
		uint8_t* L_4 = (&(&___obj0)->___g_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25216));
		int32_t L_5;
		L_5 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25216));
		uint8_t* L_6 = (&(&___obj0)->___b_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25217));
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25217));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25218));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7 (Color32EqualityComparer_tD6759662F86A1612EAFCCF19F00ABB45E283033C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Color32EqualityComparer__ctor_mF55426A5F99AA53C3FD4A1DD7021C77F012338C7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::Equals(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___self0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2IntEqualityComparer_Equals_m601E35C575B3B80972F7DCD6E0F4FFDB0BBC6FD1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25219));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25220));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25221));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25223));
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25223));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25224));
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25224));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25225));
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25225));
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25226));
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25226));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25227));
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25228));
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25228));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25229));
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::GetHashCode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2IntEqualityComparer_GetHashCode_mA47DD005DCD1F908934A7FBDEC0302B7E721CFB6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25230));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25231));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25232));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25234));
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25234));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25235));
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25235));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25236));
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25236));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25237));
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25237));
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25238));
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6 (Vector2IntEqualityComparer_t9F69F9DE69ABB66592537F4929F0D92D449566BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2IntEqualityComparer__ctor_m5B88D4FCC1D89A35D0AA716F22A1BC4D9D2E46A6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25239));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25240));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25241));
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25242));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25243));
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25243));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25244));
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25244));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25245));
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25245));
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25246));
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25246));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25247));
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25247));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25248));
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25248));
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25249));
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25249));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25250));
		int32_t L_7;
		L_7 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25250));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25251));
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25251));
		G_B4_0 = ((int32_t)(L_8));
		goto IL_004a;
	}

IL_0049:
	{
		G_B4_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B4_0;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25252));
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25253));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25254));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25255));
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25257));
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25257));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25258));
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25258));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25259));
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25259));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25260));
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25260));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25261));
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25261));
		V_0 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25262));
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25262));
		V_1 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_0037;
	}

IL_0037:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25263));
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2 (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Vector3IntEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3IntEqualityComparer__cctor_m756665A10DFA6CA45296419E6B855B84D46DA59C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25264));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25265));
	{
		// public static readonly Vector3IntEqualityComparer Default = new Vector3IntEqualityComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25266));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25267));
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = (Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3IntEqualityComparer__ctor_mA4AA6BF7F8538B26E688AEC47377342B1FEDDDE2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25267));
		((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::Equals(UnityEngine.RangeInt,UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___self0, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RangeIntEqualityComparer_Equals_mFAF08E61133434AAE753541F122850020EE5A5FC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25268));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25269));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25270));
		// return self.start.Equals(vector.start) && self.length.Equals(vector.length);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25271));
		int32_t* L_0 = (&(&___self0)->___start_0);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_1 = ___vector1;
		int32_t L_2 = L_1.___start_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25272));
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25272));
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = (&(&___self0)->___length_1);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_5 = ___vector1;
		int32_t L_6 = L_5.___length_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25273));
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25273));
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25274));
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::GetHashCode(UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RangeIntEqualityComparer_GetHashCode_m6E983D944CB99F6213799F3C01D1C4B2B0471A0D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25275));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25276));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25277));
		// return obj.start.GetHashCode() ^ obj.length.GetHashCode() << 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25278));
		int32_t* L_0 = (&(&___obj0)->___start_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25279));
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25279));
		int32_t* L_2 = (&(&___obj0)->___length_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25280));
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25280));
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25281));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F (RangeIntEqualityComparer_t9375BF82D236D61D6BFAC30A9EFB0422AA28BF5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RangeIntEqualityComparer__ctor_m2083D87FEE042275EDC16B25AF0D364674DDE85F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::Equals(UnityEngine.RectInt,UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___self0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___other1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectIntEqualityComparer_Equals_m2DB1E4DE26E7EBC6F11FBA44CAC624C1929052B7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25282));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25283));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25284));
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25285));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25286));
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25286));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25287));
		int32_t L_1;
		L_1 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25288));
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25288));
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25289));
		int32_t L_3;
		L_3 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25289));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25290));
		int32_t L_4;
		L_4 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25291));
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25291));
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25292));
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25292));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25293));
		int32_t L_7;
		L_7 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25293));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25294));
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25294));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25295));
		int32_t L_9;
		L_9 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25295));
		V_0 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25296));
		int32_t L_10;
		L_10 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___other1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25297));
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25297));
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25298));
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::GetHashCode(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectIntEqualityComparer_GetHashCode_mE62B5C63CA51E8456976FC89AD8C28BF7E268693_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25299));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25300));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25301));
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25302));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25303));
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25303));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25304));
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25305));
		int32_t L_2;
		L_2 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25305));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25306));
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25307));
		int32_t L_4;
		L_4 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25307));
		V_0 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25308));
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25309));
		int32_t L_6;
		L_6 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25309));
		V_0 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25310));
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25310));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25311));
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071 (RectIntEqualityComparer_tAC25FD5703FAAD23A387CF31E982C82CA868BDA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RectIntEqualityComparer__ctor_m561C0689A658AF24ACF83930EFF0C24C4C451071_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::Equals(UnityEngine.BoundsInt,UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96 (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___self0, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___self0), (&___vector1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsIntEqualityComparer_Equals_m122729F17B69AEA949D6EE76770F49C256D5FA96_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25312));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25313));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25314));
		// return Vector3IntEqualityComparer.Default.Equals(self.position, vector.position)
		//     && Vector3IntEqualityComparer.Default.Equals(self.size, vector.size);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25315));
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25316));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25316));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25317));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25317));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25318));
		NullCheck(L_0);
		bool L_3;
		L_3 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25318));
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_4 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25319));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
		L_5 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___self0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25319));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25320));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___vector1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25321));
		NullCheck(L_4);
		bool L_7;
		L_7 = Vector3IntEqualityComparer_Equals_mF18B9FF6B1CC550E240F27D4B00A6B902D453958(L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25321));
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 0;
	}

IL_0036:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25322));
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::GetHashCode(UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsIntEqualityComparer_GetHashCode_m0D967C9173D85163A31114670AFD2DBE43580F7C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25323));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25324));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25325));
		// return Vector3IntEqualityComparer.Default.GetHashCode(obj.position) ^ Vector3IntEqualityComparer.Default.GetHashCode(obj.size) << 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25326));
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_0 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25327));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25327));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25328));
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25328));
		Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B* L_3 = ((Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tD20DAFFD5CC214139779164A1D800C3944367A8B_il2cpp_TypeInfo_var))->___Default_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25329));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4;
		L_4 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___obj0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25329));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25330));
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Vector3IntEqualityComparer_GetHashCode_mBD55FE76A603A43A5A537640A998E2D873C88755(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25330));
		V_0 = ((int32_t)(L_2^((int32_t)(L_5<<2))));
		goto IL_0029;
	}

IL_0029:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25331));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B (BoundsIntEqualityComparer_t915464E0C0A1AAB759F69AE8387D7352E108366A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BoundsIntEqualityComparer__ctor_m24AFB0639DF0D9267F95F0530E9F05C3DA72920B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cysharp.Threading.Tasks.Internal.ValueStopwatch Cysharp.Threading.Tasks.Internal.ValueStopwatch::StartNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValueStopwatch_StartNew_m0E86DE08F588C60DCA8982B16DB6949C4A93233F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25333));
	{
		// public static ValueStopwatch StartNew() => new ValueStopwatch(Stopwatch.GetTimestamp());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25334));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25335));
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25335));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25336));
		ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68((&L_1), L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25336));
		return L_1;
	}
}
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, int64_t ___startTimestamp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___startTimestamp0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25337));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25338));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25339));
		// this.startTimestamp = startTimestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25340));
		int64_t L_0 = ___startTimestamp0;
		__this->___startTimestamp_1 = L_0;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25341));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68_AdjustorThunk (RuntimeObject* __this, int64_t ___startTimestamp0, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	ValueStopwatch__ctor_mF4323A30F6F82FAAA7C2C943EE2E708A2E482D68(_thisAdjusted, ___startTimestamp0, method);
}
// System.Boolean Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25342));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25343));
	{
		// public bool IsInvalid => startTimestamp == 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25344));
		int64_t L_0 = __this->___startTimestamp_1;
		return (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueStopwatch_get_IsInvalid_mE2AFBDC1DEB255E72DE87B2BD2C7EA8BFDCDBDF1(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Cysharp.Threading.Tasks.Internal.ValueStopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40 (ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var);
	int64_t V_0 = 0;
	bool V_1 = false;
	int64_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25345));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25346));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25347));
		// if (startTimestamp == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25348));
		int64_t L_0 = __this->___startTimestamp_1;
		V_1 = (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25349));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25350));
		// throw new InvalidOperationException("Detected invalid initialization(use 'default'), only to create from StartNew().");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25351));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25352));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC282D0727A5AEF94368AE281960FC490CF059B30)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25352));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_RuntimeMethod_var)));
	}

IL_001b:
	{
		// var delta = Stopwatch.GetTimestamp() - startTimestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25353));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25354));
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25354));
		int64_t L_4 = __this->___startTimestamp_1;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_3, L_4));
		// return (long)(delta * TimestampToTicks);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25355));
		int64_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		double L_6 = ((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply(((double)L_5), L_6)));
		goto IL_0034;
	}

IL_0034:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25356));
		int64_t L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int64_t ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ValueStopwatch_get_ElapsedTicks_mF4B713799E06F9F82066A6AB557F419F21C18E40(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.Internal.ValueStopwatch::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValueStopwatch__cctor_m57CAAF73C5CED4A7B8A02C11494C2D632AD7DAC1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25357));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25358));
	{
		// static readonly double TimestampToTicks = TimeSpan.TicksPerSecond / (double)Stopwatch.Frequency;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25359));
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0;
		((ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_StaticFields*)il2cpp_codegen_static_fields_for(ValueStopwatch_tCAD1C2BF016B8AA7D5B9C0B6451C4C19A802AF6E_il2cpp_TypeInfo_var))->___TimestampToTicks_0 = ((double)((10000000.0)/((double)L_0)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_RuntimeMethod_var);
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25360));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25361));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25362));
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25363));
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25364));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_1 = V_1;
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var);
	bool V_0 = false;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25365));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25366));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25367));
		// if (runnerPromise != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25368));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25369));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25370));
		// return runnerPromise.Task;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25371));
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25372));
		NullCheck(L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25372));
		V_1 = L_3;
		goto IL_0042;
	}

IL_001d:
	{
		// else if (ex != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25373));
		Exception_t* L_4 = __this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25374));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25375));
		// return UniTask.FromException(ex);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25376));
		Exception_t* L_6 = __this->___ex_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25377));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25377));
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25378));
		// return UniTask.CompletedTask;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25379));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25380));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _returnValue;
	_returnValue = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___exception0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25381));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25382));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25383));
		// if (runnerPromise == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25384));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25385));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25386));
		// ex = exception;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25387));
		Exception_t* L_2 = ___exception0;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25388));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25389));
		goto IL_0028;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25390));
		// runnerPromise.SetException(exception);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25391));
		RuntimeObject* L_3 = __this->___runnerPromise_0;
		Exception_t* L_4 = ___exception0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25392));
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25392));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25393));
	}

IL_0028:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25394));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(_thisAdjusted, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25395));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25396));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25397));
		// if (runnerPromise != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25398));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25399));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25400));
		// runnerPromise.SetResult();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25401));
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25402));
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25403));
	}

IL_001c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25404));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___stateMachine0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25437));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25438));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25439));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25440));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(_thisAdjusted, ___stateMachine0, method);
}
// System.Object Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_ObjectIdForDebugger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5 (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_RuntimeMethod_var);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25442));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25443));
		// if (debuggingId == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25444));
		RuntimeObject* L_0 = __this->___debuggingId_2;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25445));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25446));
		// debuggingId = new object();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25447));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25448));
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25448));
		__this->___debuggingId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debuggingId_2), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25449));
	}

IL_001b:
	{
		// return debuggingId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25450));
		RuntimeObject* L_3 = __this->___debuggingId_2;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25451));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncUniTaskMethodBuilder_get_ObjectIdForDebugger_mBB7C400F0F9DA63F795DC714AB16BA2DB2290CB5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_RuntimeMethod_var);
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25549));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25550));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25551));
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25552));
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25553));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_1 = V_1;
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25554));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25555));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25556));
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25557));
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25558));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 _returnValue;
	_returnValue = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___exception0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25559));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25560));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25561));
		// if (runner != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25562));
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25563));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25564));
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25565));
		RuntimeObject* L_2 = __this->___runner_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25566));
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25566));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25567));
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25567));
		// runner = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25568));
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25569));
	}

IL_002a:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25570));
		Exception_t* L_4 = ___exception0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25571));
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25571));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25572));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(_thisAdjusted, ___exception0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947 (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25573));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25574));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25575));
		// if (runner != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25576));
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25577));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25578));
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25579));
		RuntimeObject* L_2 = __this->___runner_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25580));
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25580));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25581));
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25581));
		// runner = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25582));
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25583));
	}

IL_002a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25584));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*>(__this + _offset);
	AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13804));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13805));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13806));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13807));
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13808));
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13787));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13788));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13789));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13790));
		float* L_0 = (&__this->___x_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13791));
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13791));
		float* L_2 = (&__this->___y_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13792));
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13792));
		float* L_4 = (&__this->___z_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13793));
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13793));
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13794));
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12748));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12749));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12750));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12751));
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12752));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12758));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12759));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12760));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12761));
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12762));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13514));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13515));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13516));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13517));
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13518));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13519));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13520));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13521));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13522));
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13523));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13524));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13525));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13526));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13527));
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 13528));
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25365));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25366));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25367));
		// if (runnerPromise != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25368));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25369));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25370));
		// return runnerPromise.Task;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25371));
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25372));
		NullCheck(L_2);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25372));
		V_1 = L_3;
		goto IL_0042;
	}

IL_001d:
	{
		// else if (ex != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25373));
		Exception_t* L_4 = __this->___ex_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25374));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25375));
		// return UniTask.FromException(ex);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25376));
		Exception_t* L_6 = __this->___ex_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25377));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
		L_7 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25377));
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25378));
		// return UniTask.CompletedTask;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25379));
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25380));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___exception0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25381));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25382));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25383));
		// if (runnerPromise == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25384));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25385));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25386));
		// ex = exception;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25387));
		Exception_t* L_2 = ___exception0;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25388));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25389));
		goto IL_0028;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25390));
		// runnerPromise.SetException(exception);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25391));
		RuntimeObject* L_3 = __this->___runnerPromise_0;
		Exception_t* L_4 = ___exception0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25392));
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25392));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25393));
	}

IL_0028:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25394));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25395));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25396));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25397));
		// if (runnerPromise != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25398));
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25399));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25400));
		// runnerPromise.SetResult();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25401));
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25402));
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25403));
	}

IL_001c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25404));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25554));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25555));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25556));
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25557));
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25558));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___exception0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25559));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25560));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25561));
		// if (runner != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25562));
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25563));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25564));
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25565));
		RuntimeObject* L_2 = __this->___runner_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25566));
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25566));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25567));
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25567));
		// runner = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25568));
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25569));
	}

IL_002a:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25570));
		Exception_t* L_4 = ___exception0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25571));
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25571));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25572));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25573));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUniTask + 25574));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25575));
		// if (runner != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25576));
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25577));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25578));
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25579));
		RuntimeObject* L_2 = __this->___runner_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25580));
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25580));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25581));
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25581));
		// runner = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25582));
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25583));
	}

IL_002a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUniTask + 25584));
		return;
	}
}
