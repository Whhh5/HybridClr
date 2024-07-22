using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


public class CheckHotInfos : EditorWindow
{
    [MenuItem("Struct/Test %g")]
    public static void ShowWindow()
    {
        ReslverManager.InitReslverMap();
        Debug.LogError(int.Parse("-120"));

        IEnumerable loopFunc = new List<int>();
        foreach (var item in loopFunc)
        {

        }
        var m_ListInt = new List<int>()
        {
            1,
            2,
            3,
            4
        };
        var m_ListInt2 = new List<string>()
        {
            "1", "2"
        };
        var result = ReslverManager.ToString(m_ListInt2);
        Debug.LogError(result);
        var result2 = ReslverManager.ToObject(result);
        Debug.LogError(result2 as List<string>);
        foreach (var item in result2 as IList)
        {
            Debug.LogError($"type = {item.GetType()}, value = {item}");
        }
        object testObj = m_ListInt2;
        Debug.LogError(testObj as List<string>);
    }
}
