using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class LoadData<T> : IPoolClass
{
    public int LoadKey = int.MinValue;
    public AsyncOperationHandle<T> AssetHandle;
    public int RefCount = 0;
    public ELoadStatus LoadResult = ELoadStatus.Start;

    public void Constructor()
    {

    }

    public void Release()
    {
        LoadKey = int.MinValue;
        RefCount = 0;
        LoadResult = ELoadStatus.Start;
    }
}
public class LoadListData<T> : LoadData<T>
{
    public AsyncOperationHandle<IList<T>> AssetListHandle;
}

public class LoadManager<T>
{
    //     ========= ------------- ========= ------------- ========= ----
    //-------------------------------------------------------------------
    //---- ========= -------  Catalog 预制体加载
    //-------------------------------------------------------------------
    //     ========= ------------- ========= ------------- ========= ----
    // 当前已经加载的资源列表
    private Dictionary<ELoadTarget, LoadData<T>> m_DicAsset = new();
    public async UniTask<T> LoadAsync(ELoadTarget f_LoadTarget)
    {
        AsyncOperationHandle<T> handle = default;
        if (m_DicAsset.TryGetValue(f_LoadTarget, out var value))
        {
            if (value.LoadResult == ELoadStatus.Loading)
            {
                var loadKey = value.LoadKey;
                await UniTask.WaitUntil(() => value.LoadResult != ELoadStatus.Loading);
                if (loadKey != value.LoadKey)
                {
                    return default;
                }
            }
            handle = value.AssetHandle;
        }
        else
        {
            var path = LoadTargetConfig.Instance.GetLoadPath(f_LoadTarget);
            var loadKey = GUtil.GetTempKey();
            value = IPoolClass.PopClass<LoadData<T>>();
            value.LoadKey = loadKey;
            value.LoadResult = ELoadStatus.Loading;
            m_DicAsset.Add(f_LoadTarget, value);
            handle = GUtil.LoadAsync<T>(path);
            value.AssetHandle = handle;
            await handle.ToUniTask();
            if (loadKey != value.LoadKey)
            {
                return default;
            }
            value.LoadResult = ELoadStatus.Succeed;
        }

        value.RefCount++;
        return handle.Result;
    }

    public void UnLoad(ELoadTarget f_LoadTarget)
    {
        if (!m_DicAsset.TryGetValue(f_LoadTarget, out var value))
        {
            return;
        }
        if (value.RefCount > 1)
        {
            value.RefCount--;
            return;
        }
        m_DicAsset.Remove(f_LoadTarget);
        GUtil.Unload(value.AssetHandle);
        IPoolClass.PushClass(value);
    }
}

public class LoadsManager<T>
{
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   标签加载
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    private Dictionary<EAddressableLable, LoadListData<T>> m_LabelLoadData = new();
    public async UniTask<IList<T>> LoadAssetsByLabel(EAddressableLable f_Label)
    {
        AsyncOperationHandle<IList<T>> handle;
        if (m_LabelLoadData.TryGetValue(f_Label, out var value))
        {
            if (value.LoadResult == ELoadStatus.Loading)
            {
                var loadKey = value.LoadKey;
                await UniTask.WaitUntil(() => value.LoadResult != ELoadStatus.Loading);
                if (loadKey != value.LoadKey)
                {
                    return null;
                }
            }
            handle = value.AssetListHandle;
        }
        else
        {
            var loadKey = GUtil.GetTempKey();
            value = IPoolClass.PopClass<LoadListData<T>>();
            value.LoadKey = loadKey;
            value.LoadResult = ELoadStatus.Loading;
            m_LabelLoadData.Add(f_Label, value);
            handle = GUtil.LoadsAsync<T>(f_Label.ToString());
            value.AssetListHandle = handle;
            await handle.ToUniTask();
            if (loadKey != value.LoadKey)
            {
                return null;
            }
            value.LoadResult = ELoadStatus.Succeed;
        }
        value.RefCount++;
        return handle.Result;
    }
    public void UnloadAssetsByLabel(EAddressableLable f_Label)
    {
        if (!m_LabelLoadData.TryGetValue(f_Label, out var value))
        {
            return;
        }
        if (value.RefCount > 1)
        {
            value.RefCount--;
            return;
        }
        m_LabelLoadData.Remove(f_Label);
        GUtil.Unload(value.AssetListHandle);
    }
}