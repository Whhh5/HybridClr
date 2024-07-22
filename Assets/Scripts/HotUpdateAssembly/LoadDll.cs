using Cysharp.Threading.Tasks;
using HybridCLR;
//using HybridCLR.Editor.HotUpdate;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using TestDll;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;

public class LoadDll : MonoBehaviour
{
#if UNITY_EDITOR
    //private TestPlugins_2 m_Test2 = null;
#endif

    private void Awake()
    {
        var dllMnager3 = new UIManager3();
        var dllMnager5 = new UIManager5();
        Debug.LogError(" --------------------- Awake -----------------------");
    }
    public async void Start()
    {
        Debug.LogError(" --------------------- Start -----------------------");
        // 开始游戏
        //StartGame();
    }
    private void OnEnable()
    {

        Debug.LogError(" --------------------- OnEnable -----------------------");
    }
    private void OnDisable()
    {

        Debug.LogError(" --------------------- OnDisable -----------------------");
    }
    private void OnDestroy()
    {

        Debug.LogError(" --------------------- OnDestroy -----------------------");
    }
    private void Update()
    {
        Debug.LogError(" --------------------- Update -----------------------");
    }

    private void StartGame()
    {
        Debug.Log(" --------------------- 开始运行游戏 -----------------------");
        Hello.Run();
    }
}
