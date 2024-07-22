using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public enum ELevel
{
    None,
    Level_0,
    Level_1,
    Level_2,
    Level_3,
    Level_4,
    EnumCount,
}
public class LevelManager : Singleton<LevelManager>
{
    private Dictionary<ELevel, LevelSetting> m_LevelSettingData = new();
    private ELevel m_CurLevel = ELevel.None;
    public override async UniTask AwakeAsync()
    {
        await base.AwakeAsync();

        GUtil.Log(" ------------- LevelManager awake return");
        //return;
        var assets = await GManager.LoadLevelSettingManager.LoadAssetsByLabel(EAddressableLable.LevelSetting);
        foreach (var item in assets)
        {
            m_LevelSettingData.Add(item.Level, item);
        }
    }
    public override void OnDestroy()
    {
        m_LevelSettingData.Clear();
        GManager.LoadLevelSettingManager.UnloadAssetsByLabel(EAddressableLable.LevelSetting);
        base.OnDestroy();
    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   关卡管理
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // 进入关卡
    public void EnterLevel(ELevel f_Level)
    {
        // 设置关卡基础数据
        SetCurLevel(f_Level);

        // 初始化进入关卡数据
        EventSystem.Instance.FireEvent(EEvent.EVENT_LEVEL_ENTER, (int)f_Level);
    }
    // 推出一个关卡
    public void ExitLevel()
    {
        // 退出关卡重置数据
        var lastLevel = m_CurLevel;
        EventSystem.Instance.FireEvent(EEvent.EVENT_LEVEL_EXIT, (int)lastLevel);

        // 重置关卡数据
        SetCurLevel(ELevel.None);
    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   数据获取
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // 获取关卡信息
    private bool TryGetLevelSettingData(ELevel f_Level, out LevelSetting f_LevelData)
    {
        return m_LevelSettingData.TryGetValue(f_Level, out f_LevelData);
    }
    // 获取当前关卡信息
    private bool TryGetCurLevelSettingData(out LevelSetting f_LevelData)
    {
        return m_LevelSettingData.TryGetValue(m_CurLevel, out f_LevelData);
    }
    // 获取当前关卡
    public bool TryGetCurLevel(out ELevel f_Level)
    {
        f_Level = m_CurLevel;
        return f_Level >= ELevel.Level_0;
    }
    // 获取当前关卡背包默认大小
    public bool TryGetInitBagCellSize(out Vector2Int f_InitBagSize)
    {
        if (!TryGetCurLevelSettingData(out var levelSetting))
        {
            f_InitBagSize = default;
            return false;
        }
        f_InitBagSize = levelSetting.InitBagCellSize;
        return true;
    }

    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   设置数据
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    private void SetCurLevel(ELevel f_CurLevel)
    {
        m_CurLevel = f_CurLevel;
    }
}
