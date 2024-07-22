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
    //---- ========= -------------   �ؿ�����
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // ����ؿ�
    public void EnterLevel(ELevel f_Level)
    {
        // ���ùؿ���������
        SetCurLevel(f_Level);

        // ��ʼ������ؿ�����
        EventSystem.Instance.FireEvent(EEvent.EVENT_LEVEL_ENTER, (int)f_Level);
    }
    // �Ƴ�һ���ؿ�
    public void ExitLevel()
    {
        // �˳��ؿ���������
        var lastLevel = m_CurLevel;
        EventSystem.Instance.FireEvent(EEvent.EVENT_LEVEL_EXIT, (int)lastLevel);

        // ���ùؿ�����
        SetCurLevel(ELevel.None);
    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ���ݻ�ȡ
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // ��ȡ�ؿ���Ϣ
    private bool TryGetLevelSettingData(ELevel f_Level, out LevelSetting f_LevelData)
    {
        return m_LevelSettingData.TryGetValue(f_Level, out f_LevelData);
    }
    // ��ȡ��ǰ�ؿ���Ϣ
    private bool TryGetCurLevelSettingData(out LevelSetting f_LevelData)
    {
        return m_LevelSettingData.TryGetValue(m_CurLevel, out f_LevelData);
    }
    // ��ȡ��ǰ�ؿ�
    public bool TryGetCurLevel(out ELevel f_Level)
    {
        f_Level = m_CurLevel;
        return f_Level >= ELevel.Level_0;
    }
    // ��ȡ��ǰ�ؿ�����Ĭ�ϴ�С
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
    //---- ========= -------------   ��������
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    private void SetCurLevel(ELevel f_CurLevel)
    {
        m_CurLevel = f_CurLevel;
    }
}
