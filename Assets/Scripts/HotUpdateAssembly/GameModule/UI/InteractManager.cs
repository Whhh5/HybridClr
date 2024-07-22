using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class InteractManager : Singleton<InteractManager>
{
    public override EManagerFuncType ManagerFuncType => base.ManagerFuncType | EManagerFuncType.Update;
    // 当前正在拖动的物品
    private int m_CurSelectEquipViewID = -1;
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   空格子交互
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public void OnPointerDown_Cell(int f_CellIndex, PointerEventData eventData)
    {
        if (!BagManager.Instance.TryGetBagCellData(f_CellIndex, out var cellData))
        {
            return;
        }
        if (!cellData.IsExistEquip)
        {
            return;
        }
        var uiPos = GUtil.GetUGUIPosByScreenPos(eventData.position);

    }
    public void OnPointerUp_Cell(int f_CellIndex, PointerEventData eventData)
    {

    }

    public void OnPointerEnter_Cell(int f_CellIndex, PointerEventData eventData)
    {

    }

    public void OnPointerExit_Cell(int f_CellIndex, PointerEventData eventData)
    {

    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   物品交互
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----

    public void OnPointerDown_Equip(int f_ViewID)
    {
        if (!EquipViewManager.Instance.TryGetEquipViewData(f_ViewID, out var equipViewData))
        {
            return;
        }
        if (!EquipViewManager.Instance.TryGetEquipViewData(f_ViewID, out var equipData))
        {
            return;
        }
        if (EquipAndCellManager.Instance.GetEquipInBag(f_ViewID)) //该物品已经在格子上
        {
            // 从格子移除该物品
            EquipAndCellManager.Instance.RemoveEquipFormBag(f_ViewID);
        }
        // 关闭射线检测
        equipData.SetRayStatus(false);
    }
    public void OnPointerUp_Equip(int f_ViewID)
    {
        // 打开射线检测
    }

    public void OnPointerEnter_Equip(int f_ViewID)
    {
        if (true) // 当前没有物品被选中
        {
            return;
        }
        // 显示物品详情
    }

    public void OnPointerExit_Equip(int f_ViewID)
    {
        if (true) // 如何当前显示的物品详情不是该物品
        {
            return;
        }
        // 显示物品详情
    }

    public override void Update()
    {
        base.Update();

        if (Input.GetMouseButtonUp(0))
        {
            LeftMouseUpClick();
        }
        if (m_CurSelectEquipViewID > GDefine.Int00)
        {
            SetEquipMove();
        }
    }

    private void LeftMouseUpClick()
    {
        if (m_CurSelectEquipViewID < GDefine.Int01)
            return;
        // 开启射线检测
        if (!EquipViewManager.Instance.TryGetEquipViewData(m_CurSelectEquipViewID, out var equipData))
            return;
        equipData.SetRayStatus(true);
        m_CurSelectEquipViewID = 0;
    }
    private void SetEquipMove()
    {
        if (!EquipViewManager.Instance.TryGetEquipViewData(m_CurSelectEquipViewID, out var equipData))
            return;
        var guiPos = GUtil.GetUGUIPosByMousePos();
        equipData.SetLocalPosition(guiPos);
    }
}
