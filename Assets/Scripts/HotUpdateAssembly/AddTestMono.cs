using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public struct MyStruct2
{
    public int count;
    public int Call()
    {
        return 0;
    }
}
public class AddTestMono : MonoBehaviour
{
    private MyStruct2 m_MyStruct = new();
    [SerializeField]
    private Button m_MyBtn = null;
    private void Awake()
    {
        Debug.LogError(" --- add hot update mono AddTestMono Awake ");
        m_MyBtn.onClick.AddListener(() =>
        {
            m_MyStruct.count++;
            Debug.LogError($"{m_MyStruct.count}");
        });
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
