using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;


public enum EManagerFuncType
{
    None = 0,
    Awake = 1 << 0,
    Start = 1 << 1,
    Update = 1 << 2,
}
public class CoreManager : MonoBehaviour
{
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
        foreach (var assembly in hotUpdateAsss)
        {
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
                var instanceField = specificParentType.GetField("Instance", BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static);
                var instance = instanceField.GetValue(null);
                var monoBehaviour = instance as ISingleton;
                SubManager(monoBehaviour);
                Debug.Log($"{type} => IManagerMonoBehaviour");
            }
        }
    }
    private void Awake()
    {
        //var allAssembly = Assembly.
        //SubManager<>(LoadAssetManager.Instance);

        Register();

        // Æô¶¯ awake
        if (m_ManagerList.TryGetValue(EManagerFuncType.Awake, out var list))
        {
            foreach (var item in list)
            {
                item.Awake();
            }
        }

    }

    private void Start()
    {
        // Æô¶¯ start
        if (m_ManagerList.TryGetValue(EManagerFuncType.Start, out var list))
        {
            foreach (var item in list)
            {
                item.Start();
            }
        }
    }
    private void OnDestroy()
    {
        // Í£Ö¹ start
        if (m_ManagerList.TryGetValue(EManagerFuncType.Start, out var list))
        {
            foreach (var item in list)
            {
                item.Stop();
            }
        }
        // Í£Ö¹ awake
        if (m_ManagerList.TryGetValue(EManagerFuncType.Awake, out list))
        {
            foreach (var item in list)
            {
                item.OnDestroy();
            }
        }
    }

    private void Update()
    {
        // Æô¶¯ update
        if (m_ManagerList.TryGetValue(EManagerFuncType.Update, out var list))
        {
            foreach (var item in list)
            {
                item.Update();
            }
        }
    }
}
