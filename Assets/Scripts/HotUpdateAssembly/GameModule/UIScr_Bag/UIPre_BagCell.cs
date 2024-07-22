using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class UIPre_BagCellData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_BagCell;
    private UIPre_BagCell m_EntityTarget = null;
    public override void SetEntityTarget(UnityObjectPoolItem f_PrefabTarget)
    {
        base.SetEntityTarget(f_PrefabTarget);
        m_EntityTarget = f_PrefabTarget as UIPre_BagCell;
    }
    // 格子显示装扮
    private UIPre_BagCellContextData m_BagCellContext = null;
    // 当前格子索引
    public int CellIndex { get; private set; }
    // 当前格子是否生成
    public bool IsCreateBagCellContext = false;
    // 当前格子是否有物品
    public bool IsExistEquip { get; private set; }
    public override void Release()
    {
        base.Release();
        m_EntityTarget = null;
        CellIndex = -1;
        IsCreateBagCellContext
            = IsExistEquip
            = false;
    }
    public override void UnLoad()
    {
        DestroyBagCellContext();
        base.UnLoad();
    }
    public override void LoadPrefabComplete()
    {
        base.LoadPrefabComplete();
        if (IsCreateBagCellContext)
        {
            CreateBagCellContext();
        }
    }

    public void CreateBagCellContext()
    {
        IsCreateBagCellContext = true;
        if (m_IsLoadComplete)
        {
            var parent = GetCellContextRoot();
            m_BagCellContext = IPoolClass.PopClass<UIPre_BagCellContextData>();
            m_BagCellContext.SetParent(parent);
            ILoadPrefabAsync.LoadAsync(m_BagCellContext);
        }
    }
    public void DestroyBagCellContext()
    {
        if (!IsCreateBagCellContext)
        {
            return;
        }
        ILoadPrefabAsync.UnLoad(m_BagCellContext);
        IPoolClass.PushClass(m_BagCellContext);
        IsCreateBagCellContext = false;
        m_BagCellContext = null;
    }


    public RectTransform GetCellContextRoot()
    {
        if (!m_IsLoadComplete)
        {
            return null;
        }
        return m_EntityTarget.GetCellContextRoot();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerDown_Cell(CellIndex, eventData);
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerUp_Cell(CellIndex, eventData);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerEnter_Cell(CellIndex, eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        InteractManager.Instance.OnPointerExit_Cell(CellIndex, eventData);
    }

    #region 设置属性
    public void SetCellIndex(int f_CellIndex)
    {
        CellIndex = f_CellIndex;
    }
    public void SetIsExistEquip(bool f_IsExistEquip)
    {
        IsExistEquip = f_IsExistEquip;
    }
    #endregion
}
public class UIPre_BagCell : UnityObjectPoolItemUI, IPointerEnterHandler, IPointerExitHandler, IPointerUpHandler, IPointerDownHandler
{
    private UIPre_BagCellData m_EntityData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityData = f_ObjectData as UIPre_BagCellData;
    }
    [SerializeField]
    private RectTransform m_CellContextRoot = null;
    public RectTransform GetCellContextRoot()
    {
        return m_CellContextRoot;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        m_EntityData.OnPointerDown(eventData);
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        m_EntityData.OnPointerUp(eventData);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        m_EntityData.OnPointerEnter(eventData);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        m_EntityData.OnPointerExit(eventData);
    }

}
