using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

public static class AnimaConfig
{
    // 最大动画片段时间
    static public float MaxClipTime = 10;
    // 最大 timeline 长度
    static public float MaxTimeLineTime = 10;
    // 最大指令数
    static public int MaxCmdCount = 5;
}
static public class AnimaUtil
{
    static private int m_OnlyKey = 0;
    static public int CreateKey()
    {
        return ++m_OnlyKey;
    }
}
unsafe public struct AnimaClipData
{
    // 是否强制播放
    public bool* ForcePlay;
    // 是否可以被打断
    public bool* CanBreak;
    // 执行时间
    public float* ExecuteTime;
    // 
}
unsafe public struct AnimCmdData
{
    // 唯一 id
    public int* CmdID { get; private set; }
    public AnimaClipData* ClipData { get; private set; }
}
unsafe public struct TestData
{
    public char* name;
    public int list;
}
unsafe public class AnimationPipeline : MonoSingleton<AnimationPipeline>
{
    // 行为执行索引
    private int m_CurIndex = default;
    // 行为执行时间
    private float m_MoveTime = default;
    // 当前执行时间
    private float m_CurExecuteTime = default;
    // 当前是否可以添加命令
    private bool m_IsAddCmd = default;
    // 当前指令列表
    private Queue<int> m_CmdList = new();
    // 命令列表
    private Dictionary<int, AnimCmdData> m_CmdDataList = new();
    public int* CreateCmdData(out AnimCmdData* f_Target)
    {
        var value = new AnimCmdData();
        var key = AnimaUtil.CreateKey();
        m_CmdDataList.Add(key, value);
        f_Target = &value;
        return &key;
    }

    private void Start()
    {
        int* intPtr = stackalloc int[1];
        AnimaClipData clip = new AnimaClipData();
        var handle = GCHandle.Alloc(clip, GCHandleType.Normal);

        AnimCmdData* list = stackalloc AnimCmdData[0];
        var testValue = list->ClipData;
        TestData* test = stackalloc TestData[0];

        //var clipPtr = &clip;


    }

    private void CreateClip()
    {
        //var graph = new PlayableGraph();
        //var playable = new Playable();
        //var director = new PlayableDirector();
        //var behaviour = new PlayableBehaviour();
        //var mixerPlayable = new AnimationMixerPlayable();
    }
}
