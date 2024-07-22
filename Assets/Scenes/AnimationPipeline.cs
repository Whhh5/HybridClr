using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

public static class AnimaConfig
{
    // ��󶯻�Ƭ��ʱ��
    static public float MaxClipTime = 10;
    // ��� timeline ����
    static public float MaxTimeLineTime = 10;
    // ���ָ����
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
    // �Ƿ�ǿ�Ʋ���
    public bool* ForcePlay;
    // �Ƿ���Ա����
    public bool* CanBreak;
    // ִ��ʱ��
    public float* ExecuteTime;
    // 
}
unsafe public struct AnimCmdData
{
    // Ψһ id
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
    // ��Ϊִ������
    private int m_CurIndex = default;
    // ��Ϊִ��ʱ��
    private float m_MoveTime = default;
    // ��ǰִ��ʱ��
    private float m_CurExecuteTime = default;
    // ��ǰ�Ƿ�����������
    private bool m_IsAddCmd = default;
    // ��ǰָ���б�
    private Queue<int> m_CmdList = new();
    // �����б�
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
