using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public static class GExtend
{
    /// <summary>
    /// 预测装备所占格子索引
    /// </summary>
    /// <param name="f_EquipKey">装备唯一id</param>
    /// <param name="f_Direction">放置方向</param>
    public static void CalculateEquipCellIndexs(this EquipData f_This, EDirection f_Direction)
    {

    }
    /// <summary>
    /// 预测装备所占格子索引
    /// </summary>
    /// <param name="f_StartLeftBottomIndex">装备左下角起始格子</param>
    public static void CalculateEquipCellIndexs(this EquipData f_This, int f_StartLeftBottomIndex, EDirection f_Direction, ref ListStack<int> f_Result)
    {
        f_Result.Clear();
        var cellRowCol = GUtil.GetCellRowCol(f_StartLeftBottomIndex);

        var occupiesIndexs = f_This.OccupiesIndexs;
        var gridSize = f_This.GridSize;
        var leftDownRowCol = new Vector2Int((int)(cellRowCol.x - gridSize.x * 0.5f), (int)(cellRowCol.y - gridSize.y * 0.5f));
        var leftDownIndex = GUtil.GetCellIndex(leftDownRowCol);
        foreach (var offsetIndex in occupiesIndexs)
        {
            var rowCol = GUtil.GetCellRowCol(leftDownIndex + offsetIndex);

        }
    }


    private class LoadSpriteData : IPoolClass
    {
        public ELoadTarget LoadTarget = ELoadTarget.None;
        public int LoadKey = 0;
        public ELoadStatus LoadResult = ELoadStatus.Start;

        public void Constructor()
        {

        }

        public void Release()
        {
            LoadTarget = ELoadTarget.None;
            LoadKey = -1;
            LoadResult = ELoadStatus.Start;
        }
    }
    private static Dictionary<Image, LoadSpriteData> m_SpriteInfo = new();
    public static async void LoadSprite(this Image f_TargetImg, ELoadTarget f_LoadTarget)
    {
        if (m_SpriteInfo.TryGetValue(f_TargetImg, out var spriteData))
        {
            GUtil.Error($"上一个图片资源未销毁 img = {f_TargetImg}, curSprite = {f_TargetImg.sprite}, loadTarget = {spriteData.LoadTarget}");
            return;
        }
        var loadKey = GUtil.GetTempKey();
        spriteData = IPoolClass.PopClass<LoadSpriteData>();
        spriteData.LoadKey = loadKey;
        spriteData.LoadResult = ELoadStatus.Loading;
        spriteData.LoadTarget = f_LoadTarget;
        m_SpriteInfo.Add(f_TargetImg, spriteData);
        var sprite = await GManager.LoadSpriteManager.LoadAsync(f_LoadTarget);
        if (loadKey != spriteData.LoadKey)
        {
            return;
        }
        f_TargetImg.sprite = sprite;
    }
    public static void UnloadSprite(this Image f_TargetImg)
    {
        if (!m_SpriteInfo.TryGetValue(f_TargetImg, out var spriteData))
        {
            GUtil.Error($"该图片资源未加载资源不要执行卸载 image = {f_TargetImg}");
            return;
        }
        m_SpriteInfo.Remove(f_TargetImg);
        GManager.LoadSpriteManager.UnLoad(spriteData.LoadTarget);
        IPoolClass.PushClass(spriteData);
    }
    public static bool ContainsSprite(this Image f_TargetImg)
    {
        return m_SpriteInfo.ContainsKey(f_TargetImg);
    }
    public static void ChangeSprite(this Image f_TargetImg, ELoadTarget f_LoadTarget)
    {
        if (f_TargetImg.ContainsSprite())
        {
            f_TargetImg.UnloadSprite();
        }
        f_TargetImg.LoadSprite(f_LoadTarget);
    }
}
