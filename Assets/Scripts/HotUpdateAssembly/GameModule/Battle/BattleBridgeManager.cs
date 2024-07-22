using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleBridgeManager : Singleton<BattleBridgeManager>
{
    private Dictionary<int, EquipData> m_BattlePlayer1 = new();
    private Dictionary<int, EquipData> m_BattlePlayer2 = new();

    public override async UniTask AwakeAsync()
    {
        await base.AwakeAsync();
    }
}
