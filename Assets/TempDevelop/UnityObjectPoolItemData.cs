using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;
using UnityEngine.UI;
public enum LoadAsyncResult
{
    Start,
    UnLoad,
    Succeed,
    Loading,
    Defeated,
}
public interface ILoadPrefabAsync
{
    public int LoadKey { get; set; }
    public LoadAsyncResult LoadResult { get; set; }
    public ELoadPrefabType PrefabType { get; }
    public bool IsSync { get; set; }

    public void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget);
    public void InitData();
    public void LoadPrefabComplete();
    public void Reset();
    public void UnLoad();

    private static int GetLoadKey()
    {
        var key = UnityEngine.Random.Range(int.MinValue + 1, int.MaxValue);
        return key;
    }
    public static async void LoadAsync<TLoad>(TLoad f_Target)
        where TLoad : UnityObjectPoolItemData
    {
        if (f_Target.LoadResult is LoadAsyncResult.Loading or LoadAsyncResult.Succeed)
        {
            return;
        }
        var lastLoadKey = GetLoadKey();
        f_Target.LoadKey = lastLoadKey;
        f_Target.LoadResult = LoadAsyncResult.Loading;

        var target = await LoadAssetManager.Instance.LoadPrefabAsync(f_Target);
        if (lastLoadKey != f_Target.LoadKey 
            || f_Target.LoadResult is not LoadAsyncResult.Loading)
        {
            LoadAssetManager.Instance.UnLoadPrefab(f_Target);
            return;
        }
        var result = target.GetComponent<UnityObjectPoolItem>();
        f_Target.LoadResult = LoadAsyncResult.Succeed;
        result.SetUnityObjectData(f_Target);
        f_Target.SetEntityTarget(result);
        result.OnLoadAsync();
        f_Target.LoadPrefabComplete();
    }
    public static void UnLoad<TLoad>(TLoad f_Target)
        where TLoad : UnityObjectPoolItemData
    {
        f_Target.LoadKey = int.MinValue;
        if (f_Target.IsLoadComplete)
        {
            f_Target.OnUnLoadPrefab();
            LoadAssetManager.Instance.UnLoadPrefab(f_Target);
            f_Target.ClearEntityTarget();
        }
        f_Target.UnLoad();
        f_Target.LoadResult = LoadAsyncResult.UnLoad;

    }
}
public abstract class UnityObjectPoolItemData : ILoadPrefabAsync
{
    //--
    //===============================----------------------========================================
    //-----------------------------                          --------------------------------------
    //                                catalogue -- 资源加载篇
    //-----------------------------                          --------------------------------------
    //===============================----------------------========================================
    //--
    public int LoadKey { get; set; }
    public abstract ELoadPrefabType PrefabType { get; }
    public UnityObjectPoolItem PrefabTarget;
    public LoadAsyncResult LoadResult { get; set; }
    public bool IsSync { get; set; }
    protected bool m_IsLoadComplete = false;
    public bool IsLoadComplete => m_IsLoadComplete;
    public bool IsExecuteLoad()
    {
        if (LoadResult is LoadAsyncResult.Succeed or LoadAsyncResult.Loading)
        {
            return true;
        }
        return false;
    }
    public virtual void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        PrefabTarget = f_PrefabTarget;
        m_IsLoadComplete = true;
    }
    public virtual void ClearEntityTarget()
    {
        m_IsLoadComplete = false;
        PrefabTarget = null;
    }
    public virtual void InitData()
    {

    }
    public virtual void LoadPrefabComplete()
    {

    }
    public T GetCom<T>()
        where T : Component
    {
        return PrefabTarget.GetComponent<T>();
    }
    //public bool TryGetTargetTrans(out Transform f_Trans)
    //{
    //    f_Trans = default;
    //    if (m_IsNotLoadComplete)
    //    {
    //        return false;
    //    }
    //    f_Trans = PrefabTarget.transform;
    //    return true;
    //}


    //--
    //===============================----------------------========================================
    //-----------------------------                          --------------------------------------
    //                                catalogue -- 预制体属性篇
    //-----------------------------                          --------------------------------------
    //===============================----------------------========================================
    //--
    public string PrefabName = null;
    public bool Active = true;
    public Transform Parent { get; private set; } = null;
    public int? SiblingIndex { get; private set; } = null;
    public Vector3 WorldPosition { get; private set; } = new Vector3();
    public Vector3 LocalPosition = new Vector3();
    public Vector3 Forward { get; private set; } = new Vector3(0, 0, 1);
    public Vector3 Up { get; private set; } = new Vector3(0, 1, 0);
    public Vector3 LocalRotation { get; private set; } = new Vector3();
    public Vector3 LocalScale { get; private set; } = new Vector3(1, 1, 1);

    public virtual void UnLoad()
    {

    }
    public virtual void OnUnLoadPrefab()
    {
        PrefabTarget.OnUnLoad();
    }
    public void SetName(string f_Name)
    {
        PrefabName = f_Name;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetName();
        }
    }
    public void SetActive(bool f_ToActive)
    {
        var active = f_ToActive;
        Active = active;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetActive();
        }
    }
    public bool TryGetRoot(out Transform f_Root)
    {
        f_Root = m_IsLoadComplete
            ? PrefabTarget.GetRoot()
            : null;
        return m_IsLoadComplete;
    }
    public void SetParent(Transform f_ToParent)
    {
        Parent = f_ToParent;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetParent();
        }
    }
    public void SetSiblingIndex(int f_SiblingIndex)
    {
        SiblingIndex = f_SiblingIndex;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetSiblingIndex();
        }
    }
    public void SetChildIndexToBottom()
    {
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetChildIndexToBottom();
        }
    }

    public void SetLocalScale(Vector3 f_ToLocalScale)
    {
        LocalScale = f_ToLocalScale;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetLocalScale();
        }
    }

    public void SetLocalRotation(Vector3 f_ToLocalRotation)
    {
        LocalRotation = f_ToLocalRotation;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetLocalRotation();
        }
    }

    public void SetPosition(Vector3 f_ToPosition)
    {
        WorldPosition = f_ToPosition;
    }
    public virtual void SetLocalPosition(Vector3 f_ToPosition)
    {
        LocalPosition = f_ToPosition;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetLocalPosition();
        }
    }
    public void SetForward(Vector3 f_ToForward)
    {
        Forward = f_ToForward.normalized;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetForward();
        }
    }

    public void SetUp(Vector3 f_ToUp)
    {
        Up = f_ToUp.normalized;
        if (m_IsLoadComplete)
        {
            PrefabTarget.SetUp();
        }
    }

    public virtual void Reset()
    {
        SiblingIndex = null;
        Active = true;
        PrefabName = null;
        Parent = null;
        SiblingIndex = null;
        WorldPosition = Vector3.zero;
        LocalPosition = Vector3.zero;
        Forward = Vector3.forward;
        Up = Vector3.up;
        LocalRotation = Vector3.zero;
        LocalScale = Vector3.one;
    }
}
// 世界池物体父类
public abstract class UnityObjectPoolItem : MonoBehaviour
{
    public virtual void OnUnLoad()
    {

    }
    public virtual void OnLoadAsync()
    {
        SetParent();
        SetLocalPosition();
        SetLocalScale();
        SetForward();
        SetLocalRotation();
        SetActive();
        SetName();
        SetSiblingIndex();
    }
    public virtual void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        UnityObjectData = f_ObjectData;
    }

    public virtual UnityObjectPoolItemData UnityObjectData { get; set; }

    public T GetData<T>()
        where T : UnityObjectPoolItemData
    {
        return UnityObjectData as T;
    }

    public void SetName()
    {
        if (UnityObjectData.PrefabName == null)
        {
            return;
        }
        name = UnityObjectData.PrefabName ?? "";
    }
    public void SetActive()
    {
        if (UnityObjectData.Active == gameObject.activeSelf)
        {
            return;
        }
        gameObject.SetActive(UnityObjectData.Active);
    }
    public Transform GetRoot()
    {
        return transform;
    }
    public void SetParent()
    {
        transform.SetParent(UnityObjectData.Parent);
    }
    public void SetSiblingIndex()
    {
        var index = UnityObjectData.SiblingIndex ?? -1;
        if (index > -1)
        {
            transform.SetSiblingIndex(index);
        }
    }
    public void SetChildIndexToBottom()
    {
        transform.SetSiblingIndex(UnityObjectData.Parent.childCount - 1);
    }

    public void SetLocalScale()
    {
        transform.localScale = UnityObjectData.LocalScale;
    }

    public void SetLocalRotation()
    {
        transform.localRotation = Quaternion.Euler(UnityObjectData.LocalRotation);
    }

    public void SetPosition()
    {
        transform.position = UnityObjectData.WorldPosition;
    }
    public virtual void SetLocalPosition()
    {
        transform.localPosition = UnityObjectData.LocalPosition;
    }
    public void SetForward()
    {
        transform.forward = UnityObjectData.Forward;
    }
    public void SetUp()
    {
        transform.up = UnityObjectData.Up;
    }
}
public abstract class UnityObjectPoolItemUIData : UnityObjectPoolItemData
{
    private UnityObjectPoolItemUI m_EntityTarget = null;
    public Vector2? SizeDelta { get; private set; }
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UnityObjectPoolItemUI;
    }
    public override void Reset()
    {
        base.Reset();
        SizeDelta = null;
    }
    public void SetSizeDelta(Vector2 f_SizeDelta)
    {
        SizeDelta = f_SizeDelta;
        if (m_IsLoadComplete)
        {
            m_EntityTarget.SetSizeDelta();
        }
    }
}
public class UnityObjectPoolItemUI : UnityObjectPoolItem
{
    protected RectTransform m_Rect = null;
    private UnityObjectPoolItemUIData m_EntityData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityData = f_ObjectData as UnityObjectPoolItemUIData;
    }
    public override void OnLoadAsync()
    {
        m_Rect = GetComponent<RectTransform>();
        base.OnLoadAsync();
        SetSizeDelta();
    }
    public override void OnUnLoad()
    {
        base.OnUnLoad();
        m_Rect = null;
    }
    public override void SetLocalPosition()
    {
        m_Rect.anchoredPosition = m_EntityData.LocalPosition;
    }
    public void SetSizeDelta()
    {
        var sizeDelta = m_EntityData.SizeDelta;
        if (sizeDelta == null)
        {
            return;
        }
        m_Rect.sizeDelta = sizeDelta ?? Vector2.zero;
    }
}
