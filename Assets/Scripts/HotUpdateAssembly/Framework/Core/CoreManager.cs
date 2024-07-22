using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.U2D;
using UnityEngine.UI;

public enum EManagerFuncType
{
    None = 0,
    Awake = 1 << 0,
    Start = 1 << 1, 
    Update = 1 << 2,
}
public class CoreManager : MonoBehaviour
{
    private EManagerFuncType m_CurInitSatge = EManagerFuncType.None;
    private Dictionary<EManagerFuncType, HashSet<ISingleton>> m_ManagerList = new();
    private void SubManager(ISingleton f_Manager)
    {
        for (int i = (int)EManagerFuncType.None; i <= (int)EManagerFuncType.Update; i++)
        {
            var type = (EManagerFuncType)i;
            if (!m_ManagerList.TryGetValue(type, out var list))
            {
                list = new();
                m_ManagerList.Add(type, list);
            }
            list.Add(f_Manager);
        }
    }
    private void Register()
    {
        Assembly[] hotUpdateAsss = AppDomain.CurrentDomain.GetAssemblies();
        var parentType = typeof(Singleton<>);
        var instanceStr = "Instance";
        foreach (var assembly in hotUpdateAsss)
        {
            if (assembly.GetName().Name != "HotUpdateAssembly")
                continue;
            var types = assembly.GetTypes();
            foreach (var type in types)
            {
                if (!typeof(ISingleton).IsAssignableFrom(type))
                {
                    continue;
                }
                if (parentType == type)
                {
                    continue;
                }
                if (typeof(ISingleton) == type)
                {
                    continue;
                }
                var specificParentType = parentType.MakeGenericType(type);
                var instanceField = specificParentType.GetField(instanceStr, BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static);
                var instance = instanceField.GetValue(null);
                var monoBehaviour = instance as ISingleton;
                SubManager(monoBehaviour);
                Debug.Log($"Register ======> {type}");
            }
        }
    }

    private void Awake()
    {
        GameObject.DontDestroyOnLoad(this);
        Register();
    }
    private async void Start()
    {
        Debug.Log(" --------------------- 初始化 Awake -----------------------");
        // 启动 awake
        if (m_ManagerList.TryGetValue(EManagerFuncType.Awake, out var list))
        {
            var count = list.Count;
            UniTask[] tasks = new UniTask[count];
            var index = 0;
            foreach (var item in list)
            {
                tasks[index++] = UniTask.Create(async ()=>
                {
                    await item.AwakeAsync();
                });
            }
            await UniTask.WhenAll(tasks);
        }
        m_CurInitSatge |= EManagerFuncType.Awake;
        Debug.Log(" --------------------- 初始化 Awake 完成 -----------------------");


        // 启动 start
        Debug.Log(" --------------------- 初始化 Start -----------------------");
        if (m_ManagerList.TryGetValue(EManagerFuncType.Start, out list))
        {
            var count = list.Count;
            UniTask[] tasks = new UniTask[count];
            var index = 0;
            foreach (var item in list)
            {
                tasks[index++] = UniTask.Create(async () =>
                {
                    await item.StartAsync();
                });
            }
            await UniTask.WhenAll(tasks);
        }
        m_CurInitSatge |= EManagerFuncType.Start;
        Debug.Log(" --------------------- 初始化 Start 完成 -----------------------");


        //// 加载摄像机管理
        //ILoadPrefabAsync.LoadAsync(GManager.MainCamera);
        //// 加载游戏ui
        //ILoadPrefabAsync.LoadAsync(GManager.UGUIManager);
    }
    private void OnDestroy()
    {
        // 停止 start
        Debug.Log(" --------------------- 停止 Start -----------------------");
        m_CurInitSatge &= ~EManagerFuncType.Start;
        if (m_ManagerList.TryGetValue(EManagerFuncType.Start, out var list))
        {
            foreach (var item in list)
            {
                item.Stop();
            }
        }
        Debug.Log(" --------------------- 停止 Start 完成 -----------------------");
        // 停止 awake
        Debug.Log(" --------------------- 停止 Awake -----------------------");
        m_CurInitSatge &= ~EManagerFuncType.Awake;
        if (m_ManagerList.TryGetValue(EManagerFuncType.Awake, out list))
        {
            foreach (var item in list)
            {
                item.OnDestroy();
            }
        }
        Debug.Log(" --------------------- 停止 Awake 完成 -----------------------");
    }
    private void Update()
    {
        if ((m_CurInitSatge & EManagerFuncType.Start) == EManagerFuncType.None)
        {
            return;
        }
        // 启动 update
        if (m_ManagerList.TryGetValue(EManagerFuncType.Update, out var list))
        {
            foreach (var item in list)
            {
                item.Update();
            }
        }
    }


}
