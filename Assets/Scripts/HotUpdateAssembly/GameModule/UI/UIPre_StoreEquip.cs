using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPre_StoreEquipData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_StoreEquip;
    private UIPre_StoreEquip m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UIPre_StoreEquip;
    }
    public int EquipID { get; private set; }
    // ÊÇ·ñ¿ªÆô¸ÕÌå
    public bool IsRigidbidy { get; private set; }
    public override void Release()
    {
        base.Release();
        EquipID
            = -1;
        IsRigidbidy = false;
    }

    public void SetEquipID(int f_EqiupID)
    {
        EquipID = f_EqiupID;
        if (m_IsLoadComplete)
        {
            m_EntityTarget.UpdateIcon();
        }
    }
}
public class UIPre_StoreEquip : UnityObjectPoolItemUI
{
    private UIPre_StoreEquipData m_EntityTarget = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityTarget = f_ObjectData as UIPre_StoreEquipData;
    }

    public override void OnUnLoad()
    {
        base.OnUnLoad();
        m_EntityTarget = null;
        m_IconImg.UnloadSprite();
    }
    [SerializeField]
    private Image m_IconImg = null;

    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        UpdateIcon();
    }
    public void UpdateIcon()
    {
        if (!EquipManager.Instance.TryGetEquipData(m_EntityTarget.EquipID, out var equipData))
        {
            return;
        }
        m_IconImg.ChangeSprite(equipData.Icon);
    }
}
