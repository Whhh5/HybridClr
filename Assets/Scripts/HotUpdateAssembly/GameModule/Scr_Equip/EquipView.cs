using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class EquipViewData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.EquipView;
    private EquipView m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as EquipView;
    }
    public int EquipID { get; private set; }
    public int ViewID { get; private set; }
    // …‰œﬂºÏ≤‚
    public bool RayStatus { get; private set; }

    public override void Release()
    {
        base.Release();
        EquipID 
            = ViewID
            = -1;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerDown_Equip(ViewID);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerEnter_Equip(ViewID);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerExit_Equip(ViewID);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerUp_Equip(ViewID);
    }

    public void SetEquipID(int f_EquipID)
    {
        EquipID = f_EquipID;
    }
    public void SetViewID(int f_ViewID)
    {
        ViewID = f_ViewID;
    }
    public void SetRayStatus(bool f_RayStatus)
    {
        RayStatus = f_RayStatus;
        if (m_IsLoadComplete)
        {
            m_EntityTarget.SetRayStatus();
        }
    }
}
public class EquipView : UnityObjectPoolItemUI, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler
{
    private EquipViewData m_TargetData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_TargetData = f_ObjectData as EquipViewData;
    }


    [SerializeField]
    private CanvasGroup m_CanvasGroup = null;
    public override void OnUnLoad()
    {
        base.OnUnLoad();
    }
    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        SetRayStatus();
    }
    public void SetRayStatus()
    {
        m_CanvasGroup.blocksRaycasts = m_TargetData.RayStatus;
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        m_TargetData.OnPointerDown(eventData);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        m_TargetData.OnPointerEnter(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        m_TargetData.OnPointerExit(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        m_TargetData.OnPointerUp(eventData);
    }
}
