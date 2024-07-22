using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;

public class ReslverManager
{
    private static Dictionary<Type, ReslverBase> m_ReslverMap = null;
    private static Dictionary<ETypeMap, Type> m_TypeMapToType = null;
    public static void InitReslverMap()
    {
        m_ReslverMap = new();
        m_TypeMapToType = new();
        AddReslverMap<IntRelver>();
        AddReslverMap<StringReslver>();
        AddReslverMap<ListReslver>();
    }
    private static void AddReslverMap<TReslverBase>()
        where TReslverBase : ReslverBase, new()
    {
        var value = new TReslverBase();
        m_ReslverMap.Add(value.TargetType, value);
        m_TypeMapToType.Add(value.TypeMap, value.TargetType);
    }

    public void AddReslver(Type f_Type, ReslverBase f_Reslver)
    {
        m_ReslverMap.Add(f_Type, f_Reslver);
    }
    public static string ToString(object f_Target)
    {
        if (!TryGetReslver(f_Target, out var reslver))
            return null;
        var typeStr = ReslverUtil.IntToString((int)reslver.TypeMap);
        if (!TryGetFieldString(f_Target, out var valueStr))
            return null;
        var length = ReslverUtil.IntToString(valueStr.Length);
        string result = $"[t:{typeStr},l:{length}]{valueStr}";

        return result;
    }
    public static object ToObject(string f_Value)
    {
        var readIndex = 0;
        readIndex += 3;
        var typeMapStr = ReslverUtil.GetSubStr(f_Value, readIndex, ReslverConfig.IntLength);
        readIndex += ReslverConfig.IntLength;
        var typeMap = ReslverUtil.StringToInt(typeMapStr);
        if (!TryGetReslver((ETypeMap)typeMap, out var reslver))
            return null;
        readIndex += 3;
        var lengthStr = ReslverUtil.GetSubStr(f_Value, readIndex, ReslverConfig.IntLength);
        readIndex += ReslverConfig.IntLength;
        var length = ReslverUtil.StringToInt(lengthStr);
        readIndex += 1;
        var context = ReslverUtil.GetSubStr(f_Value, readIndex, length);
        var result = reslver.Reslver(context);
        return result;
    }
    public static bool TryGetFieldType(object f_FieldValue, out ETypeMap f_TypeMap)
    {
        if (!TryGetReslver(f_FieldValue, out var reslver))
        {
            f_TypeMap = ETypeMap.None;
            return false;
        }
        f_TypeMap = reslver.TypeMap;
        return true;
    }
    private static bool TryGetFieldString(object f_FieldValue, out string f_Result)
    {
        f_Result = null;
        if (!TryGetReslver(f_FieldValue, out var reslver))
            return false;
        f_Result = reslver.Execute(f_FieldValue);
        return true;
    }

    private static bool TryGetReslver(object f_Value, out ReslverBase f_Reslver)
    {
        var type = f_Value.GetType();
        if (TryGetReslver(type, out f_Reslver))
            return true;
        foreach (var item in m_ReslverMap)
        {
            if (!item.Key.IsAssignableFrom(type))
                continue;
            f_Reslver = item.Value;
            return true;
        }
        Debug.LogError($"解释器不存在 value = {f_Value}， type = {f_Value.GetType()}");
        return false;
    }
    private static bool TryGetReslver(Type f_Type, out ReslverBase f_Reslver)
    {
        if (m_ReslverMap.TryGetValue(f_Type, out f_Reslver))
            return true;
        return false;
    }
    private static bool TryGetReslver(ETypeMap f_TypeMap, out ReslverBase f_Reslver)
    {
        var type = TypeMapToType(f_TypeMap);
        if (TryGetReslver(type, out f_Reslver))
            return true;
        Debug.LogError($"解释器不存在 typeMap = {f_TypeMap}");
        return false;
    }
    public static ETypeMap TypeToTypeMap(Type f_Type)
    {
        if (m_ReslverMap.TryGetValue(f_Type, out var reslver))
            return reslver.TypeMap;
        Debug.LogError($"解释器不存在 typeMap = {f_Type}");
        return ETypeMap.None;
    }
    public static Type TypeMapToType(ETypeMap f_TypeMap)
    {
        if (m_TypeMapToType.TryGetValue(f_TypeMap, out var type))
            return type;
        Debug.LogError($"解释器不存在 typeMap = {f_TypeMap}");
        return null;
    }
}
