using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameStart : MonoBehaviour
{
    [SerializeField]
    private TMP_InputField m_InputValue = null;
    [SerializeField]
    private Button m_TestLoopBtn = null;

    private List<GameObject> m_InsObj = new();
    [SerializeField]
    private GameObject m_TargetNull = null;
    void Start()
    {
        Application.targetFrameRate = 30;
        Debug.Log($"  GameStart start {m_TestLoopBtn}");
        m_TestLoopBtn.onClick.AddListener(() =>
        {
            Debug.Log("-------------- ≤‚ ‘—≠ª∑ Game ---------------");
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
    }
    private void Update()
    {

    }
    private void TestForLoop_1(int f_LoopCount)
    {
        var index = 0;
        for (int i = 0; i < f_LoopCount; i++)
        {
            index++;
            Debug.Log($"loop count = {i} - {i} index = " + $"{index} - " + $"{index}");
        }
        Debug.Log($"-------------- ≤‚ ‘—≠ª∑ end count = {f_LoopCount} ---------------");
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
}
