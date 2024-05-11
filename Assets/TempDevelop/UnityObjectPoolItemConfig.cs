using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum ELoadPrefabType
{
    // 异化之地
    Stronghold,

    // 弹幕
    UIDanmaku_Effect_CancelUpvote,
    UIDanmakuChat_Img,
    UIDanmakuChat_Txt,
    UIDanmakuCommon_Img,
    UIDanmakuCommon_Txt,
    UIDanmakuTrackRootInfo,
    UIDanmakuMenu,
    UIDanmaku_Effect_Upvote,


    // 气泡
    UIBubbleStandard,
    UIBubbleNpc,
    UIBubbleNpcDialog,
    UIBubbleLabel,
    UIBubbleLimitTime,

    // 小地图
    UIMapFlag_Common,
    UIMapFlag_AreaText,
    UIMapFlag_City,
    UIMapFlag_Hero,
    UIMapFlag_ArbnBoxLimitTime,
    UIMapFlag_DieStatus,
    UIMapFlag_BossWar,
    UIMapFlag_BigMapCollection,
    UIMapFlag_GuildWarNPC,
    UIMapFlag_Craft,
    UIMapFlagEffect_TraceSphere,
    UIMapFlagEffect_TraceBox,
    UIMapFlagEffect_Select_Default,
    UIMapFlagEffect_Select_BossWar,
    UIMapFlagRoot,
    UIMapFlagTraceRoot,
}
public class UnityObjectPoolItemConfig
{
    public static UnityObjectPoolItemConfig Instance = new();
    private class UIMapPrefabData
    {
        public int PrefabID;
        public string PrefabPath;
    }
    private UIMapPrefabData m_PrefabData;
    private Dictionary<ELoadPrefabType, UIMapPrefabData> m_PrefabPathData = new()
    {
        #region 异化之地
        {
            ELoadPrefabType.Stronghold,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Artist/Effect/Prefab/Stronghold/Stronghold.prefab"
            }
        },
        #endregion

        #region Danmaku 弹幕
        {
            ELoadPrefabType.UIDanmakuChat_Img,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuChat_Img.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmakuChat_Txt,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuChat_Txt.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmakuCommon_Img,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuCommon_Img.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmakuCommon_Txt,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuCommon_Txt.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmakuTrackRootInfo,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuTrackRootInfo.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmakuMenu,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmakuMenu.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmaku_Effect_Upvote,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmaku_Effect_Upvote.prefab"
            }
        },
        {
            ELoadPrefabType.UIDanmaku_Effect_CancelUpvote,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/Danmaku/UIDanmaku_Effect_CancelUpvote.prefab"
            }
        },
        #endregion

        #region Bubble 气泡
        {
            ELoadPrefabType.UIBubbleStandard,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIBubblePrefab/UIBubbleStandard.prefab",
            }
        },
        {
            ELoadPrefabType.UIBubbleLimitTime,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIBubblePrefab/UIBubbleLimitTime.prefab",
            }
        },
        {
            ELoadPrefabType.UIBubbleNpc,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIBubblePrefab/UIBubbleNpc.prefab",
            }
        },
        {
            ELoadPrefabType.UIBubbleNpcDialog,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIBubblePrefab/UIBubbleNpcDialog.prefab",
            }
        },
        {
            ELoadPrefabType.UIBubbleLabel,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIBubblePrefab/UIBubbleLabel.prefab",
            }
        },
        #endregion

        #region UIMap 地图
        {
            ELoadPrefabType.UIMapFlag_Common,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_Common.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_AreaText,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_AreaText.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_City,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_City.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_Hero,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_Hero.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_ArbnBoxLimitTime,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_ArbnBoxLimitTime.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_DieStatus,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_DieStatus.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_BossWar,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_BossWar.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_BigMapCollection,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_BigMapCollection.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_GuildWarNPC,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_GuildWarNPC.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlag_Craft,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlag_Craft.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagEffect_TraceSphere,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagEffect_TraceSphere.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagEffect_TraceBox,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagEffect_TraceBox.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagEffect_Select_Default,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagEffect_Select_Default.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagEffect_Select_BossWar,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagEffect_Select_BossWar.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagRoot,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagRoot.prefab"
            }
        },
        {
            ELoadPrefabType.UIMapFlagTraceRoot,
            new()
            {
                PrefabID = 1,
                PrefabPath = "G_Resources/Game/Prefab/LuaUI/UIMap/UIMapFlagTraceRoot.prefab"
            }
        },
        #endregion

    };
    public bool TryGetPrefabPath(ELoadPrefabType f_PrefabType, out string f_Path)
    {
        if (!m_PrefabPathData.TryGetValue(f_PrefabType, out m_PrefabData))
        {
            f_Path = null;
            return false;
        }
        f_Path = m_PrefabData.PrefabPath;
        return true;
    }
}