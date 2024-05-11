using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public interface ISingleton
{
    /// <summary>
    /// 启用生命周期功能
    /// </summary>
    public EManagerFuncType ManagerFuncType { get; }
    /// <summary>
    /// 初始化内部数据，反向函数 OnDestroy()
    /// </summary>
    public void Awake();
    /// <summary>
    /// 初始化依赖其他模块数据，反向函数 Stop()
    /// </summary>
    public void Start();
    /// <summary>
    /// 销毁以来其他模块数据
    /// </summary>
    public void Stop();
    /// <summary>
    /// 销毁内部模块数据
    /// </summary>
    public void OnDestroy();
    /// <summary>
    /// Update
    /// </summary>
    public void Update();
}
public abstract class Singleton<T> : ISingleton
    where T : new()
{
    public static T Instance = new();

    public Singleton()
    {

    }
    public virtual EManagerFuncType ManagerFuncType => EManagerFuncType.Awake;

    public virtual void Awake()
    {

    }
    public virtual void Start()
    {

    }
    public virtual void Stop()
    {

    }
    public virtual void OnDestroy()
    {

    }
    public virtual void Update()
    {

    }
}
