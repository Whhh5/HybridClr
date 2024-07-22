using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct AotTestStructAss
{
    public int count;
    private int m_Count;
    public int Count { get; set; }
    public void StructCall()
    {
        
    }
    public void GenericFunc<T>()
    {
        Debug.Log($"AotTestStructAss = {typeof(T)}");
    }
}
public struct AotTestStructAss2
{
    public int count;
    private int m_Count;
    public AOTTestStaticAss m_TestClass;
    private AotTestStructAss m_TestStruct;
    public int Count { get; set; }
    public void StructCall()
    {

    }
    public void GenericFunc<T>()
    {
        Debug.Log($"AotTestStructAss = {typeof(T)}");
    }
}

public class AOTTestStaticAss
{
    public int count;
    private int m_Count;
    public int Count { get; set; }
    public void StructCall()
    {

    }
}

public class Struct22
{
    public int Count;
    private int m_Count;
    private int m_Count2 = 0;
    public void Call()
    {

    }

}

public struct Struct22222
{
    public int Count;
    private int m_Count;
    public void Call()
    {

    }
}
public class AOTTestAss : MonoBehaviour
{
    AotTestStructAss m_MyStruct = new();

    void Start()
    {
        Debug.Log("");
        var t = new List<AotTestStructAss>();

        var cl = new Struct22222();
        //List<Struct22222> list = new();
    }

    void Update()
    {
        
    }

    public int count;
    private int m_Count;
    public int Count { get; set; }
    public int Count2 { get; set; }
    public void StructCall()
    {

    }
}

