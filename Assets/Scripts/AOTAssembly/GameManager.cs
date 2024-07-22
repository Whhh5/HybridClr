using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;

public enum EAddressableLable
{
    AOTGenericSharing,
    HotUpdateAssembly,
    LevelSetting,
    EquipConfig,
}
public class GameManager
{
    private static IReadOnlyList<string> m_PatchedAOTAssemblyList = new List<string>
            {
                //"System.Core.dll",
                //"System.dll",
                //"Unity.Addressables.dll",
                //"Unity.ResourceManager.dll",
                //"UnityEngine.CoreModule.dll",
                //"mscorlib.dll",
                //"Assets/Resources_moved/AOTGenericSharing/AotCustomAssemly.dll.bytes",
                "Assets/Resources_moved/AOTGenericSharing/mscorlib.dll.bytes",
                "Assets/Resources_moved/AOTGenericSharing/UnityEngine.AnimationModule.dll.bytes",
            };
    //[RuntimeInitializeOnLoadMethod]
    private static async void GameStart()
    {
        var curScene = SceneManager.GetActiveScene();
        var newScene = SceneManager.CreateScene("Game");
        SceneManager.UnloadSceneAsync(curScene.buildIndex);


        Debug.Log($" ------------------- GameStart ---------------------");

        // 等待加载资源
        await UpdateResourceAssync();
        // 等待热更程序集
#if UNITY_EDITOR || true
        await HotUpdateAssemblyAsync();
#endif
        // 补充元数据
        await AddGenericSharing();

        // 加载开始游戏
        var handle = Addressables.LoadAssetAsync<GameObject>("Assets/Resources_moved/Modules/CoreManager.prefab");
        await handle.Task;
        /*var target = */
        GameObject.Instantiate(handle.Result);
        Debug.Log($" ------------- Game Initialization End -------------");


    }
    private static async Task UpdateResourceAssync()
    {
        Debug.Log($" ------------------- 检查更新");
        var handle = Addressables.CheckForCatalogUpdates(true);
        var list = await handle.Task;
        // 获取已经更新的资源，并进行下载
        //var locators = Addressables.ResourceLocators;
        if (list != null && list.Count > 0)
        {
            var logStr = $"检查更新 count = {list.Count}";
            foreach (var item in list)
            {
                logStr += $"\n{item}";
            }
            Debug.Log(logStr);
            var catalogHandle = Addressables.UpdateCatalogs(list, false);
            await catalogHandle.Task;
            var result = catalogHandle.Result;
            foreach (var item in result)
            {
                foreach (var key in item.Keys)
                {
                    Debug.Log(key);
                }
            }
        }
        else
        {
            Debug.Log($"检查更新 没有可更新项");
        }
        Debug.Log($" ------------------- 更新完成");
    }
    private static async Task HotUpdateAssemblyAsync()
    {
        Debug.Log($" ------------------- 开始热更程序集 ");
#if !UNITY_EDITOR || true
        var assemblysHandle = Addressables.LoadAssetsAsync<TextAsset>(EAddressableLable.HotUpdateAssembly.ToString(), null);
        await assemblysHandle.Task;

        GameObject testObj = new("Monobehaviour");
        testObj.SetActive(false);
        foreach (var dll in assemblysHandle.Result)
        {
            Debug.Log($"load target dll = {dll.name}");

            Assembly startAssembly = Assembly.Load(dll.bytes);

            var types = startAssembly.GetTypes();
            for (int j = 0; j < types.Length; j++)
            {
                var type = types[j];
                if (!typeof(MonoBehaviour).IsAssignableFrom(type))
                {
                    continue;
                }
                if (type.IsAbstract)
                {
                    continue;
                }
                if (type.IsGenericType)
                {
                    continue;
                }
                try
                {
                    Debug.Log($"load type add test monobehaviour {j} com = {type}");
                    var com = testObj.AddComponent(type) as MonoBehaviour;
                }
                catch (Exception ex)
                {
                    Debug.LogError(ex);
                }
            }
        }
        GameObject.Destroy(testObj);
#else
        // Editor下无需加载，直接查找获得HotUpdate程序集
        Assembly[] hotUpdateAsss = System.AppDomain.CurrentDomain.GetAssemblies();
        Assembly hotUpdateAss = null;
        var testObj = new GameObject("Monobehaviour");
        foreach (var item in hotUpdateAsss)
        {
            if (item.GetName().Name == "HotUpdate")
            {
                hotUpdateAss = item;
                break;
            }
            Debug.Log(item.GetName().Name);
        }
        var types = hotUpdateAss.GetTypes();
        foreach (var item in types)
        {
            if (item.Name == "ConsoleToScreen")
            {
                testObj.AddComponent(item);
            }
        }
#endif
        Debug.Log($" ------------------- 热更程序集结束 ");
    }
    private static async Task AddGenericSharing()
    {
        Debug.Log(" --------------------- 开始补充元数据 ");

        var aotGenericSharingBundleHandle = Addressables.LoadAssetsAsync<TextAsset>(EAddressableLable.AOTGenericSharing.ToString(), null);
        var aotGenericSharing = await aotGenericSharingBundleHandle.Task;
        foreach (var dll in aotGenericSharing)
        {
            //var handle = Addressables.LoadAssetAsync<TextAsset>(dllPath);
            //await handle.Task;
            var loadMode = HomologousImageMode.SuperSet;
            var errorType = RuntimeApi.LoadMetadataForAOTAssembly(dll.bytes, loadMode);
            Debug.Log($"LoadMetadataForAOTAssembly path = {dll.name}, mode = {loadMode}, errorType = {errorType}");
        }
        Debug.Log(" --------------------- 补充元数据结束 ");
    }
}
