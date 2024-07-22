using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering.Universal;

[CustomEditor(typeof(GameTestMono))]
public class GameTestMonoEditor : Editor
{
    private GameTestMono m_Target = null;
    private void OnEnable()
    {
        m_Target = target as GameTestMono;
    }
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (GUILayout.Button("ResetUpdateCount"))
        {
            m_Target.ResetUpdateCount();
        }
        EditorGUILayout.IntField("Update", m_Target.UpdateCount);
        //EditorGUILayout.IntField("Render", UniversalRenderPipeline.RenderCount);
    }
}
public class GameTestMono : MonoBehaviour
{
    public static GameTestMono Instance = null;
    public bool m_IsDebug = false;
    public bool m_TestCSMove = false;
    public float m_Speed = 1;
    public float m_LoopTime = 3;
    public bool m_TestAnimationMove = false;
    public Transform tran => gameObject.transform;
    public int UpdateCount = 0;
    public float UpdateTime = 0;
    public int LoopCount = 100;
    private void Awake()
    {
        Instance = this;
        Application.targetFrameRate = 60;
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    private Vector3? m_CameraPos = null;
    private Vector3 m_CameraDir = default;
    private float m_MoveTime = 0;
    public float m_MoveDelta = default;
    // Update is called once per frame
    private void LateUpdate()
    {
        for (int i = 0; i < LoopCount; i++)
        {

        }
        UpdateCount++;
        UpdateTime += Time.deltaTime;
        if (m_IsDebug)
        {
            Application.targetFrameRate = 20;
        }
        if (m_TestAnimationMove)
        {
            var dir = (m_MoveTime / m_LoopTime) % 2 < 1 ? 1 : -1;
            tran.position += m_MoveDelta * m_CameraDir * dir;
            m_MoveTime += Time.deltaTime;
        }
        if (m_TestCSMove)
        {
            if (m_CameraPos == null)
            {
                m_CameraPos = tran.position;
                m_CameraDir = transform.right;
                m_MoveTime = m_LoopTime / 2;
            }
            var dir = (m_MoveTime / m_LoopTime) % 2 < 1 ? 1 : -1;
            var increment = m_CameraDir * dir * Time.deltaTime * m_Speed;
            m_MoveDelta = Vector3.Distance(increment, Vector3.zero);
            tran.position += increment;
            m_MoveTime += Time.deltaTime;
        }
        else
        {
            m_CameraPos = null;
        }
    }

    public void ResetUpdateCount()
    {
        UpdateTime = 0;
        UpdateCount = 0;
        //UniversalRenderPipeline.RenderCount = 0;
    }
}
