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
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;
#if UNITY_EDITOR
using TestPlugins; 
#endif

public class LoadDll : MonoBehaviour
{
#if UNITY_EDITOR
    private TestPlugins_2 m_Test2 = null;
#endif
    public async void Start()
    {
        // 开始游戏
        StartGame();
    }

    private void StartGame()
    {
        Debug.Log(" --------------------- 开始运行游戏 -----------------------");
        Hello.Run();
    }
}
