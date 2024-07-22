using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum EEquipType
{
    None,
    // 背包
    Bag,
    // 武器
    Weapon,
    // 护甲
    Armor,
    // 装饰品
    Ornaments,
    // 宝石
    Genmstone,
}
public class EquipManager : Singleton<EquipManager>
{
    private Dictionary<int, EquipData> m_EquipDataCache = new();
    private List<int> m_EquipIDList = null;
    public override async UniTask AwakeAsync()
    {
        await base.AwakeAsync();
        var equipConfigs = await GManager.LoadEquipDataManager.LoadAssetsByLabel(EAddressableLable.EquipConfig);
        m_EquipIDList = new(new int[equipConfigs.Count]);
        for (int i = 0; i < equipConfigs.Count; i++)
        {
            var value = equipConfigs[i];
            m_EquipDataCache.Add(value.EquipKey, value);
            m_EquipIDList[i] = value.EquipKey;
        }
    }
    public override void OnDestroy()
    {
        base.OnDestroy();
        m_EquipDataCache.Clear();
        GManager.LoadEquipDataManager.UnloadAssetsByLabel(EAddressableLable.EquipConfig);
    }
    // 获取装备数据
    public bool TryGetEquipData(int f_EquipKey, out EquipData f_EquipData)
    {
        return m_EquipDataCache.TryGetValue(f_EquipKey, out f_EquipData);
    }

    // 获取装备所在位置索引
    public bool TryGetEquipOccupiesIndexs(int f_EquipKey, Vector2Int f_CentreIndex, EDirection f_Direction, ref ListStack<Vector2Int> f_Result)
    {
        if (!TryGetEquipData(f_EquipKey, out var equipData))
        {
            return false;
        }
        var occupitesIndexs = equipData.OccupiesIndexs;
        var gridSize = equipData.GridSize;
        var leftDownIndex = f_CentreIndex - GUtil.GetMatrixCentreIndex(gridSize);
        f_Result.Clear();
        foreach (var index in occupitesIndexs)
        {
            var rowCol = GUtil.GetMatrixRowCol(gridSize, index);
            var cellRowCol = leftDownIndex + rowCol;
            var resultRowCol = GUtil.TransferDirection(gridSize, cellRowCol.x, cellRowCol.y, equipData.OriginalDirection, f_Direction);
            //var value = GUtil.GetMatrixIndex(gridSize, resultRowCol.x, resultRowCol.y);
            f_Result.Push(resultRowCol);
        }
        return true;
    }
    // 获得随机物品
    public List<int> GetRandomRangeEquip(int f_GetCount)
    {
        var maxCount = m_EquipIDList.Count;
        var count = Mathf.Max(f_GetCount, maxCount);
        var result = new List<int>(new int[count]);
        for (int i = 0; i < count; i++)
        {
            result[i] = m_EquipIDList[Random.Range(0, maxCount)];
        }
        return result;
    }
}
