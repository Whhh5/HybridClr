using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum ELoadTarget
{
    None,
    // 资源标签
    AssetLabel_AOTGenericSharing,
    AssetLabel_HotUpdateAssembly,
    AssetLabel_LevelSetting,
    AssetLabel_EquipConfig,

    // UI
    UGUIManager,

    UIPre_BagCell,
    UIPre_BagCellContext,
    UIPre_MainBag,

    UIPre_LevelSelect,
    UIPre_Store,
    UIPre_StoreCell,
    UIPre_StoreEquip,

    EquipView,

    // 场景
    Sc_MainCamera,

    // sprite
    Img_Equip1,
    Img_Equip2,
    Img_Equip3,
}
public class LoadTargetConfig : Singleton<LoadTargetConfig>
{
    public string GetLoadPath(ELoadTarget f_LoadKey)
    {
        if (!m_PrefabPathData.TryGetValue(f_LoadKey, out var m_PrefabData))
        {
            return null;
        }
        return m_PrefabData;
    }
    private Dictionary<ELoadTarget, string> m_PrefabPathData = new()
    {
        #region assets lable
        {
            ELoadTarget.AssetLabel_AOTGenericSharing,
            "AOTGenericSharing"
        },
        {
            ELoadTarget.AssetLabel_HotUpdateAssembly,
            "HotUpdateAssembly"
        },
        {
            ELoadTarget.AssetLabel_LevelSetting,
            "LevelSetting"
        },
        {
            ELoadTarget.AssetLabel_EquipConfig,
            "EquipConfig"
        },
        #endregion
        #region UI
        {
            ELoadTarget.UGUIManager,
            "Assets/Resources_moved/Modules/UGUIManager.prefab"
        },
        {
            ELoadTarget.UIPre_BagCell,
            "Assets/Resources_moved/Modules/Pre_Bag/UIPre_BagCell.prefab"
        },
        {
            ELoadTarget.UIPre_BagCellContext,
            "Assets/Resources_moved/Modules/Pre_Bag/UIPre_BagCellContext.prefab"
        },
        {
            ELoadTarget.UIPre_MainBag,
            "Assets/Resources_moved/Modules/Pre_Bag/UIPre_MainBag.prefab"
        },
        {
            ELoadTarget.UIPre_LevelSelect,
            "Assets/Resources_moved/Modules/UIPre_LevelSelect.prefab"
        },
        {
            ELoadTarget.UIPre_Store,
            "Assets/Resources_moved/Modules/UIPre_Store.prefab"
        },
        {
            ELoadTarget.UIPre_StoreCell,
            "Assets/Resources_moved/Modules/UIPre_StoreCell.prefab"
        },
        {
            ELoadTarget.UIPre_StoreEquip,
            "Assets/Resources_moved/Modules/UIPre_StoreEquip.prefab"
        },
        {
            ELoadTarget.EquipView,
            "Assets/Resources_moved/Modules/EquipView.prefab"
        },
        // 场景
        {
            ELoadTarget.Sc_MainCamera,
            "Assets/Resources_moved/Modules/Sc_MainCamera.prefab"
        },
        #endregion
        #region sprite

        {
            ELoadTarget.Img_Equip1,
            "Assets/Resources_moved/Images/Img_Equip1.png"
        },
        {
            ELoadTarget.Img_Equip2,
            "Assets/Resources_moved/Images/Img_Equip2.png"
        },
        {
            ELoadTarget.Img_Equip3,
            "Assets/Resources_moved/Images/Img_Equip3.png"
        },
        #endregion

    };

}