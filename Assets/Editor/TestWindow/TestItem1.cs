using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class TestItem1 : IWindowItem
{
    public string Name => "Create Mesh";

    public void OnGUI()
    {
        if (GUILayout.Button(Name))
        {
            CreateMesh.Instance.CreateMeshAsync(new Vector2(10, 5), 0.5f);
        }
    }
}
