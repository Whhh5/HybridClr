using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Burst;
using Unity.Jobs;
using Unity.Collections;

[BurstCompile]
public struct MyJobsClass : IJobFor
{
    private NativeArray<Vector3> m_ArrComple;
    public MyJobsClass(NativeArray<Vector3> f_ArrCompile)
    {
        m_ArrComple = f_ArrCompile;
    }
    public void Execute(int index)
    {
        var value = m_ArrComple[index];
        value = Vector3.one * index;
    }
}