using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;


public class LoadAssetsData<T>
    where T : UnityObjectPoolItemData
{
    public GameObject Asset = null;
    public HashSet<T> InsObjs = new();
    public LoadAsyncResult LoadResult = LoadAsyncResult.Start;
}
public class LoadAssetManager : Singleton<LoadAssetManager>
{
    
    private async UniTask<T> LoadAsync<T>(string f_Path)
        where T : UnityEngine.Object
    {
        var result = await Resources.LoadAsync<T>(f_Path) as T;
        return result;
    }
    private void UnLoad<T>(T f_AssetObj)
    where T : UnityEngine.Object
    {
        //Resources.UnloadAsset(f_AssetObj);
    }



    // 当前已经加载的资源列表
    private Dictionary<ELoadPrefabType, LoadAssetsData<UnityObjectPoolItemData>> m_DicAsset = new();
    public async UniTask<UnityObjectPoolItem> LoadPrefabAsync(UnityObjectPoolItemData f_ItemData)
    {
        var prefabKey = f_ItemData.PrefabType;
        if (!UnityObjectPoolItemConfig.Instance.TryGetPrefabPath(prefabKey, out var path))
        {
            return null;
        }
        GameObject target = null;
        if (m_DicAsset.TryGetValue(prefabKey, out var value))
        {
            if (value.LoadResult == LoadAsyncResult.Loading)
            {
                await UniTask.WaitUntil(() => value.LoadResult != LoadAsyncResult.Loading);
            }
            target = value.Asset;
        }
        else
        {
            value = new();
            value.LoadResult = LoadAsyncResult.Loading;
            m_DicAsset.Add(prefabKey, value);
            target = await LoadAsync<GameObject>(path);
            value.Asset = target;
            value.LoadResult = LoadAsyncResult.Succeed;
        }

        var obj = GameObject.Instantiate(target);
        GClass.UnityObjectPoolItem = obj.GetComponent<UnityObjectPoolItem>();

        value.InsObjs.Add(f_ItemData);
        return GClass.UnityObjectPoolItem;
    }

    public void UnLoadPrefab(UnityObjectPoolItemData f_Asset)
    {
        var prefabKey = f_Asset.PrefabType;
        if (!m_DicAsset.TryGetValue(prefabKey, out var value))
        {
            return;
        }

        value.InsObjs.Remove(f_Asset);
        GameObject.Destroy(f_Asset.PrefabTarget);
        if (value.InsObjs.Count == 0)
        {
            UnLoad<GameObject>(value.Asset);
            m_DicAsset.Remove(prefabKey);
        }
    }



}