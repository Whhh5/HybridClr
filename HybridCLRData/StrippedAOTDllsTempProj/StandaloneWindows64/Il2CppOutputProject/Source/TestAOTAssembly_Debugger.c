#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[3] = 
{
	{ 0, 0 } /* 0x06000001 System.Void TestAOT_2::Start() */,
	{ 0, 0 } /* 0x06000002 System.Void TestAOT_2::Update() */,
	{ 0, 0 } /* 0x06000003 System.Void TestAOT_2::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsTestAOTAssembly[];
Il2CppSequencePoint g_sequencePointsTestAOTAssembly[8] = 
{
	{ 40670, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 40670, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 40670, 1, 13, 13, 5, 6, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 40670, 1, 15, 15, 5, 6, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 40671, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 40671, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 40671, 1, 19, 19, 5, 6, 0, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 40671, 1, 21, 21, 5, 6, 1, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsTestAOTAssembly[];
Il2CppSequencePoint g_sequencePointsTestAOTAssembly[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "F:\\MyProject\\HyBridCLR\\HybridCLR1\\Assets\\Scripts\\AOTGenericInstance\\TestAOT_2.cs", { 57, 138, 191, 215, 225, 4, 73, 23, 58, 74, 23, 80, 179, 252, 218, 61} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 5815, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[3] = 
{
	{ 0, 0, 0 } /* System.Void TestAOT_2::Start() */,
	{ 0, 0, 0 } /* System.Void TestAOT_2::Update() */,
	{ 0, 0, 0 } /* System.Void TestAOT_2::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationTestAOTAssembly;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationTestAOTAssembly = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	8,
	(Il2CppSequencePoint*)g_sequencePointsTestAOTAssembly,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
