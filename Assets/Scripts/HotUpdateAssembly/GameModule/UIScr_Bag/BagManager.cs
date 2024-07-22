using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class BagManager : Singleton<BagManager>
{
    private int m_EnterCellIndex = -1;
    private UIPre_MainBagData m_MainBagData = IPoolClass.PopClass<UIPre_MainBagData>();
    private Dictionary<int, UIPre_BagCellData> m_BogCellData = new();
    public override async UniTask AwakeAsync()
    {
        await base.AwakeAsync();


    }
    public override void OnDestroy()
    {
        base.OnDestroy();


    }
    public override async UniTask StartAsync()
    {
        await base.StartAsync();
        EventSystem.Instance.Subscription(EEvent.EVENT_LEVEL_ENTER, EVENT_LEVEL_ENTER);
        EventSystem.Instance.Subscription(EEvent.EVENT_LEVEL_EXIT, EVENT_LEVEL_EXIT);
    }
    public override void Stop()
    {
        EventSystem.Instance.Unsubscription(EEvent.EVENT_LEVEL_ENTER, EVENT_LEVEL_ENTER);
        EventSystem.Instance.Unsubscription(EEvent.EVENT_LEVEL_EXIT, EVENT_LEVEL_EXIT);
        base.Stop();
    }

    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   �¼�
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // ����ؿ�
    private void EVENT_LEVEL_ENTER(int f_Key)
    {
        var level = (ELevel)f_Key;

        // ��ʼ�������������
        InitBagDatas(level);
    }
    // �Ƴ��ؿ�
    private void EVENT_LEVEL_EXIT(int f_Key)
    {
        var level = (ELevel)f_Key;

        // ���ٱ����������
        DestroyBagDatas(level);

        m_EnterCellIndex = -1;
    }

    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   �׶���Ϊ
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // ����ؿ���ʼ��
    private void InitBagDatas(ELevel f_CurLevel)
    {
        // ��������
        m_MainBagData = GManager.UGUIManager.LoadWindowAsync<UIPre_MainBagData>();
        // �����̵�
        GManager.UGUIManager.LoadWindowAsync(GManager.UIStoreData);

        // ��������
        for (int i = 0; i < GConfig.BagCellAllSize.x; i++)
        {
            for (int j = 0; j < GConfig.BagCellAllSize.y; j++)
            {
                var index = GUtil.GetCellIndex(new(i, j));
                LoadBoxCell(index);
            }
        }

        // ��ʼ����ǰ�ؿ�����
        if (LevelManager.Instance.TryGetInitBagCellSize(out var size))
        {
            var sizeHalf = new Vector2Int((int)(size.x * 0.5f), (int)(size.y * 0.5f));
            var start = GConfig.BagCellCentre - sizeHalf;
            for (int i = 0; i < size.x; i++)
            {
                var row = i + start.x;
                for (int j = 0; j < size.y; j++)
                {
                    var col = j + start.y;
                    var index = GUtil.GetCellIndex(new(row, col));
                    LoadBagCellContext(index);
                }
            }
        }
    }
    private void DestroyBagDatas(ELevel f_CurLevel)
    {
        // �����������
        foreach (var item in m_BogCellData)
        {
            ILoadPrefabAsync.UnLoad(item.Value);
            IPoolClass.PushClass(item.Value);
        }
        m_BogCellData.Clear();

        // ���ٱ���
        m_MainBagData = null;
        GManager.UGUIManager.UnloadWindow<UIPre_MainBagData>();
        // �����̵�
        GManager.UGUIManager.UnloadWindow(GManager.UIStoreData);
    }
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ��ȡ������Ϣ
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ���ء�ж��
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    private void LoadBoxCell(int f_Index)
    {
        var data = IPoolClass.PopClass<UIPre_BagCellData>();
        data.SetCellIndex(f_Index);
        m_BogCellData.Add(f_Index, data);

        UpdateCellPos(f_Index);
        ILoadPrefabAsync.LoadAsync(data);
    }
    private void UnloadBoxCell(int f_Index)
    {
        if (!m_BogCellData.TryGetValue(f_Index, out var cellData))
        {
            return;
        }
        m_BogCellData.Remove(f_Index);
        ILoadPrefabAsync.UnLoad(cellData);
        IPoolClass.PushClass(cellData);
    }
    private void LoadBagCellContext(int f_Index)
    {
        if (!TryGetBagCellData(f_Index, out var cellData))
        {
            return;
        }
        cellData.CreateBagCellContext();
    }
    private void UnoadBagCellContext(int f_Index)
    {
        if (!TryGetBagCellData(f_Index, out var cellData))
        {
            return;
        }
        cellData.DestroyBagCellContext();
    }
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ˢ��Ԥ����
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public void LoadComplete_MainBag()
    {
        // ���ø��ӵĸ������Լ�λ��
        foreach (var item in m_BogCellData)
        {
            UpdateCellPos(item.Key);
        }
    }
    private void UpdateCellPos(int f_Index)
    {
        if (!TryGetBagCellData(f_Index, out var cellData))
        {
            return;
        }
        if (!m_MainBagData.IsLoadComplete)
        {
            return;
        }
        var parent = m_MainBagData.GetBagCellRoot();
        cellData.SetParent(parent);
        var pos = GUtil.GetBagCellPos(f_Index);
        cellData.SetLocalPosition(pos);
        cellData.SetLocalScale(Vector3.one);
    }

    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ��꽻������
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // ���õ�ǰ������ĸ���
    public void SetCurEnterBoxCell(int f_BoxCellIndex)
    {
        var lastEnterIndex = m_EnterCellIndex;
        m_EnterCellIndex = f_BoxCellIndex;
    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   ��ȡ����
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public bool TryGetBagCellData(int f_Index, out UIPre_BagCellData f_CellData)
    {
        return m_BogCellData.TryGetValue(f_Index, out f_CellData);
    }
}
