using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GConfig
{
    public readonly static Vector2Int BagCellDefaultSize = Vector2Int.one * 5;
    public readonly static Vector2Int BagCellAllSize = new(7, 20);
    public readonly static int BagCellAllCount = BagCellAllSize.x * BagCellAllSize.y;
    public static Vector2Int BagCellCentre => new((int)(BagCellAllSize.x * 0.5f), (int)(BagCellAllSize.y * 0.5f));
    public static ELevel Level = ELevel.None;
    public static Vector2 BagCellUtilSize = Vector2.one * 70;
    public static Vector2 BagCellIntercal = Vector2.one * 5;
    // 商店一次刷新数量
    public static int StoreUpdateCount = 3;
}
