using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="LevelSetting", menuName = "Config/Level Setting", order = 0)]
public class LevelSetting : ScriptableObject
{
    public ELevel Level = 0;
    public Vector2Int InitBagCellSize = GConfig.BagCellDefaultSize;

}
