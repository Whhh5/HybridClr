using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPre_StoreData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_Store;
    private UIPre_Store m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UIPre_Store;
    }
    public int CurUpdateCount { get; private set; }
    public override void Release()
    {
        base.Release();
        CurUpdateCount
            = 0;
    }
    public void UpdateStore()
    {
        CurUpdateCount++;
        if (m_IsLoadComplete)
        {
            m_EntityTarget.UpdateStore();
        }
    }
}

public class UIPre_Store : UnityObjectPoolItemUI
{
    private UIPre_StoreData m_EntityData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityData = f_ObjectData as UIPre_StoreData;
    }


    [SerializeField]
    private Button m_UpdateStoreBtn = null;
    [SerializeField]
    private RectTransform m_EquipRoot = null;
    // 当前刷新了多少次
    private int m_CurUpdateCount = 0;
    // 当前物品列表
    private List<UIPre_StoreCellData> m_CellList = new();
    public override void OnUnLoad()
    {
        base.OnUnLoad();
        foreach (var item in m_CellList)
        {
            ILoadPrefabAsync.UnLoad(item);
            IPoolClass.PushClass(item);
        }
        m_CurUpdateCount
            = 0;
        m_CellList.Clear();
        m_EntityData = null;
    }
    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        // 初始化格子
        for (int i = 0; i < GConfig.StoreUpdateCount; i++)
        {
            var item = IPoolClass.PopClass<UIPre_StoreCellData>();
            item.SetParent(m_EquipRoot);
            ILoadPrefabAsync.LoadAsync(item);
            m_CellList.Add(item);
        }
        // 刷新一次商店
        UpdateOne();
        UpdateStore();
        m_UpdateStoreBtn.onClick.RemoveAllListeners();
        m_UpdateStoreBtn.onClick.AddListener(m_EntityData.UpdateStore);
    }

    public void UpdateStore()
    {
        while (m_CurUpdateCount < m_EntityData.CurUpdateCount)
        {
            UpdateOne();
            m_CurUpdateCount++;
        }
    }
    // 刷新一次商店
    private void UpdateOne()
    {
        RecycleEquip();
        var showList = EquipManager.Instance.GetRandomRangeEquip(m_CellList.Count);
        for(var i = 0; i< showList.Count; i++)
        {
            var cell = m_CellList[i];
            if (cell.LockStatus)
            {
                continue;
            }
            var equipID = showList[i];
            cell.SetEquipEquipID(equipID);
        }
    }
    // 清理物品
    private void RecycleEquip()
    {
        foreach (var item in m_CellList)
        {
            if (!item.ContainsEquip())
            {
                continue;
            }
            if (item.LockStatus)
            {
                continue;
            }
            item.ClearEquip();
        }
    }

}
