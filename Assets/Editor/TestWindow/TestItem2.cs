using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class TestItem2 : IWindowItem
{
    public string Name => "TestItem2";

    public void OnGUI()
    {
        if (GUILayout.Button(Name))
        {

        }
    }
}
