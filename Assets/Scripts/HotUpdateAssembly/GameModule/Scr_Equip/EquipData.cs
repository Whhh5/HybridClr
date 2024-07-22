using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "EquipData", menuName = "Config/Equip Data", order = 1)]
public partial class EquipData : ScriptableObject
{
    // װ��Ψһ����
    public int EquipKey = 0;
    // װ��ͼ��
    public ELoadTarget Icon;
    // ģ�������С
    public Vector2Int GridSize = Vector2Int.one * 3;
    // ռ������
    public List<int> OccupiesIndexs = new();
    // ���½�����
    public int LeftDownIndex = 0;
    // ԭʼ����
    public EDirection OriginalDirection = EDirection.Left;
    // ����
    public EEquipType EquipType = EEquipType.None;
    public bool IsType(EEquipType f_EquipType)
    {
        return EquipType == f_EquipType;
    }
}


public interface ICom
{

}
public interface IComInterval
{
    public float ClickIntervalTime { get; set; }
}


public class DefaultAttack : ICom, IInvoke, IComInterval, IDamaged
{
    public float ClickIntervalTime { get; set; }
    public int DamagedValue { get; set; }

    public bool Invoke(int f_Param)
    {
        return true;
    }
}
public interface IDamaged : ICom
{
    public int DamagedValue { get; set; }
}
public interface ITarget : ICom
{
    public int TargetID { get; set; }
}
public interface IInvoke
{
    public bool Invoke(int f_Param);
}


public interface IDefaultAttack
{
    public DefaultAttack DefaultAttack { get; set; }
}
public class EquipData222222222 : IDefaultAttack
{
    public DefaultAttack DefaultAttack { get; set; } = new()
    {
        ClickIntervalTime = 0,
        DamagedValue = 10,
    };

}