using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIPre_MainBagData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_MainBag;
    private UIPre_MainBag m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UIPre_MainBag;
    }
    public override void LoadPrefabComplete()
    {
        base.LoadPrefabComplete();
        // 刷新相关物体位置
        BagManager.Instance.LoadComplete_MainBag();
    }
    public Transform GetBagCellRoot()
    {
        if (!m_IsLoadComplete)
        {
            return null;
        }
        return m_EntityTarget.GetBagCellRoot();
    }
}
public class UIPre_MainBag : UnityObjectPoolItemUI
{
    [SerializeField]
    private RectTransform m_BagCellRoot = null;
    public Transform GetBagCellRoot()
    {
        return m_BagCellRoot;
    }
}
