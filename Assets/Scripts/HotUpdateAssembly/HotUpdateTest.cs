using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;

public class HotUpdateTest : MonoBehaviour
{

    private void Awake()
    {
        Debug.LogWarning(" ---------------------- HotUpdateTest Awake ---------------------- ");

        Debug.LogWarning(" ------------------------------------------------- Awake End");
    }
    void Start()
    {
        Debug.LogWarning(" ---------------------- HotUpdateTest Start ---------------------- ");

        Debug.LogWarning(" ------------------------------------------------- Start End");
    }

    private void OnEnable()
    {
        Debug.LogWarning(" ---------------------- HotUpdateTest OnEnable ---------------------- ");

        Debug.LogWarning(" ------------------------------------------------- OnEnable End");
    }

    // Update is called once per frame
    void Update()
    {

    }
}

public static class ExtendClassFunction
{
    public static bool ExtendAOTTestStaticAss(this AOTTestStaticAss f_This, int count)
    {
        return false;
    }
}