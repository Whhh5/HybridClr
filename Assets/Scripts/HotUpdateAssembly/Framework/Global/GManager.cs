using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GManager
{
    public static UGUIManagerData UGUIManager = IPoolClass.PopClass<UGUIManagerData>();
    public static UIPre_StoreData UIStoreData = IPoolClass.PopClass<UIPre_StoreData>();
    public static Sc_MainCameraData MainCamera = IPoolClass.PopClass<Sc_MainCameraData>();
    public static LoadManager<GameObject> LoadGameObjectManager = new();
    public static LoadManager<Sprite> LoadSpriteManager = new();
    public static LoadsManager<LevelSetting> LoadLevelSettingManager = new();
    public static LoadsManager<EquipData> LoadEquipDataManager = new();
}
