using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MyHotClass1
{
    public int TestInt = 1;
    public float TestFloat = 1.1111f;
    public string TestString = "MtTestClass1 -------- 1";
    public MyHotClass2 TestClass2 = null;
}
public class MyHotClass2
{
    public string TestStr = "MtTestClass2 -------- 2";
}

public struct MyHotStruct
{
    public int TestInt;
    public float TestFloat;
    public string TestStr;
}
public struct MyHotStruct2
{
    public int TestInt;
    public float TestFloat;
    public string TestStr;
    public MyHotClass1 TestClass1;
}

public struct MyHotStruct3
{
    public int TestInt;
    public float TestFloat;
    public float TestFloat2;
    public float TestFloat3;
    public float TestFloat4;
    public float TestFloat5;
    public float TestFloat6;
    public float TestFloat7;
    public float TestFloat8;
    public MyHotClass1 TestClass1;
}

public class MyHotTypes
{
    public static void CreateType()
    {

    }
}