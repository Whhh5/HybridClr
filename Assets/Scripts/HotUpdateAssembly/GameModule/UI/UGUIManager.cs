using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UGUIManagerData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UGUIManager;
    private UGUIManager m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UGUIManager;
    }
    private ListStack<Type> m_WindowStack = new(10);
    private Dictionary<Type, UnityObjectPoolItemUIData> m_WindowstackData = new();
    public T LoadWindowAsync<T>()
        where T : UnityObjectPoolItemUIData, new()
    {
        var type = typeof(T);
        if (m_WindowstackData.ContainsKey(type))
        {
            Debug.LogError($"重复打开窗口 => {type}");
            return null;
        }
        var target = IPoolClass.PopClass<T>();
        var data = LoadWindowAsync(target);
        return data;
    }
    public T LoadWindowAsync<T>(T f_Window)
        where T : UnityObjectPoolItemUIData, new()
    {
        var type = typeof(T);
        m_WindowStack.Push(type);
        m_WindowstackData.Add(type, f_Window);
        var parent = GetWindowRoot();
        f_Window.SetParent(parent);
        f_Window.SetSizeDelta(Vector2.zero);
        f_Window.SetLocalPosition(Vector2.zero);
        ILoadPrefabAsync.LoadAsync(f_Window);
        Debug.Log($"打开窗口 => {type}");
        return f_Window;
    }
    public void UnloadWindow<T>()
        where T : UnityObjectPoolItemUIData
    {
        var type = typeof(T);
        if (!m_WindowstackData.TryGetValue(type, out var data))
        {
            Debug.LogError($"关闭的窗口不存在 => {type}");
            return;
        }
        UnloadWindow(data);
        IPoolClass.PushClass(data);
    }
    public void UnloadWindow<T>(T f_Window)
        where T : UnityObjectPoolItemUIData
    {
        var type = f_Window.GetType();
        ILoadPrefabAsync.UnLoad(f_Window);
        m_WindowstackData.Remove(type);
        m_WindowStack.Remove2(type);
        Debug.Log($"关闭窗口 => {type}");
    }
    public bool TryGetWindow<T>(out T f_Window)
        where T : UnityObjectPoolItemUIData
    {
        if (!m_WindowstackData.TryGetValue(typeof(T), out var windowData))
        {
            f_Window = default;
            return false;
        }
        if (windowData is not T result)
        {
            f_Window = default;
            return false;
        }
        f_Window = result;
        return true;
    }
    public RectTransform GetWindowRoot()
    {
        return m_EntityTarget.GetWindowRoot();
    }
    public Vector2 GetCanvasSize()
    {
        return m_EntityTarget.GetCanvasSize();
    }
}
public class UGUIManager : UnityObjectPoolItemUI
{
    [SerializeField]
    private Canvas m_Canvas = null;
    [SerializeField]
    private Camera m_UICamera = null;
    [SerializeField]
    private RectTransform m_UIWindowRoot = null;
    [SerializeField]
    private RectTransform m_UIWindowTopRoot = null;
    [SerializeField]
    private Button m_StartGameBtn = null;
    public override void OnLoadAsync()
    {
        GameObject.DontDestroyOnLoad(this);
        base.OnLoadAsync();

        m_StartGameBtn.onClick.AddListener(() =>
        {
            GManager.UGUIManager.LoadWindowAsync<UIPre_LevelSelectData>();
            m_StartGameBtn.gameObject.SetActive(false);
        });
    }

    public RectTransform GetWindowRoot()
    {
        return m_UIWindowRoot;
    }
    public Vector2 GetCanvasSize()
    {
        var rect = m_Canvas.pixelRect;
        return new Vector2(rect.width, rect.height);
    }
}
