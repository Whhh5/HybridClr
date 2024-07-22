using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class ListQueue<T>
{
    public ListQueue(int count = 10)
    {
        count = count < 10 ? 10 : count;
        m_List = new T[count];
        m_ListCount = count;
        m_AddCount = count;
        Clear();
    }
    public void Clear()
    {
        m_EndP = 0;
        m_StartP = 0;
    }

    public T this[int key]
    {
        get
        {
            var index = (m_StartP + key) % m_ListCount;
            var value = m_List[index];
            return value;
        }
    }

    private T[] m_List;
    private int m_ListCount = 0;
    private int m_StartP = 0;
    private int m_EndP = 0;
    private int m_AddCount = 0;

    public int Count => m_EndP < m_StartP ? m_ListCount - (m_StartP - m_EndP) : m_EndP - m_StartP;

    public bool TryPop(out T value)
    {
        value = default;
        if (m_StartP == m_EndP)
        {
            return false;
        }
        var targetP = m_StartP;
        m_StartP = (m_StartP + 1) % m_ListCount;
        value = m_List[targetP];
        return true;
    }

    public void Push(T item)
    {
        m_List[m_EndP] = item;
        m_EndP = (m_EndP + 1) % m_ListCount;

        if (m_EndP == m_StartP)
        {
            Extend();
        }
    }

    public void Extend()
    {
        var toCount = m_ListCount + m_AddCount;
        var oldList = m_List;
        m_EndP = m_ListCount;
        m_StartP = 0;
        m_ListCount = toCount;
        m_List = new T[toCount];
        oldList.CopyTo(m_List, 0);
    }

    public bool Contains(T f_Item)
    {
        for (int i = m_StartP; i < m_EndP; i++)
        {
            var value = m_List[i];
            if (f_Item.Equals(value))
            {
                return true;
            }
        }
        return false;
    }

}

[Serializable]
public class ListStack<T>
{
    public ListStack(int count = 3)
    {
        count = count <= 0 ? 1 : count;
        m_List = new List<T>(new T[count]);
        m_AddCount = count;
        m_Pointer = 0;
    }
    public void Clear()
    {
        m_Pointer = 0;
    }

    [SerializeField] private List<T> m_List = new();
    [SerializeField] private int m_Pointer = 0;
    [SerializeField] private int m_AddCount = 0;
    public int Count => m_Pointer;


    public T this[int key]
    {
        get { return m_List[key]; }
    }

    public bool TryValue(out T f_Value)
    {
        f_Value = default(T);
        if (m_Pointer > 0)
        {
            f_Value = m_List[m_Pointer - 1];
            return true;
        }
        else
        {
            return false;
        }
    }
    public bool TryGetValue(int f_Index, out T f_Value)
    {
        if (f_Index >= m_Pointer)
        {
            f_Value = default;
            return false;
        }
        f_Value = m_List[f_Index];
        return true;
    }

    public bool TryPop(out T value)
    {
        bool isTry = false;
        if (m_Pointer > 0)
        {
            value = m_List[--m_Pointer];
            //m_List[m_Pointer] = default(T); //.Remove(value);
            isTry = true;
        }
        else
        {
            value = default(T);
        }

        return isTry;
    }

    public void Push(T item)
    {
        var insertIndex = m_Pointer;
        Insert(insertIndex, item);
    }

    public void Extend()
    {
        if (m_Pointer < m_List.Count) 
            return;
        var newList = new List<T>(new T[(uint)m_List.Count + m_AddCount]);
        for (int i = 0; i < m_List.Count; i++)
        {
            newList[i] = m_List[i];
        }

        m_List = newList;
    }

    public bool Contains(T f_Item)
    {
        var index = IndexOf(f_Item);
        return index > -1;
    }

    public int IndexOf(T f_Item)
    {
        var index = -1;
        for (int i = 0; i < m_Pointer; i++)
        {
            if (f_Item.Equals(m_List[i]))
            {
                index = i;
                break;
            }
        }
        return index;
    }

    public int IndexOf(Func<T, bool> f_Condition)
    {
        for (int i = 0; i < m_Pointer; i++)
        {
            var item = m_List[i];
            if (f_Condition.Invoke(item))
            {
                return i;
            }
        }

        return -1;
    }

    public void Insert(int f_Index, T f_Item)
    {
        var index = Mathf.Min(m_Pointer, f_Index);
        m_List[m_Pointer++] = default;
        for (int i = m_Pointer - 1; i > index; i--)
        {
            m_List[i] = m_List[i - 1];
        }

        m_List[index] = f_Item;
        Extend();
    }


    public IEnumerable<KeyValuePair<int, T>> GetEnumerator()
    {
        for (int i = 0; i < m_Pointer; i++)
        {
            var index = i;
            var tempItem = m_List[index];
            yield return new KeyValuePair<int, T>(index, tempItem);
        }
    }
    // 将最后一个元素覆盖需要删除的元素，数组将变为无序，删除速度快
    public bool Remove(T f_Target)
    {
        var index = IndexOf(f_Target);
        if (index < 0)
        {
            return false;
        }
        else
        {
            if (!TryPop(out var element))
            {
                return false;
            }
            if (index != m_Pointer)
            {
                m_List[index] = element;
            }
            return true;
        }
    }

    // f_Target: 删除对象      f_Callback：移动对象，旧的索引，新的索引， 删除之后数据依旧有序
    public bool Remove2(T f_Target, Action<T, int, int> f_Callback = null)
    {
        var index = IndexOf(f_Target);
        if (index < 0)
        {
            return false;
        }
        else
        {
            for (int i = index; i < m_Pointer; i++)
            {
                m_List[i] = m_List[i + 1];
                f_Callback?.Invoke(m_List[i], i + 1, i);
            }

            m_Pointer--;

            return true;
        }
    }

    public static List<T> ListStackAdd(ListStack<T> f_List1, ListStack<T> f_List2)
    {
        List<T> newList = new(new T[f_List1.Count + f_List2.Count]);

        for (int i = 0; i < f_List1.Count; i++)
        {
            newList[i] = f_List1[i];
        }

        for (int i = 0; i < f_List2.Count; i++)
        {
            newList[(int)(f_List1.Count + i)] = f_List2[i];
        }

        return newList;
    }
    public void CopyTo(ListStack<T> f_List1)
    {
        for (int i = 0; i < m_Pointer; i++)
        {
            f_List1.Push(m_List[i]);
        }
    }
}
