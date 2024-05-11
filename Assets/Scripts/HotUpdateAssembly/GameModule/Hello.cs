using System.Collections;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using TestDll;

public class Hello
{
    public static void Run()
    {
        Hello2.Run();

        UIManager.TestFunc();

        // 进入游戏初始化
        var handle = Addressables.LoadAssetAsync<GameObject>("Assets/Resources_moved/Modules/Canvas.prefab");
        handle.Completed += (han) =>
        {
            var obj = han.Result;
            if (han.Status != AsyncOperationStatus.Succeeded)
            {
                Debug.Log($"load target == null => {obj}");
            }
            if (obj == null)
            {
                Debug.Log($"load target == null => {obj}");
                return;
            }
            var ins = GameObject.Instantiate(obj, null);
            ins.GetComponent<Canvas>().worldCamera = Camera.main;
            var com = ins.GetComponent<ConsoleToScreen>();
            foreach (var item in ins.GetComponents<MonoBehaviour>())
            {
                Debug.Log($"load obj com = {item}");
            }
            //var com2 = ins.GetComponent<TestDll.UIMonobehaviour>();
            //Debug.Log($"load com MonoBehaviour => com2 = {com2}");
            if (com == null)
            {
                Debug.Log($"load com == null => {com}");
                return;
            }
            //if (com2 == null)
            //{
            //    Debug.Log($"load com2 == null => {com}");
            //    return;
            //}
            com.Init();
            //com2.Init();

            com.TestRef();
        };
    }
}