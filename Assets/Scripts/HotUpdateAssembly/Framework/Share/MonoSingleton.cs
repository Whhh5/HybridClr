using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public abstract class MonoSingleton<T> : MonoBehaviour
    where T : MonoSingleton<T>
{
    public static T Instance = null;
    protected virtual void Awake()
    {
        Instance = (T)this;
    }
}