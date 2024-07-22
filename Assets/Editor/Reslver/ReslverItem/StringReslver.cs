using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StringReslver : ReslverBase
{
    public override ETypeMap TypeMap => ETypeMap.String;

    public override Type TargetType => typeof(string);

    // [length,ETypeMap,nameLength]name=[length,valueLenth]value
    public override string Execute(object f_FieldValue)
    {
        var result = f_FieldValue.ToString();
        var length = result.Length;
        result = $"[l:{ReslverUtil.IntToString(length)}]{result}";
        return result;
    }

    public override object Reslver(string f_Value)
    {
        var startIndex = 0;
        startIndex += 3;
        var lengthStr = ReslverUtil.GetSubStr(f_Value, startIndex, ReslverConfig.IntLength);
        startIndex += ReslverConfig.IntLength;
        startIndex += 1;
        var legnth = ReslverUtil.StringToInt(lengthStr);
        var result = ReslverUtil.GetSubStr(f_Value, startIndex, legnth);
        return result;
    }
}