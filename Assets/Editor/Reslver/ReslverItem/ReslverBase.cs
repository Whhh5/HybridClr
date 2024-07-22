using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ReslverBase
{
    public abstract ETypeMap TypeMap { get; }
    public abstract Type TargetType { get; }
    public abstract string Execute(object f_FieldValue);
    public abstract object Reslver(string f_Value);
}