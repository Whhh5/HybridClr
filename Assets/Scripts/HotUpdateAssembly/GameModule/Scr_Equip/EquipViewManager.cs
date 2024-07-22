using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipViewManager : Singleton<EquipViewManager>
{
    private int m_CurEquipKey = 0;
    public int GetViewID()
    {
        return ++m_CurEquipKey;
    }
    private Dictionary<int, EquipViewData> m_EquipViewData = new();
    public void UpdateEquipViewPos(int f_EquipID)
    {
        if (!m_EquipViewData.TryGetValue(f_EquipID, out var equipData))
        {
            return;
        }
        var pos = EquipAndCellManager.Instance.GetEquipPosByBag(f_EquipID);
        equipData.SetLocalPosition(pos);
    }

    public bool TryGetEquipViewData(int f_EquipID, out EquipViewData f_EquipViewData)
    {
        return m_EquipViewData.TryGetValue(f_EquipID, out f_EquipViewData);
    }
    public int CreateEquipViewData(int f_EquipID)
    {
        var viewID = GetViewID();
        var equipViewData = IPoolClass.PopClass<EquipViewData>();
        equipViewData.SetViewID(viewID);
        equipViewData.SetEquipID(f_EquipID);
        m_EquipViewData.Add(viewID, equipViewData);
        return viewID;
    }
    public int CreateEquipViewData<T>(int f_EquipID)
    {
        var viewID = GetViewID();
        var equipViewData = IPoolClass.PopClass<EquipViewData>();
        equipViewData.SetViewID(viewID);
        equipViewData.SetEquipID(f_EquipID);
        m_EquipViewData.Add(viewID, equipViewData);
        return viewID;
    }
    public void DestroyEquipViewData(int f_ViewID)
    {
        if (!TryGetEquipViewData(f_ViewID, out var equipData))
        {
            return;
        }
        if (equipData.IsLoadComplete)
        {
            ILoadPrefabAsync.UnLoad(equipData);
            IPoolClass.PushClass(equipData);
        }
        m_EquipViewData.Remove(f_ViewID);
    }
}
