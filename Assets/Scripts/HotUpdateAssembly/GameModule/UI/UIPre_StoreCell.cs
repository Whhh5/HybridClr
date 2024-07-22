using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPre_StoreCellData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_StoreCell;
    private UIPre_StoreCell m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UIPre_StoreCell;
    }


    public int EquipID { get; private set; }
    private UIPre_StoreEquipData m_StoreEquipData = null;
    // 锁定状态 true：不刷新， false：刷新
    public bool LockStatus { get; private set; }
    public override void Release()
    {
        base.Release();
        m_EntityTarget = null;
        LockStatus = false;
        ClearEquip();
    }
    public override void LoadPrefabComplete()
    {
        base.LoadPrefabComplete();
        CreateEquipView();
    }
    public bool ContainsEquip()
    {
        return EquipID > GDefine.Int00;
    }
    public void SetEquipEquipID(int f_EquipID)
    {
        EquipID = f_EquipID;
        m_StoreEquipData = IPoolClass.PopClass<UIPre_StoreEquipData>();
        m_StoreEquipData.SetEquipID(f_EquipID);
        if (m_IsLoadComplete)
        {
            CreateEquipView();
        }
    }
    private void CreateEquipView()
    {
        if (EquipID < GDefine.Int01)
        {
            return;
        }
        m_StoreEquipData.SetParent(GetEquipRoot());
        ILoadPrefabAsync.LoadAsync(m_StoreEquipData);
    }
    public void ClearEquip()
    {
        if (EquipID < GDefine.Int01)
        {
            return;
        }
        ILoadPrefabAsync.UnLoad(m_StoreEquipData);
        IPoolClass.PushClass(m_StoreEquipData);
        m_StoreEquipData = null;
        EquipID = GDefine.Int11;

    }
    public RectTransform GetEquipRoot()
    {
        return m_EntityTarget.GetEquipRoot();
    }
    public void SetLockStatus(bool f_LockStatus)
    {
        LockStatus = f_LockStatus;
        if (m_IsLoadComplete)
        {
            m_EntityTarget.SetLockStatus();
        }
    }
    public void LockEquipClick()
    {
        SetLockStatus(!LockStatus);
    }
    public void BuyEquipClick()
    {
        if (!true)
        {
            GUtil.Error("不可购买");
            return;
        }
        var equipViewID = EquipViewManager.Instance.CreateEquipViewData(EquipID);
        InteractManager.Instance.OnPointerDown_Equip(equipViewID);
        ClearEquip();
    }
}

public class UIPre_StoreCell : UnityObjectPoolItemUI
{
    private UIPre_StoreCellData m_EntityData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityData = f_ObjectData as UIPre_StoreCellData;
    }


    [SerializeField]
    private Button m_BuyEquipBtn = null;
    [SerializeField]
    private Button m_LockEquipBtn = null;
    [SerializeField]
    private RectTransform m_EquipRoot = null;

    public override void OnUnLoad()
    {
        base.OnUnLoad();
        m_EntityData = null;
    }
    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        SetLockStatus();
        m_BuyEquipBtn.onClick.RemoveAllListeners();
        m_BuyEquipBtn.onClick.AddListener(BuyEquipClick);
        m_LockEquipBtn.onClick.RemoveAllListeners();
        m_LockEquipBtn.onClick.AddListener(LockEquipClick);
    }
    private void BuyEquipClick()
    {
        m_EntityData.BuyEquipClick();
    }
    private void LockEquipClick()
    {
        m_EntityData.LockEquipClick();
    }


    public RectTransform GetEquipRoot()
    {
        return m_EquipRoot;
    }

    public void SetLockStatus()
    {
        m_LockEquipBtn.GetComponent<Image>().color = m_EntityData.LockStatus
            ? Color.red
            : Color.white;
    }
}
