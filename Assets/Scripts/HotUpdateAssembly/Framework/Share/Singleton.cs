using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public interface ISingleton
{
    /// <summary>
    /// �����������ڹ���
    /// </summary>
    public EManagerFuncType ManagerFuncType { get; }
    /// <summary>
    /// ��ʼ���ڲ����ݣ������� OnDestroy()
    /// </summary>
    public UniTask AwakeAsync();
    /// <summary>
    /// ��ʼ����������ģ�����ݣ������� Stop()
    /// </summary>
    public UniTask StartAsync();
    /// <summary>
    /// ������������ģ������
    /// </summary>
    public void Stop();
    /// <summary>
    /// �����ڲ�ģ������
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

    public virtual async UniTask AwakeAsync()
    {
        await UniTask.Yield();
    }
    public virtual async UniTask StartAsync()
    {
        await UniTask.Yield();
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
