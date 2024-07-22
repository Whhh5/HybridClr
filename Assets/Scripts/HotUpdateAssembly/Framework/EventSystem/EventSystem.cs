using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EEvent
{
    None,
    EVENT_LEVEL_ENTER,
    EVENT_LEVEL_EXIT,
}
public class EventSystem : Singleton<EventSystem>
{
    private Dictionary<EEvent, HashSet<Action<int>>> m_EventData = new();

    public override async UniTask AwakeAsync()
    {
        await base.AwakeAsync();
    }
    public override void OnDestroy()
    {
        base.OnDestroy();
    }

    public void Subscription(EEvent f_Event, Action<int> f_Callback)
    {
        if (!m_EventData.TryGetValue(f_Event, out var eventList))
        {
            eventList = new();
            m_EventData.Add(f_Event, eventList);
        }
        eventList.Add(f_Callback);
    }
    public void Unsubscription(EEvent f_Event, Action<int> f_callback)
    {
        if (!m_EventData.TryGetValue(f_Event, out var eventList))
        {
            return;
        }

        if (eventList.Count <= 0)
        {
            m_EventData.Remove(f_Event);
        }
    }
    public void FireEvent(EEvent f_Event, int f_Key)
    {
        if (!m_EventData.TryGetValue(f_Event, out var eveltList))
        {
            return;
        }
        foreach (var item in eveltList)
        {
            item(f_Key);
        }
    }
}
