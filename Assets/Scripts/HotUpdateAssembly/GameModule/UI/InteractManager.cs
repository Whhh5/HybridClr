using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class InteractManager : Singleton<InteractManager>
{
    public override EManagerFuncType ManagerFuncType => base.ManagerFuncType | EManagerFuncType.Update;
    // ��ǰ�����϶�����Ʒ
    private int m_CurSelectEquipViewID = -1;
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   �ո��ӽ���
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
    //---- ========= -------------   ��Ʒ����
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
        if (EquipAndCellManager.Instance.GetEquipInBag(f_ViewID)) //����Ʒ�Ѿ��ڸ�����
        {
            // �Ӹ����Ƴ�����Ʒ
            EquipAndCellManager.Instance.RemoveEquipFormBag(f_ViewID);
        }
        // �ر����߼��
        equipData.SetRayStatus(false);
    }
    public void OnPointerUp_Equip(int f_ViewID)
    {
        // �����߼��
    }

    public void OnPointerEnter_Equip(int f_ViewID)
    {
        if (true) // ��ǰû����Ʒ��ѡ��
        {
            return;
        }
        // ��ʾ��Ʒ����
    }

    public void OnPointerExit_Equip(int f_ViewID)
    {
        if (true) // ��ε�ǰ��ʾ����Ʒ���鲻�Ǹ���Ʒ
        {
            return;
        }
        // ��ʾ��Ʒ����
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
        // �������߼��
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
