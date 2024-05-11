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
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[27] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x0600000C System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource) */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single) */,
	{ 0, 0 } /* 0x0600000E System.Single UnityEngine.AudioSource::get_volume() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 0, 0 } /* 0x06000010 System.Single UnityEngine.AudioSource::get_pitch() */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioSource::set_pitch(System.Single) */,
	{ 0, 0 } /* 0x06000012 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000013 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000014 System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&) */,
	{ 0, 0 } /* 0x06000016 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[86] = 
{
	{ 38733, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 38733, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 38733, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 38733, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 38733, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 38733, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 38733, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 38733, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 38734, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 38734, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 38734, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 38734, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 38735, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 38735, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 38735, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 38735, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 38738, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 38738, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 38738, 1, 632, 632, 9, 10, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 38738, 1, 633, 633, 13, 45, 1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 38738, 1, 633, 633, 0, 0, 11, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 38738, 1, 634, 634, 17, 43, 14, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 38738, 1, 634, 634, 17, 43, 21, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 38738, 1, 635, 635, 9, 10, 27, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 38739, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 38739, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 38739, 1, 639, 639, 9, 10, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 38739, 1, 640, 640, 13, 50, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 38739, 1, 640, 640, 0, 0, 11, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 38739, 1, 641, 641, 17, 52, 14, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 38739, 1, 641, 641, 17, 52, 21, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 38739, 1, 642, 642, 9, 10, 27, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 38748, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 38748, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 38748, 1, 736, 736, 17, 18, 0, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 38748, 1, 736, 736, 19, 41, 1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 38748, 1, 736, 736, 19, 41, 2, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 38748, 1, 736, 736, 42, 43, 10, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 38749, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 38749, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 38749, 1, 737, 737, 17, 18, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 38749, 1, 737, 737, 19, 41, 1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 38749, 1, 737, 737, 19, 41, 3, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 38749, 1, 737, 737, 42, 43, 9, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 38750, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 38750, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 38750, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 38750, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 38750, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 38751, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 38751, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 38751, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 38751, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 38751, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 38751, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 38751, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 38751, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 38754, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 38754, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 38754, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 38754, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 38754, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 38755, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 38755, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 38755, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 38755, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 38755, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 66 } /* seqPointIndex: 66 */,
	{ 38755, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 67 } /* seqPointIndex: 67 */,
	{ 38755, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 38755, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 38756, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 38756, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 38756, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 38756, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 38756, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 38756, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 38756, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 38756, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 38757, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 38757, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 38757, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 38757, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 38757, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 38757, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 38757, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 84 } /* seqPointIndex: 84 */,
	{ 38757, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 186, 190, 129, 91, 137, 140, 111, 230, 114, 253, 155, 1, 230, 243, 216, 168} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 117, 58, 219, 81, 174, 32, 141, 165, 250, 138, 140, 83, 41, 27, 0, 60} }, //2 
{ "C:\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "C:\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 5564, 1 },
	{ 5567, 1 },
	{ 5570, 1 },
	{ 5571, 2 },
	{ 5573, 3 },
	{ 5576, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[10] = 
{
	{ 0, 26 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[27] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 28, 1, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 2, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioSource::get_volume() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_volume(System.Single) */,
	{ 12, 3, 1 } /* System.Single UnityEngine.AudioSource::get_pitch() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_pitch(System.Single) */,
	{ 12, 4, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 5, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&) */,
	{ 12, 6, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 7, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 8, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 9, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	86,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
