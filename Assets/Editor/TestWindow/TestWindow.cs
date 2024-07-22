using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

public interface IWindowItem
{
    public string Name { get; }
    public void OnGUI();
}
public class TestWindow : EditorWindow
{
    [MenuItem("Tools/TestWindow %T")]
    private static void OpenWindow()
    {
        var window = EditorWindow.GetWindow<TestWindow>();
        try
        {
            window.Show();
        }
        catch (System.Exception ex)
        {
            window.Close();
            Debug.LogError(ex);
        }
    }

    private double m_LastUpdateTime = 0;
    private double m_UpdtaeInterval = 0.3f;
    private bool m_IsRegisterUpdate = false;
    private List<IWindowItem> m_WindowItemList = new();
    private IWindowItem m_CurUpdateWindow = null;
    private GUIContent m_DefaultContent = null;
    private GUIContent m_SelectTxture = null;
    private GUIContent m_DefaultTexture = null;
    private void Register<T>()
        where T : IWindowItem, new()
    {
        m_WindowItemList.Add(new T());
    }
    private void Awake()
    {
        m_DefaultContent = new();
        m_SelectTxture = EditorGUIUtility.IconContent("common_btn1_01_bg1", "选择");
        m_DefaultTexture = EditorGUIUtility.IconContent("common_btn1_01_bg2", "取消");

        Register<TestItem1>();
        Register<TestItem2>();
    }
    private void OnEnable()
    {
        if (m_IsRegisterUpdate)
        {
            return;
        }
        m_CurUpdateWindow = null;
        m_IsRegisterUpdate = true;
        //EditorApplication.update += Repaint;
    }
    private void OnDisable()
    {
        if (!m_IsRegisterUpdate)
        {
            return;
        }
        m_IsRegisterUpdate = false;
        //EditorApplication.update -= Repaint;
    }
    // 按钮宽度
    private float m_ButtonWidth = 100;
    // 按钮高度
    private float m_ButtonHeight = 30;
    private void OnGUI()
    {
        //if (EditorApplication.timeSinceStartup - m_LastUpdateTime < m_UpdtaeInterval)
        //{
        //    return;
        //}
        //m_LastUpdateTime = EditorApplication.timeSinceStartup;
        // 导航栏 Navigation Bar
        var width = position.width;
        var height = position.height;
        var colCount = Mathf.FloorToInt(width / m_ButtonWidth);
        var loopCount = Mathf.CeilToInt((float)m_WindowItemList.Count / colCount);
        EditorGUILayout.BeginVertical();
        {
            for (int i = 0; i < loopCount; i++)
            {
                EditorGUILayout.BeginHorizontal();
                {
                    for (int j = 0; j < colCount; j++)
                    {
                        var index = i * colCount + j;
                        if (index >= m_WindowItemList.Count)
                        {
                            break;
                        }
                        var item = m_WindowItemList[index];
                        //GUIContent.none.text = item.Name;
                        var content = m_CurUpdateWindow == item ? m_SelectTxture : m_DefaultContent;
                        content.text = item.Name;
                        if (GUILayout.Button(content, GUILayout.Width(m_ButtonWidth), GUILayout.Height(m_ButtonHeight)))
                        {
                            m_CurUpdateWindow = item;
                        }
                    }
                }
                EditorGUILayout.EndHorizontal();
            }
        }
        EditorGUILayout.EndVertical();
        if (m_CurUpdateWindow != null)
        {
            m_CurUpdateWindow.OnGUI();
        }
    }
}
