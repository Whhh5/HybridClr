using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateMesh : Singleton<CreateMesh>
{
    private GameObject m_TargetObj = null;
    private Mesh m_Mesh = null;
    // √‹∂»
    private float m_Density = 1;
    // ¥Û–°
    private Vector2 m_Size = Vector2.zero;
    public void ClearMesh()
    {
        GameObject.DestroyImmediate(m_TargetObj);
        m_Mesh = null;
        m_TargetObj = null;
    }
    private void CreateTarget()
    {
        m_TargetObj = new("CreateMesh");
        m_Mesh = new();
        var meshRender = m_TargetObj.AddComponent<MeshRenderer>();
        meshRender.material = new(Shader.Find("Standard"));
        var meshFilter = m_TargetObj.AddComponent<MeshFilter>();
        meshFilter.mesh = m_Mesh;
        m_TargetObj.transform.position = Vector3.zero;
    }
    public async void CreateMeshAsync(Vector2 f_Size, float f_Density)
    {
        CreateTarget();
        m_Size = f_Size;
        m_Density = f_Density;
        GetLocalPoint(out var vertices, out var triangles);

        m_Mesh.vertices = vertices;
        m_Mesh.triangles = triangles;
    }
    private void GetLocalPoint(out Vector3[] f_Vertices, out int[] f_Triangles)
    {
        var widthCount = Mathf.FloorToInt(m_Size.x / m_Density);
        var heightCount = Mathf.FloorToInt(m_Size.y / m_Density);
        var count = widthCount * heightCount;
        f_Vertices = new Vector3[count];
        for (int i = 0; i < heightCount; i++)
        {
            for (int j = 0; j < widthCount; j++)
            {
                var index = i * widthCount + j;
                var height = Mathf.PerlinNoise(i / heightCount * 0.2f, j / widthCount * 0.3f);
                var value = new Vector3(j * m_Density, height, i * m_Density);
                f_Vertices[index] = value;
            }
        }


        var verCount = (widthCount - 1) * (heightCount - 1) * 2 * 3;
        f_Triangles = new int[verCount];
        var verIndex = 0;
        for (int i = 0; i < heightCount - 1; i++)
        {
            for (int j = 0; j < widthCount - 1; j++)
            {
                var index = i * widthCount + j;
                var index2 = index + widthCount;
                var index3 = index + 1;
                var index4 = index2 + 1;
                f_Triangles[verIndex++] = index;
                f_Triangles[verIndex++] = index2;
                f_Triangles[verIndex++] = index3;
                f_Triangles[verIndex++] = index3;
                f_Triangles[verIndex++] = index2;
                f_Triangles[verIndex++] = index4;
            }
        }
    }
}
