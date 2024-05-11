#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 23304, 0,  1 } /*tableIndex: 0 */,
	{ 23304, 0,  2 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"request",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[15] = 
{
	{ 0, 0 } /* 0x06000001 UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String) */,
	{ 0, 1 } /* 0x06000002 UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,System.UInt32) */,
	{ 1, 1 } /* 0x06000003 UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0 } /* 0x06000004 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000005 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0 } /* 0x0600000A System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0 } /* 0x0600000B UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.Networking.DownloadHandlerAssetBundle::get_autoLoadAssetBundle() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::set_autoLoadAssetBundle(System.Boolean) */,
	{ 0, 0 } /* 0x0600000E System.Boolean UnityEngine.Networking.DownloadHandlerAssetBundle::get_isDownloadComplete() */,
	{ 0, 0 } /* 0x0600000F System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[57] = 
{
	{ 38899, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 38899, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 38899, 1, 9, 9, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 38899, 1, 10, 10, 13, 43, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 38899, 1, 10, 10, 13, 43, 3, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 38899, 1, 11, 11, 9, 10, 11, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 38900, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 38900, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 38900, 1, 19, 19, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 38900, 1, 20, 25, 13, 15, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 38900, 1, 20, 25, 13, 15, 9, kSequencePointKind_StepOut, 0, 10 } /* seqPointIndex: 10 */,
	{ 38900, 1, 20, 25, 13, 15, 15, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 38900, 1, 27, 27, 13, 28, 21, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 38900, 1, 28, 28, 9, 10, 25, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 38901, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 38901, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 38901, 1, 91, 91, 9, 10, 0, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 38901, 1, 92, 97, 13, 15, 1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 38901, 1, 92, 97, 13, 15, 10, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 38901, 1, 92, 97, 13, 15, 16, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 38901, 1, 99, 99, 13, 28, 22, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 38901, 1, 100, 100, 9, 10, 26, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 38904, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 38904, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 38904, 2, 16, 16, 9, 10, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 38904, 2, 17, 17, 13, 44, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 38904, 2, 17, 17, 13, 44, 5, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 38904, 2, 18, 18, 9, 10, 15, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 38905, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 38905, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 38905, 2, 21, 21, 9, 10, 0, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 38905, 2, 22, 22, 13, 62, 1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 38905, 2, 22, 22, 13, 62, 8, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 38905, 2, 23, 23, 9, 10, 18, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 38906, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 38906, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 38906, 2, 25, 25, 9, 64, 0, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 38906, 2, 25, 25, 9, 64, 1, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 38906, 2, 26, 26, 9, 10, 7, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 38906, 2, 27, 27, 13, 49, 8, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 38906, 2, 27, 27, 13, 49, 11, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 38906, 2, 28, 28, 9, 10, 17, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 38907, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 38907, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 38907, 2, 45, 45, 9, 96, 0, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 38907, 2, 45, 45, 9, 96, 1, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 38907, 2, 46, 46, 9, 10, 7, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 38907, 2, 47, 47, 13, 93, 8, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 38907, 2, 47, 47, 13, 93, 12, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 38907, 2, 47, 47, 13, 93, 19, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 38907, 2, 47, 47, 13, 93, 25, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 38907, 2, 48, 48, 9, 10, 31, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 38908, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 38908, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 38908, 2, 56, 56, 9, 10, 0, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 38908, 2, 57, 57, 13, 104, 1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 38908, 2, 57, 57, 13, 104, 6, kSequencePointKind_StepOut, 0, 56 } /* seqPointIndex: 56 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\UnityWebRequestAssetBundle\\UnityWebRequestAssetBundle.cs", { 43, 59, 30, 199, 31, 44, 42, 123, 118, 187, 5, 96, 49, 79, 186, 7} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\UnityWebRequestAssetBundle\\Public\\DownloadHandlerAssetBundle.bindings.cs", { 172, 106, 229, 19, 162, 150, 132, 180, 165, 5, 112, 231, 114, 44, 77, 232} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 5632, 1 },
	{ 5633, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[3] = 
{
	{ 0, 13 },
	{ 0, 27 },
	{ 0, 28 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[15] = 
{
	{ 13, 0, 1 } /* UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String) */,
	{ 27, 1, 1 } /* UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,System.UInt32) */,
	{ 28, 2, 1 } /* UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundle(System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0, 0 } /* UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Networking.DownloadHandlerAssetBundle::get_autoLoadAssetBundle() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::set_autoLoadAssetBundle(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Networking.DownloadHandlerAssetBundle::get_isDownloadComplete() */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	57,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
