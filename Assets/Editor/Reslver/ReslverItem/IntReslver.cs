using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntRelver : ReslverBase
{
    public override ETypeMap TypeMap => ETypeMap.Ancient;

    public override Type TargetType => typeof(int);

    public override string Execute(object f_FieldValue)
    {
        return f_FieldValue.ToString();
    }

    public override object Reslver(string f_Value)
    {
        return int.Parse(f_Value);
    }
}