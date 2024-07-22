using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial struct AotTestStruct
{
    public int count;
    private int m_Count;
    public int Count { get; set; }
    public void StructCall()
    {
        var lobby = new UI.UILobbyModule.UILobby();
    }
}

public partial class AOTTestStatic
{
    public int count;
    private int m_Count;
    public int Count { get; set; }
    public void StructCall()
    {

    }
}

public partial class AOTTest : MonoBehaviour
{
    void Start()
    {
        Debug.Log("");
    }

    void Update()
    {

    }
    public int count;
    private int m_Count;
    public int Count { get; set; }
    public void StructCall()
    {

    }
}

