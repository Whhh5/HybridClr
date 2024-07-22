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
	{ 7994, 0,  6 } /*tableIndex: 0 */,
	{ 7994, 0,  7 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"samples",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[42] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000005 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.AudioBehaviour::.ctor() */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32) */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.AudioListener::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0 } /* 0x06000018 System.Single UnityEngine.AudioListener::get_volume() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.AudioListener::set_volume(System.Single) */,
	{ 0, 0 } /* 0x0600001A System.Boolean UnityEngine.AudioListener::get_pause() */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.AudioListener::set_pause(System.Boolean) */,
	{ 0, 0 } /* 0x0600001C UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioListener::get_velocityUpdateMode() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.AudioListener::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode) */,
	{ 0, 1 } /* 0x0600001E System.Single[] UnityEngine.AudioListener::GetOutputData(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.AudioListener::GetOutputData(System.Single[],System.Int32) */,
	{ 1, 1 } /* 0x06000020 System.Single[] UnityEngine.AudioListener::GetSpectrumData(System.Int32,System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.AudioListener::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.AudioListener::.ctor() */,
	{ 0, 0 } /* 0x06000023 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000024 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000025 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000026 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000028 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600002A System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[159] = 
{
	{ 29649, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 29649, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 29649, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 29649, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 29649, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 29649, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 29649, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 29649, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 29650, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 29650, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 29650, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 29650, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 29651, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 29651, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 29651, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 29651, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 29656, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 29656, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 29656, 1, 379, 379, 17, 21, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 29657, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 29657, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 29657, 1, 380, 380, 17, 29, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 29658, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 29658, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 29658, 1, 387, 387, 17, 18, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 29658, 1, 388, 388, 21, 51, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 29658, 1, 389, 389, 17, 18, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 29659, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 29659, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 29659, 1, 412, 412, 13, 14, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 29659, 1, 413, 413, 17, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 29659, 1, 413, 413, 17, 39, 2, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 29659, 1, 413, 413, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 29659, 1, 414, 414, 17, 18, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 29659, 1, 415, 415, 21, 38, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 29659, 1, 415, 415, 21, 38, 18, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 29659, 1, 416, 416, 21, 47, 24, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 29659, 1, 416, 416, 21, 47, 24, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 29659, 1, 416, 416, 0, 0, 30, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 29659, 1, 417, 417, 21, 22, 33, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 29659, 1, 418, 418, 25, 39, 34, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 29659, 1, 418, 418, 25, 39, 34, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 29659, 1, 418, 418, 0, 0, 40, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 29659, 1, 419, 419, 29, 47, 43, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 29659, 1, 419, 419, 29, 47, 43, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 29659, 1, 419, 419, 0, 0, 49, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 29659, 1, 421, 421, 29, 48, 51, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 29659, 1, 421, 421, 29, 48, 51, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 29659, 1, 422, 422, 21, 22, 57, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 29659, 1, 423, 423, 21, 52, 58, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 29659, 1, 423, 423, 0, 0, 67, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 29659, 1, 424, 424, 25, 50, 70, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 29659, 1, 424, 424, 25, 50, 76, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 29659, 1, 425, 425, 17, 18, 82, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 29659, 1, 426, 426, 13, 14, 83, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 29660, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 29660, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 29660, 1, 430, 430, 13, 14, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 29660, 1, 431, 431, 17, 46, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 29660, 1, 431, 431, 17, 46, 1, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 29660, 1, 432, 432, 13, 14, 9, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 29661, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 29661, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 29661, 1, 435, 435, 13, 14, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 29661, 1, 436, 436, 17, 50, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 29661, 1, 436, 436, 17, 50, 1, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 29661, 1, 437, 437, 13, 14, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 29662, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 29662, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 29662, 1, 440, 440, 13, 14, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 29662, 1, 441, 441, 17, 49, 1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 29662, 1, 441, 441, 17, 49, 1, kSequencePointKind_StepOut, 0, 71 } /* seqPointIndex: 71 */,
	{ 29662, 1, 442, 442, 13, 14, 7, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 29663, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 29663, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 29663, 1, 632, 632, 9, 10, 0, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 29663, 1, 633, 633, 13, 45, 1, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 29663, 1, 633, 633, 0, 0, 11, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 29663, 1, 634, 634, 17, 43, 14, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 29663, 1, 634, 634, 17, 43, 21, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 29663, 1, 635, 635, 9, 10, 27, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 29664, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 29664, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 29664, 1, 639, 639, 9, 10, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 29664, 1, 640, 640, 13, 50, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 29664, 1, 640, 640, 0, 0, 11, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 29664, 1, 641, 641, 17, 52, 14, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 29664, 1, 641, 641, 17, 52, 21, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 29664, 1, 642, 642, 9, 10, 27, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 29678, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 29678, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 29678, 1, 677, 677, 9, 10, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 29678, 1, 678, 678, 13, 53, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 29678, 1, 679, 679, 13, 51, 8, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 29678, 1, 679, 679, 13, 51, 10, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 29678, 1, 680, 680, 13, 28, 16, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 29678, 1, 681, 681, 9, 10, 20, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 29679, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 29679, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 29679, 1, 685, 685, 9, 10, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 29679, 1, 686, 686, 13, 51, 1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 29679, 1, 686, 686, 13, 51, 3, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 29679, 1, 687, 687, 9, 10, 9, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 29680, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 29680, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 29680, 1, 692, 692, 9, 10, 0, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 29680, 1, 693, 693, 13, 53, 1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 29680, 1, 694, 694, 13, 61, 8, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 29680, 1, 694, 694, 13, 61, 11, kSequencePointKind_StepOut, 0, 108 } /* seqPointIndex: 108 */,
	{ 29680, 1, 695, 695, 13, 28, 17, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 29680, 1, 696, 696, 9, 10, 21, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 29681, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 29681, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 29681, 1, 700, 700, 9, 10, 0, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 29681, 1, 701, 701, 13, 61, 1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 29681, 1, 701, 701, 13, 61, 4, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 29681, 1, 702, 702, 9, 10, 10, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 29683, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 29683, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 29683, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 29683, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 29683, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 29684, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 29684, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 29684, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 29684, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 29684, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 29684, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 29684, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 29684, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 29685, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 29685, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 29685, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 29685, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 29685, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 29686, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 29686, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 29686, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 29686, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 29686, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 29686, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 29686, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 29686, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 29687, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 29687, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 29687, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 29687, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 29687, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 29687, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 29687, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 29687, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 29688, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 29688, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 29688, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 29688, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 29688, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 29688, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 29688, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 157 } /* seqPointIndex: 157 */,
	{ 29688, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
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
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 186, 190, 129, 91, 137, 140, 111, 230, 114, 253, 155, 1, 230, 243, 216, 168} }, //1 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 117, 58, 219, 81, 174, 32, 141, 165, 250, 138, 140, 83, 41, 27, 0, 60} }, //2 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "\\home\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[7] = 
{
	{ 4176, 1 },
	{ 4175, 1 },
	{ 4179, 1 },
	{ 4181, 1 },
	{ 4183, 2 },
	{ 4184, 3 },
	{ 4186, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[14] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 11 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 22 },
	{ 0, 23 },
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
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[42] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 11, 3, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::InvokeIsStopAudioOutputOnMuteEnabled() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 5, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioBehaviour::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.AudioListener::get_volume() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::set_volume(System.Single) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioListener::get_pause() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::set_pause(System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioListener::get_velocityUpdateMode() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode) */,
	{ 22, 6, 1 } /* System.Single[] UnityEngine.AudioListener::GetOutputData(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::GetOutputData(System.Single[],System.Int32) */,
	{ 23, 7, 1 } /* System.Single[] UnityEngine.AudioListener::GetSpectrumData(System.Int32,System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioListener::.ctor() */,
	{ 12, 8, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 9, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 10, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 11, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 12, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 13, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
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
	159,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	7,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
