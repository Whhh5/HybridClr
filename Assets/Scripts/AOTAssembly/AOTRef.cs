using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AOTClass1
{
    public string TestName = "AOTClass - 1 - TestName";
}
public class AOTClass2
{
    public AOTStruct TestStruct;
    public string TestName = "AOTClass - 2 - TestName";
}
public struct AOTStruct
{
    public string TestName;
    public int Count;
    public void LogCount()
    {
        Debug.Log($"AOTStruct - LogCount - {Count}");
    }

    private void PrivateFunc()
    {

    }
}
public struct AOTStruct2
{
    public string TestName;
    public int Count;
    public AOTClass1 TestClass;
    public void LogCount()
    {
        Debug.Log($"AOTStruct - LogCount - {Count}");
    }
}


public class AOTGeneral<T>
{

}
public class AOTGeneral1<T>
    where T: class
{

}
public class AOTGeneral2<T>
    where T : struct
{

}
public class AOTGeneral3<T>
    where T : AOTClass1
{

}