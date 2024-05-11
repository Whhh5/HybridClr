using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Unity.Jobs;
using Unity.Collections;

#if UNITY_EDITOR
using UnityEditor;
public class TestEditor123: Editor
{

}
#endif

public class ConsoleToScreen : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI m_TestTitleTxt = null;
    [SerializeField]
    private TextMeshProUGUI m_TestTxt = null;
    [SerializeField]
    private Button m_TestBtn = null;

    [SerializeField]
    private TextMeshProUGUI m_TestTxt2 = null;

    [SerializeField]
    private TMP_InputField m_InputValue = null;
    [SerializeField]
    private Button m_TestLoopBtn = null;
    [SerializeField]
    private Button m_TestLoopBtn2 = null;

    private int m_TestInt = 0;
    private List<GameObject> m_InsObj = new();
    [SerializeField]
    private GameObject m_TargetNull = null;
    public void Init()
    {
        Debug.Log("ConsoleToScreen Awake <change> <2024.4.28>");
        m_TestTitleTxt.text = $"test txt 2.0";
        m_TestBtn.onClick.AddListener(() =>
        {
            m_TestTxt.text = $"<change> = {m_TestInt++}";
        });
        m_TestLoopBtn.onClick.AddListener(() =>
        {
            Debug.Log("-------------- ²âÊÔÑ­»· Game Assemblies ---------------");
            if (!int.TryParse(m_InputValue.text, out var count))
            {
                count = 13;
            }
            TestForLoop_1(count);
            TestForLoop_2(count);
            TestForLoop_3(count);
            TestForLoop_4(count);
            TestForLoop_5(count);
        });
        m_TestLoopBtn2.onClick.AddListener(() =>
        {
            Debug.Log("-------------- UnityJob ---------------");
            TestJobBurst();
        });
    }
    private JobHandle m_JobHandle;
    private void TestJobBurst()
    {
        NativeArray<Vector3> m_ArrTestJobData = new(10, Allocator.TempJob);
        if (!m_JobHandle.IsCompleted)
        {
            return;
        }
        var job = new MyJobsClass(m_ArrTestJobData);
        m_JobHandle = job.Schedule(m_ArrTestJobData.Length, m_JobHandle);
        m_JobHandle.Complete();
        Debug.Log($"{m_ArrTestJobData[0]}");
        m_ArrTestJobData.Dispose();
    }
    private void TestForLoop_1(int f_LoopCount)
    {
        var index = 0;
        for (int i = 0; i < f_LoopCount; i++)
        {
            index++;
            Debug.Log($"loop count = {i} - {i} index = " + $"{index} - " + $"{index}");
        }
        Debug.Log($"-------------- ²âÊÔÑ­»· end count = {f_LoopCount} ---------------");

        m_TestTxt2.text = $"cur console count = {f_LoopCount}, index = {index}";
    }
    private void TestForLoop_2(int f_LoopCount)
    {
        foreach (var item in m_InsObj)
        {
            GameObject.Destroy(item);
        }
        m_InsObj.Clear();
    }
    private void TestForLoop_3(int f_LoopCount)
    {
        for (int i = 0; i < f_LoopCount; i++)
        {
            var obj = GameObject.Instantiate(m_TargetNull, m_TargetNull.transform.parent);
            m_InsObj.Add(obj);
        }
    }
    private void TestForLoop_4(int f_LoopCount)
    {
        foreach (var item in m_InsObj)
        {
            var tran = item.AddComponent<Image>();
            var tran2 = item.AddComponent<CanvasRenderer>();
            var tran3 = item.AddComponent<Mask>();
            var tran4 = item.AddComponent<HorizontalLayoutGroup>();
        }
    }
    private void TestForLoop_5(int f_LoopCount)
    {
        foreach (var item in m_InsObj)
        {
            var tran = item.GetComponent<Image>();
            var tran2 = item.GetComponent<CanvasRenderer>();
            var tran3 = item.GetComponent<Mask>();
            var tran4 = item.GetComponent<HorizontalLayoutGroup>();
        }
    }


    public void TestRef()
    {
        // AOT
        try
        {
            var testClass1 = new AOTClass1();
            Debug.Log(testClass1.TestName);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new AOTClass2();
            Debug.Log(testClass1.TestName + testClass1.TestStruct.TestName);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new AOTStruct();
            Debug.Log(testClass1.TestName);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new AOTStruct2();
            Debug.Log($"test --- stuct2 {testClass1.TestName}, {testClass1.Count}");
            testClass1.LogCount();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }


        // Hot
        try
        {
            var testClass1 = new MyHotClass1();
            Debug.Log(testClass1.TestFloat);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new MyHotClass2();
            Debug.Log(testClass1.TestStr);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new MyHotStruct();
            Debug.Log(testClass1.TestFloat);
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            var testClass1 = new MyHotStruct2();
            Debug.Log($"test --- stuct2 {testClass1.TestFloat}");
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }


        try
        {
            Debug.Log("test generic List<MyHotClass1>");
            var testClass1 = new List<MyHotClass1>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            Debug.Log("test generic List<AOTStruct>");
            var testClass1 = new List<AOTStruct>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            Debug.Log("test generic List<MyHotStruct>");
            var testClass1 = new List<MyHotStruct>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }

        try
        {
            Debug.Log("test generic List<AOTClass1>");
            var testClass1 = new List<AOTClass1>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            Debug.Log("test generic List<MyHotStruct3> - 3");
            var testClass1 = new List<MyHotStruct3>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
        try
        {
            Debug.Log("test generic List<Animation>");
            var testClass1 = new List<Animation>();
        }
        catch (Exception ex)
        {
            Debug.LogError(ex);
        }
    }


}

