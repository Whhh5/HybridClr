#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsHybridCLR_Runtime[];
IL2CPP_EXTERN_C const RuntimeMethod* ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB_0_0_0_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0DFB154750CEF95F40DFD18F49DF0881C0A7176 
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// HybridCLR.RuntimeApi
struct RuntimeApi_tA19E50636DDDC4D8EA30DEC54EE4DFD73CAE62D2  : public RuntimeObject
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 HybridCLR.ReversePInvokeWrapperGenerationAttribute::<ReserveWrapperCount>k__BackingField
	int32_t ___U3CReserveWrapperCountU3Ek__BackingField_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 HybridCLR.RuntimeApi::GetRuntimeOption(HybridCLR.RuntimeOptionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8 (int32_t ___optionId0, const RuntimeMethod* method) ;
// System.Void HybridCLR.RuntimeApi::SetRuntimeOption(HybridCLR.RuntimeOptionId,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B (int32_t ___optionId0, int32_t ___value1, const RuntimeMethod* method) ;
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
// System.Int32 HybridCLR.ReversePInvokeWrapperGenerationAttribute::get_ReserveWrapperCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967 (ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 1));
	{
		// public int ReserveWrapperCount { get; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 2));
		int32_t L_0 = __this->___U3CReserveWrapperCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void HybridCLR.ReversePInvokeWrapperGenerationAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D (ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB* __this, int32_t ___reserveWrapperCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___reserveWrapperCount0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 4));
	{
		// public ReversePInvokeWrapperGenerationAttribute(int reserveWrapperCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 6));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 7));
		// ReserveWrapperCount = reserveWrapperCount;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 8));
		int32_t L_0 = ___reserveWrapperCount0;
		__this->___U3CReserveWrapperCountU3Ek__BackingField_0 = L_0;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 9));
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
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dllBytes0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_RuntimeMethod_var);
	typedef int32_t (*RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t);
	static RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8_ftn)il2cpp_codegen_resolve_icall ("HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)");
	int32_t icallRetVal = _il2cpp_icall_func(___dllBytes0, ___mode1);
	return icallRetVal;
}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadObjectStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 10));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 11));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 12));
		// return GetRuntimeOption(RuntimeOptionId.InterpreterThreadObjectStackSize);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 14));
		int32_t L_0;
		L_0 = RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8(1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 14));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 15));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadObjectStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5 (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5_RuntimeMethod_var);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___size0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 16));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 17));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 18));
		// SetRuntimeOption(RuntimeOptionId.InterpreterThreadObjectStackSize, size);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 19));
		int32_t L_0 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 20));
		RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B(1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 20));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 21));
		return;
	}
}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadFrameStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 23));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 24));
		// return GetRuntimeOption(RuntimeOptionId.InterpreterThreadFrameStackSize);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 25));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 26));
		int32_t L_0;
		L_0 = RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8(2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 26));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 27));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadFrameStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97 (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97_RuntimeMethod_var);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___size0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 28));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 29));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 30));
		// SetRuntimeOption(RuntimeOptionId.InterpreterThreadFrameStackSize, size);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 31));
		int32_t L_0 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 32));
		RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B(2, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 32));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsHybridCLR_Runtime + 33));
		return;
	}
}
// System.Void HybridCLR.RuntimeApi::SetRuntimeOption(HybridCLR.RuntimeOptionId,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B (int32_t ___optionId0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_RuntimeMethod_var);
	typedef void (*RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_ftn) (int32_t, int32_t);
	static RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeApi_SetRuntimeOption_m13F799D33A63051677C46AF46EC2653E387D314B_ftn)il2cpp_codegen_resolve_icall ("HybridCLR.RuntimeApi::SetRuntimeOption(HybridCLR.RuntimeOptionId,System.Int32)");
	_il2cpp_icall_func(___optionId0, ___value1);
}
// System.Int32 HybridCLR.RuntimeApi::GetRuntimeOption(HybridCLR.RuntimeOptionId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8 (int32_t ___optionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_RuntimeMethod_var);
	typedef int32_t (*RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_ftn) (int32_t);
	static RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeApi_GetRuntimeOption_m050B3408C95C5D700A12893A54D952D64B54CBE8_ftn)il2cpp_codegen_resolve_icall ("HybridCLR.RuntimeApi::GetRuntimeOption(HybridCLR.RuntimeOptionId)");
	int32_t icallRetVal = _il2cpp_icall_func(___optionId0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
