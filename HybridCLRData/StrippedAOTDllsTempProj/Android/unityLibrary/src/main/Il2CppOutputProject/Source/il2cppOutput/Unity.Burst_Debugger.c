#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[5] = 
{
	{ 8759, 0,  0 } /*tableIndex: 0 */,
	{ 8759, 0,  1 } /*tableIndex: 1 */,
	{ 12177, 1,  3 } /*tableIndex: 2 */,
	{ 10009, 2,  5 } /*tableIndex: 3 */,
	{ 7550, 3,  5 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[4] = 
{
	"changed",
	"arg",
	"hash128",
	"result",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[37] = 
{
	{ 0, 0 } /* 0x06000001 Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::get_FloatMode() */,
	{ 0, 0 } /* 0x06000002 System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode) */,
	{ 0, 0 } /* 0x06000003 Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::get_FloatPrecision() */,
	{ 0, 0 } /* 0x06000004 System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision) */,
	{ 0, 0 } /* 0x06000005 System.Boolean Unity.Burst.BurstCompileAttribute::get_CompileSynchronously() */,
	{ 0, 0 } /* 0x06000006 System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean) */,
	{ 0, 0 } /* 0x06000007 System.Boolean Unity.Burst.BurstCompileAttribute::get_Debug() */,
	{ 0, 0 } /* 0x06000008 System.Void Unity.Burst.BurstCompileAttribute::set_Debug(System.Boolean) */,
	{ 0, 0 } /* 0x06000009 System.Boolean Unity.Burst.BurstCompileAttribute::get_DisableSafetyChecks() */,
	{ 0, 0 } /* 0x0600000A System.Void Unity.Burst.BurstCompileAttribute::set_DisableSafetyChecks(System.Boolean) */,
	{ 0, 0 } /* 0x0600000B System.Boolean Unity.Burst.BurstCompileAttribute::get_DisableDirectCall() */,
	{ 0, 0 } /* 0x0600000C System.Void Unity.Burst.BurstCompileAttribute::set_DisableDirectCall(System.Boolean) */,
	{ 0, 0 } /* 0x0600000D Unity.Burst.OptimizeFor Unity.Burst.BurstCompileAttribute::get_OptimizeFor() */,
	{ 0, 0 } /* 0x0600000E System.Void Unity.Burst.BurstCompileAttribute::set_OptimizeFor(Unity.Burst.OptimizeFor) */,
	{ 0, 0 } /* 0x0600000F System.String[] Unity.Burst.BurstCompileAttribute::get_Options() */,
	{ 0, 0 } /* 0x06000010 System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[]) */,
	{ 0, 0 } /* 0x06000011 System.Void Unity.Burst.BurstCompileAttribute::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode) */,
	{ 0, 0 } /* 0x06000013 System.Void Unity.Burst.BurstCompileAttribute::.ctor(System.String[]) */,
	{ 0, 0 } /* 0x06000014 System.Void Unity.Burst.BurstCompiler::DummyMethod() */,
	{ 0, 0 } /* 0x06000015 System.Void Unity.Burst.BurstCompiler::.cctor() */,
	{ 0, 0 } /* 0x06000016 System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method() */,
	{ 0, 0 } /* 0x06000017 System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean) */,
	{ 0, 0 } /* 0x06000018 System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal() */,
	{ 0, 1 } /* 0x06000019 System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean) */,
	{ 1, 1 } /* 0x0600001A System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean) */,
	{ 0, 0 } /* 0x0600001B System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged() */,
	{ 0, 0 } /* 0x0600001C System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged() */,
	{ 0, 0 } /* 0x0600001D System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation() */,
	{ 0, 0 } /* 0x0600001E System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption() */,
	{ 2, 1 } /* 0x0600001F System.Void Unity.Burst.BurstCompilerOptions::.cctor() */,
	{ 0, 0 } /* 0x06000020 System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess() */,
	{ 0, 0 } /* 0x06000021 System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32) */,
	{ 0, 0 } /* 0x06000022 System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor() */,
	{ 3, 2 } /* 0x06000023 System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32) */,
	{ 0, 0 } /* 0x06000024 System.Void Unity.Burst.SharedStatic::.cctor() */,
	{ 0, 0 } /* 0x06000025 System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
Il2CppSequencePoint g_sequencePointsUnity_Burst[237] = 
{
	{ 29776, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 29776, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 29776, 1, 115, 115, 38, 42, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 29777, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 29777, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 29777, 1, 115, 115, 43, 47, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 29778, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 29778, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 29778, 1, 124, 124, 48, 52, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 29779, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 29779, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 29779, 1, 124, 124, 53, 57, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 29780, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 29780, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 29780, 1, 134, 134, 20, 88, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 29780, 1, 134, 134, 20, 88, 6, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 29780, 1, 134, 134, 20, 88, 22, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 29781, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 29781, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 29781, 1, 135, 135, 20, 49, 0, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 29781, 1, 135, 135, 20, 49, 2, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 29782, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 29782, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 29782, 1, 150, 150, 20, 58, 0, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 29782, 1, 150, 150, 20, 58, 6, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 29782, 1, 150, 150, 20, 58, 22, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 29783, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 29783, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 29783, 1, 151, 151, 20, 34, 0, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 29783, 1, 151, 151, 20, 34, 2, kSequencePointKind_StepOut, 0, 29 } /* seqPointIndex: 29 */,
	{ 29784, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 29784, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 29784, 1, 166, 166, 20, 86, 0, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 29784, 1, 166, 166, 20, 86, 6, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
	{ 29784, 1, 166, 166, 20, 86, 22, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 29785, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 29785, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 29785, 1, 167, 167, 20, 48, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 29785, 1, 167, 167, 20, 48, 2, kSequencePointKind_StepOut, 0, 38 } /* seqPointIndex: 38 */,
	{ 29786, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 29786, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 29786, 1, 184, 184, 20, 82, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 29786, 1, 184, 184, 20, 82, 6, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 29786, 1, 184, 184, 20, 82, 22, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 29787, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 29787, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 29787, 1, 185, 185, 20, 46, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 29787, 1, 185, 185, 20, 46, 2, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 29788, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 29788, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 29788, 1, 195, 195, 42, 46, 0, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 29789, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 29789, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 29789, 1, 195, 195, 47, 51, 0, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 29790, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 29790, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 29790, 1, 197, 197, 37, 41, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 29791, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 29791, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 29791, 1, 197, 197, 42, 46, 0, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 29792, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 29792, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 29792, 1, 211, 211, 9, 39, 0, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 29792, 1, 211, 211, 9, 39, 1, kSequencePointKind_StepOut, 0, 63 } /* seqPointIndex: 63 */,
	{ 29792, 1, 212, 212, 9, 10, 7, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 29792, 1, 213, 213, 9, 10, 8, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 29793, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 29793, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 29793, 1, 229, 229, 9, 89, 0, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 29793, 1, 229, 229, 9, 89, 1, kSequencePointKind_StepOut, 0, 69 } /* seqPointIndex: 69 */,
	{ 29793, 1, 230, 230, 9, 10, 7, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 29793, 1, 231, 231, 13, 35, 8, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 29793, 1, 231, 231, 13, 35, 10, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 29793, 1, 232, 232, 13, 45, 16, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 29793, 1, 232, 232, 13, 45, 18, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 29793, 1, 233, 233, 9, 10, 24, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 29794, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 29794, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 29794, 1, 235, 235, 9, 57, 0, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 29794, 1, 235, 235, 9, 57, 1, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 29794, 1, 236, 236, 9, 10, 7, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 29794, 1, 237, 237, 13, 31, 8, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 29794, 1, 237, 237, 13, 31, 10, kSequencePointKind_StepOut, 0, 82 } /* seqPointIndex: 82 */,
	{ 29794, 1, 238, 238, 9, 10, 16, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 29795, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 29795, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 29795, 2, 611, 611, 43, 44, 0, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 29795, 2, 611, 611, 45, 46, 1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 29796, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 29796, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 29796, 2, 82, 82, 9, 94, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 29796, 2, 82, 82, 9, 94, 1, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 29796, 2, 606, 606, 9, 161, 11, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 29796, 2, 606, 606, 9, 161, 16, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 29796, 2, 606, 606, 9, 161, 28, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 29797, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 29797, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 29797, 2, 666, 666, 40, 44, 0, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 29798, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 29798, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 29798, 3, 192, 192, 9, 53, 0, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 29798, 3, 192, 192, 9, 53, 1, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 29798, 3, 193, 193, 9, 10, 7, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 29798, 3, 199, 199, 13, 14, 8, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 29798, 3, 200, 200, 17, 37, 9, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 29798, 3, 202, 202, 17, 47, 16, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 29798, 3, 202, 202, 17, 47, 18, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 29798, 3, 203, 203, 17, 48, 24, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 29798, 3, 203, 203, 17, 48, 26, kSequencePointKind_StepOut, 0, 108 } /* seqPointIndex: 108 */,
	{ 29798, 3, 204, 204, 13, 14, 32, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 29798, 3, 206, 206, 13, 14, 35, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 29798, 3, 210, 210, 13, 14, 36, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 29798, 3, 211, 211, 9, 10, 38, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 29799, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 29799, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 29799, 3, 216, 216, 33, 37, 0, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 29800, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 29800, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 29800, 3, 233, 233, 13, 14, 0, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 29800, 3, 235, 235, 17, 62, 1, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 29800, 3, 235, 235, 17, 62, 2, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 29800, 3, 235, 235, 0, 0, 18, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 29800, 3, 235, 235, 63, 77, 21, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 29800, 3, 237, 237, 17, 65, 24, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 29800, 3, 239, 239, 17, 38, 37, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 29800, 3, 239, 239, 0, 0, 41, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 29800, 3, 240, 240, 17, 18, 44, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 29800, 3, 241, 241, 21, 50, 45, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 29800, 3, 241, 241, 21, 50, 46, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 29800, 3, 242, 242, 17, 18, 52, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 29800, 3, 244, 244, 17, 49, 53, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 29800, 3, 247, 247, 17, 30, 60, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 29800, 3, 247, 247, 17, 30, 61, kSequencePointKind_StepOut, 0, 132 } /* seqPointIndex: 132 */,
	{ 29800, 3, 247, 247, 0, 0, 67, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 29800, 3, 248, 248, 17, 18, 70, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 29800, 3, 253, 253, 21, 60, 71, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 29800, 3, 253, 253, 21, 60, 72, kSequencePointKind_StepOut, 0, 136 } /* seqPointIndex: 136 */,
	{ 29800, 3, 272, 272, 21, 54, 78, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 29800, 3, 273, 273, 17, 18, 84, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 29800, 3, 275, 275, 17, 29, 85, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 29800, 3, 275, 275, 0, 0, 88, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 29800, 3, 276, 276, 17, 18, 92, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 29800, 3, 277, 277, 21, 40, 93, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 29800, 3, 277, 277, 21, 40, 94, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 29800, 3, 278, 278, 17, 18, 100, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 29800, 3, 279, 279, 13, 14, 101, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 29801, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 29801, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 29801, 3, 309, 309, 13, 14, 0, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 29801, 3, 310, 310, 17, 66, 1, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 29801, 3, 312, 312, 17, 29, 14, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 29801, 3, 312, 312, 0, 0, 16, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 29801, 3, 313, 313, 17, 18, 19, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 29801, 3, 314, 314, 21, 50, 20, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 29801, 3, 314, 314, 21, 50, 21, kSequencePointKind_StepOut, 0, 154 } /* seqPointIndex: 154 */,
	{ 29801, 3, 315, 315, 17, 18, 27, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 29801, 3, 317, 317, 17, 50, 28, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 29801, 3, 318, 318, 17, 29, 35, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 29801, 3, 318, 318, 0, 0, 37, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 29801, 3, 319, 319, 17, 18, 40, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 29801, 3, 320, 320, 21, 40, 41, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 29801, 3, 320, 320, 21, 40, 42, kSequencePointKind_StepOut, 0, 161 } /* seqPointIndex: 161 */,
	{ 29801, 3, 321, 321, 21, 49, 48, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 29801, 3, 321, 321, 21, 49, 49, kSequencePointKind_StepOut, 0, 163 } /* seqPointIndex: 163 */,
	{ 29801, 3, 322, 322, 17, 18, 55, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 29801, 3, 323, 323, 13, 14, 56, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 29802, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 29802, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 29802, 3, 417, 417, 42, 46, 0, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 29803, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 29803, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 29803, 3, 712, 712, 9, 10, 0, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 29803, 3, 713, 713, 13, 38, 1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 29803, 3, 713, 713, 13, 38, 2, kSequencePointKind_StepOut, 0, 173 } /* seqPointIndex: 173 */,
	{ 29803, 3, 713, 713, 13, 38, 13, kSequencePointKind_StepOut, 0, 174 } /* seqPointIndex: 174 */,
	{ 29803, 3, 714, 714, 9, 10, 19, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 29804, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 29804, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 29804, 3, 717, 717, 9, 10, 0, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 29804, 3, 732, 732, 9, 10, 1, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 29805, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 29805, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 29805, 3, 742, 742, 9, 10, 0, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 29805, 3, 756, 756, 9, 10, 1, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 29806, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 29806, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 29806, 3, 763, 763, 9, 10, 0, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 29806, 3, 764, 764, 13, 20, 1, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 29806, 3, 764, 764, 33, 65, 2, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 29806, 3, 764, 764, 33, 65, 2, kSequencePointKind_StepOut, 0, 189 } /* seqPointIndex: 189 */,
	{ 29806, 3, 764, 764, 0, 0, 10, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 29806, 3, 764, 764, 22, 29, 12, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 29806, 3, 765, 765, 13, 14, 16, kSequencePointKind_Normal, 0, 192 } /* seqPointIndex: 192 */,
	{ 29806, 3, 766, 766, 17, 29, 17, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 29806, 3, 766, 766, 0, 0, 20, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 29806, 3, 766, 766, 0, 0, 23, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 29806, 3, 766, 766, 0, 0, 29, kSequencePointKind_StepOut, 0, 196 } /* seqPointIndex: 196 */,
	{ 29806, 3, 766, 766, 0, 0, 42, kSequencePointKind_StepOut, 0, 197 } /* seqPointIndex: 197 */,
	{ 29806, 3, 769, 769, 25, 61, 51, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 29806, 3, 770, 770, 25, 31, 57, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 29806, 3, 772, 772, 25, 67, 59, kSequencePointKind_Normal, 0, 200 } /* seqPointIndex: 200 */,
	{ 29806, 3, 773, 773, 25, 31, 65, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 29806, 3, 775, 775, 13, 14, 67, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 29806, 3, 775, 775, 0, 0, 68, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 29806, 3, 764, 764, 30, 32, 72, kSequencePointKind_Normal, 0, 204 } /* seqPointIndex: 204 */,
	{ 29806, 3, 777, 777, 13, 48, 78, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 29806, 3, 777, 777, 13, 48, 78, kSequencePointKind_StepOut, 0, 206 } /* seqPointIndex: 206 */,
	{ 29806, 3, 777, 777, 0, 0, 85, kSequencePointKind_Normal, 0, 207 } /* seqPointIndex: 207 */,
	{ 29806, 3, 778, 778, 13, 14, 89, kSequencePointKind_Normal, 0, 208 } /* seqPointIndex: 208 */,
	{ 29806, 3, 779, 779, 17, 53, 90, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 29806, 3, 780, 780, 17, 48, 96, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 29806, 3, 781, 781, 13, 14, 102, kSequencePointKind_Normal, 0, 211 } /* seqPointIndex: 211 */,
	{ 29806, 3, 782, 782, 9, 10, 103, kSequencePointKind_Normal, 0, 212 } /* seqPointIndex: 212 */,
	{ 29807, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 213 } /* seqPointIndex: 213 */,
	{ 29807, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 214 } /* seqPointIndex: 214 */,
	{ 29807, 3, 785, 785, 9, 10, 0, kSequencePointKind_Normal, 0, 215 } /* seqPointIndex: 215 */,
	{ 29807, 3, 808, 808, 13, 26, 1, kSequencePointKind_Normal, 0, 216 } /* seqPointIndex: 216 */,
	{ 29807, 3, 809, 809, 9, 10, 5, kSequencePointKind_Normal, 0, 217 } /* seqPointIndex: 217 */,
	{ 29808, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 218 } /* seqPointIndex: 218 */,
	{ 29808, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 219 } /* seqPointIndex: 219 */,
	{ 29808, 4, 157, 157, 9, 10, 0, kSequencePointKind_Normal, 0, 220 } /* seqPointIndex: 220 */,
	{ 29808, 4, 158, 158, 13, 166, 1, kSequencePointKind_Normal, 0, 221 } /* seqPointIndex: 221 */,
	{ 29808, 4, 158, 158, 13, 166, 7, kSequencePointKind_StepOut, 0, 222 } /* seqPointIndex: 222 */,
	{ 29808, 4, 159, 159, 9, 10, 13, kSequencePointKind_Normal, 0, 223 } /* seqPointIndex: 223 */,
	{ 29810, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 224 } /* seqPointIndex: 224 */,
	{ 29810, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 225 } /* seqPointIndex: 225 */,
	{ 29810, 5, 168, 168, 9, 10, 0, kSequencePointKind_Normal, 0, 226 } /* seqPointIndex: 226 */,
	{ 29810, 5, 170, 170, 13, 98, 1, kSequencePointKind_Normal, 0, 227 } /* seqPointIndex: 227 */,
	{ 29810, 5, 170, 170, 13, 98, 5, kSequencePointKind_StepOut, 0, 228 } /* seqPointIndex: 228 */,
	{ 29810, 5, 171, 171, 13, 124, 10, kSequencePointKind_Normal, 0, 229 } /* seqPointIndex: 229 */,
	{ 29810, 5, 171, 171, 13, 124, 14, kSequencePointKind_StepOut, 0, 230 } /* seqPointIndex: 230 */,
	{ 29810, 5, 173, 173, 13, 27, 20, kSequencePointKind_Normal, 0, 231 } /* seqPointIndex: 231 */,
	{ 29810, 5, 174, 174, 9, 10, 24, kSequencePointKind_Normal, 0, 232 } /* seqPointIndex: 232 */,
	{ 29811, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 233 } /* seqPointIndex: 233 */,
	{ 29811, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 234 } /* seqPointIndex: 234 */,
	{ 29811, 5, 114, 114, 9, 98, 0, kSequencePointKind_Normal, 0, 235 } /* seqPointIndex: 235 */,
	{ 29811, 5, 114, 114, 9, 98, 0, kSequencePointKind_StepOut, 0, 236 } /* seqPointIndex: 236 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Burst[];
Il2CppSequencePoint g_sequencePointsUnity_Burst[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Library\\PackageCache\\com.unity.burst@1.6.6\\Runtime\\BurstCompileAttribute.cs", { 139, 53, 112, 128, 70, 127, 96, 56, 84, 44, 93, 187, 252, 79, 163, 40} }, //1 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Library\\PackageCache\\com.unity.burst@1.6.6\\Runtime\\BurstCompiler.cs", { 167, 98, 152, 195, 144, 191, 169, 109, 44, 207, 6, 163, 129, 121, 238, 104} }, //2 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Library\\PackageCache\\com.unity.burst@1.6.6\\Runtime\\BurstCompilerOptions.cs", { 231, 22, 9, 73, 25, 223, 235, 128, 97, 55, 123, 200, 113, 46, 1, 36} }, //3 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Library\\PackageCache\\com.unity.burst@1.6.6\\Runtime\\BurstRuntime.cs", { 127, 104, 78, 195, 12, 54, 243, 126, 175, 242, 27, 191, 247, 16, 153, 164} }, //4 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Library\\PackageCache\\com.unity.burst@1.6.6\\Runtime\\SharedStatic.cs", { 120, 58, 179, 74, 97, 251, 178, 137, 239, 109, 255, 34, 169, 88, 62, 244} }, //5 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 4227, 1 },
	{ 4229, 2 },
	{ 4228, 2 },
	{ 4230, 3 },
	{ 4232, 4 },
	{ 4234, 5 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[6] = 
{
	{ 0, 102 },
	{ 0, 57 },
	{ 0, 104 },
	{ 12, 68 },
	{ 0, 7 },
	{ 0, 26 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[37] = 
{
	{ 0, 0, 0 } /* Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::get_FloatMode() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode) */,
	{ 0, 0, 0 } /* Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::get_FloatPrecision() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompileAttribute::get_CompileSynchronously() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompileAttribute::get_Debug() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_Debug(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompileAttribute::get_DisableSafetyChecks() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_DisableSafetyChecks(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompileAttribute::get_DisableDirectCall() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_DisableDirectCall(System.Boolean) */,
	{ 0, 0, 0 } /* Unity.Burst.OptimizeFor Unity.Burst.BurstCompileAttribute::get_OptimizeFor() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_OptimizeFor(Unity.Burst.OptimizeFor) */,
	{ 0, 0, 0 } /* System.String[] Unity.Burst.BurstCompileAttribute::get_Options() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[]) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompileAttribute::.ctor(System.String[]) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompiler::DummyMethod() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompiler::.cctor() */,
	{ 0, 0, 0 } /* System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal() */,
	{ 102, 0, 1 } /* System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean) */,
	{ 57, 1, 1 } /* System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean) */,
	{ 0, 0, 0 } /* System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption() */,
	{ 104, 2, 2 } /* System.Void Unity.Burst.BurstCompilerOptions::.cctor() */,
	{ 7, 4, 1 } /* System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor() */,
	{ 26, 5, 1 } /* System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.SharedStatic::.cctor() */,
	{ 0, 0, 0 } /* System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Burst;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Burst = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	237,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Burst,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
