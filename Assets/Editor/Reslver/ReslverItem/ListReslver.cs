using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ListReslver : ReslverBase
{
    public override ETypeMap TypeMap => ETypeMap.IList;
    public override Type TargetType => typeof(IList);

    public override string Execute(object f_FieldValue)
    {
        var target = (IList)f_FieldValue;
        var count = ReslverUtil.IntToString(target.Count);
        var listGenType = target.GetType().GetGenericArguments();
        var listGenTypeMap = ReslverManager.TypeToTypeMap(listGenType[0]);
        var listGenTypeMapStr = ReslverUtil.IntToString((int)listGenTypeMap);
        var result = $"{{[t:{listGenTypeMapStr},l:{count}]\n";
        foreach (var value in target)
        {
            if (!ReslverManager.TryGetFieldType(value, out var typeMap))
                continue;
            var str = ReslverManager.ToString(value);
            var length = ReslverUtil.IntToString(str.Length);
            var contextType = value.GetType();
            var typeValue = ReslverUtil.IntToString((int)typeMap);
            result += $"[t:{typeValue},l:{length}]{str}{ReslverConfig.ListSplitSymbol}\n";
        }
        result += "};";
        return result;
    }
    public override object Reslver(string f_Value)
    {
        // 开始解析文本
        var curIndex = 0;
        curIndex += 4;
        var listGenTypeMapStr = ReslverUtil.GetSubStr(f_Value, curIndex, ReslverConfig.IntLength);
        var listGenTypeMap = (ETypeMap)int.Parse(listGenTypeMapStr);
        curIndex += ReslverConfig.IntLength;
        curIndex += 3;
        var listCountStr = ReslverUtil.GetSubStr(f_Value, curIndex, ReslverConfig.IntLength);
        var listCount = int.Parse(listCountStr);
        curIndex += ReslverConfig.IntLength;
        curIndex += 1;
        curIndex += 1;
        // 结尾字符索引
        var maxLength = f_Value.Length - 3;

        // 获取泛型类型
        var listGenType = ReslverManager.TypeMapToType(listGenTypeMap);
        var listType = typeof(List<>).MakeGenericType(listGenType);
        var newList = Activator.CreateInstance(listType, listCount);
        var addMethodInfo = listType.GetMethod("Add");
        var paramList = new object[1];
        while (curIndex < maxLength)
        {
            curIndex += 3;
            var typeMapStr = ReslverUtil.GetSubStr(f_Value, curIndex, ReslverConfig.IntLength);
            var typeMap = int.Parse(typeMapStr);
            curIndex += ReslverConfig.IntLength;
            curIndex += 3;
            var lengthStr = ReslverUtil.GetSubStr(f_Value, curIndex, ReslverConfig.IntLength);
            var length = int.Parse(lengthStr);
            curIndex += ReslverConfig.IntLength;
            curIndex += 1;
            var contextStr = ReslverUtil.GetSubStr(f_Value, curIndex, length);
            var context = ReslverManager.ToObject(contextStr);
            curIndex += length;
            curIndex += 1;
            curIndex += 1;
            paramList[0] = context;
            addMethodInfo.Invoke(newList, paramList);
        }
        return newList;
    }
}
