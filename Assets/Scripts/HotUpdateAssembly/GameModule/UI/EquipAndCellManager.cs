using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum EDirection
{
    None = 0,
    Right,
    Down,
    Left,
    Up,
    EnumCount,
    //LeftUp,
    //LeftDown,
    //RightUp,
    //RightDown,
}
public class EquipAndCellManager : Singleton<EquipAndCellManager>
{
    // 格子 => 物品
    private Dictionary<int, Dictionary<EEquipType, int>> m_CellToEquip = new();
    // 物品 => 格子
    private Dictionary<int, HashSet<int>> m_EquipToCell = new();

    public bool GetEquipInBag(int f_EquipID)
    {
        return m_EquipToCell.ContainsKey(f_EquipID);
    }
    /// <summary>
    /// 将一个装备放到背包中
    /// </summary>
    /// <param name="f_EquipKey">装备的唯一索引</param>
    /// <param name="f_StartLeftBottomIndex">装备所在的左下角各自索引</param>
    public void AddEquipToBag(int f_EquipKey, List<int> f_TargetIndex)
    {
        if (!EquipManager.Instance.TryGetEquipData(f_EquipKey, out var equipData))
        {
            return;
        }
        foreach (var item in f_TargetIndex)
        {
            if (!m_CellToEquip.TryGetValue(item, out var list))
            {
                list = new();
                m_CellToEquip.Add(item, list);
            }
            list.Add(equipData.EquipType, f_EquipKey);
            if (!m_EquipToCell.TryGetValue(f_EquipKey, out var indexs))
            {
                indexs = new();
                m_EquipToCell.Add(f_EquipKey, indexs);
            }
            indexs.Add(item);
        }
    }
    // 从背包中删除物品
    public void RemoveEquipFormBag(int f_EquipKey)
    {
        if (!EquipManager.Instance.TryGetEquipData(f_EquipKey, out var equipData))
        {
            return;
        }
        if (!m_EquipToCell.TryGetValue(f_EquipKey, out var ccellIndex))
        {
            GUtil.Error($"移除物品不存在 equipID = {f_EquipKey}");
            return;
        }
        m_EquipToCell.Remove(f_EquipKey);
        foreach (var item in ccellIndex)
        {
            if (!m_CellToEquip.TryGetValue(item, out var equipList)
                || !equipList.TryGetValue(equipData.EquipType, out var equipID)
                || equipID != f_EquipKey)
            {
                GUtil.Error($"物品不存在该格子 equipID = {f_EquipKey}, cellIndex = {item}");
                continue;
            }
            equipList.Remove(equipData.EquipType);
            if (equipList.Count <= 0)
            {
                m_CellToEquip.Remove(item);
            }
        }
    }
    // 根据背包中的位置获取位置
    public Vector2 GetEquipPosByBag(int f_EquipKey)
    {
        if (!m_EquipToCell.TryGetValue(f_EquipKey, out var cellIndexs))
        {
            return Vector2.zero;
        }
        var tempValue = new Vector3();
        foreach (var item in cellIndexs)
        {
            if (!BagManager.Instance.TryGetBagCellData(item, out var bagData))
            {
                continue;
            }
            tempValue += bagData.LocalPosition;
        }
        tempValue /= cellIndexs.Count;
        return tempValue;
    }
    // 传入参考位置获取索引, 生成的背包 true => 所有各自都符合条件  false => 有格子超出背包索引
    private ListStack<Vector2Int> m_TempV2IntList = new(10);
    public bool TryGetEquipOccupiesIndexs(int f_EquipKey, Vector2Int f_TargetRowCol, EDirection f_Direction, EEquipType f_EquipType, ref ListStack<Vector2Int> f_Result)
    {
        if (!EquipManager.Instance.TryGetEquipOccupiesIndexs(f_EquipKey, f_TargetRowCol, f_Direction, ref m_TempV2IntList))
        {
            return false;
        }
        f_Result.Clear();
        var result = true;
        foreach (var item in m_TempV2IntList.GetEnumerator())
        {
            if (!GUtil.GetCellIsValid(item.Value))
            {
                result = false;
            }
            var index = GUtil.GetCellIndex(item.Value);
            if (!BagManager.Instance.TryGetBagCellData(index, out var cellData))
            {
                continue;
            }
            if (cellData.IsCreateBagCellContext)
            {
                continue;
            }
            f_Result.Push(item.Value);
        }
        return result;
    }

}
