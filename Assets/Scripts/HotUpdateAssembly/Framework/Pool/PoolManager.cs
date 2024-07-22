using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IPoolClass
{
    public void Constructor();
    public void Release();
    public static T PopClass<T>()
        where T : class, IPoolClass, new()
    {
        var result = PoolManager.Instance.PopClass<T>();
        result.Constructor();
        return result;
    }
    public static void PushClass(IPoolClass f_Target)
    {
        f_Target.Release();
        PoolManager.Instance.PushClass(f_Target);
    }
}
public class PoolManager : Singleton<PoolManager>
{
    private Dictionary<Type, ListStack<IPoolClass>> m_PoolClassCache = new();
    public T PopClass<T>()
        where T : class, IPoolClass, new()
    {
        var type = typeof(T);
        IPoolClass result = null;
        if (!(m_PoolClassCache.TryGetValue(type, out var list)
            && list.TryPop(out result)))
        {
            result = new T();
        }
        return result as T;
    }
    public void PushClass<T>(T f_Target)
        where T : IPoolClass
    {
        var type = typeof(T);
        if (!m_PoolClassCache.TryGetValue(type, out var list))
        {
            list = new();
            m_PoolClassCache.Add(type, list);
        }
        list.Push(f_Target);
    }
}
