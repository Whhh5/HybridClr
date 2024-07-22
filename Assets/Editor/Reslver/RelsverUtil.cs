using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ETypeMap : uint
{
    None,
    Ancient,
    Boolean,
    String,
    ETypeMap,
    IList,
    IDictionary,
    EnumMax = uint.MaxValue,
}
public class ReslverUtil
{
    public static string IntToString(int f_Value)
    {
        var str = Mathf.Abs(f_Value).ToString();
        var valueLength = str.Length;
        for (int i = 0; i < (ReslverConfig.IntLength - valueLength - 1); i++)
        {
            str = $"0{str}";
        }
        return (f_Value > 0 ? "+" : "-") + str;
    }
    public static int StringToInt(string f_Value)
    {
        var value = int.Parse(f_Value);
        return value;
    }
    public static string GetSubStr(string f_Value, int f_StartIndex, int f_Length)
    {
        return f_Value.Substring(f_StartIndex, f_Length);

    }

}