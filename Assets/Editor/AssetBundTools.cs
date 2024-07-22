#if UNITY_EDITOR
using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using UnityEditor;
using UnityEditor.U2D;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.U2D;
using Debug = UnityEngine.Debug;


public class AssetBundTools : EditorWindow
{
    [MenuItem("Tools/Build Bundle")]
    public static void ShowWindow()
    {
        try
        {
            var window = EditorWindow.GetWindow<AssetBundTools>();
            window.Show();
        }
        catch (System.Exception ex)
        {
            UnityEngine.Debug.LogError(ex);
        }
    }


    private static string m_BundleName = "";
    private static string m_TargetPath = "";
    private static string m_OutPutPath = "";
    private static string m_AssetsParentPath = "";
    private BuildAssetBundleOptions buildOptions = BuildAssetBundleOptions.None;

    private void OnEnable()
    {
        m_AssetsParentPath = Directory.GetParent(Application.dataPath).FullName;
        m_OutPutPath = $"{m_AssetsParentPath}/BuildBundle/{EditorUserBuildSettings.activeBuildTarget}";
        UpdateTargetPath();
    }

    private void OnGUI()
    {
        EditorGUILayout.BeginHorizontal();
        {
            EditorGUILayout.LabelField("OutPut Path：", GUILayout.Width(100));
            m_OutPutPath = EditorGUILayout.TextField(m_OutPutPath);
        }
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        {
            if (GUILayout.Button("Target Path：", GUILayout.Width(100)))
            {
                UpdateTargetPath();
            }
            //EditorGUILayout.LabelField("Target Path：", GUILayout.Width(100));
            m_TargetPath = EditorGUILayout.TextField(m_TargetPath);

        }
        EditorGUILayout.EndHorizontal();


        EditorGUILayout.BeginHorizontal();
        {
            EditorGUILayout.LabelField("Bundle Name：", GUILayout.Width(100));
            m_BundleName = EditorGUILayout.TextField(m_BundleName);
        }
        EditorGUILayout.EndHorizontal();

        buildOptions = (BuildAssetBundleOptions)EditorGUILayout.EnumFlagsField((Enum)buildOptions, GUILayout.Width(100));

        if (GUILayout.Button("Build", GUILayout.Height(30), GUILayout.Width(100)))
        {
            Build();
        }
        if (GUILayout.Button("Test MD5", GUILayout.Height(30), GUILayout.Width(100)))
        {
            TestMD5();
        }
        if (GUILayout.Button("Test Atlases", GUILayout.Height(30), GUILayout.Width(100)))
        {
            TestAtlas(m_TargetPath, m_TargetPath);
        }
    }
    private void UpdateTargetPath()
    {
        var selectObj = Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets);
        m_TargetPath = selectObj != null && selectObj.Length > 0 ? AssetDatabase.GetAssetPath(selectObj[0]) : "";
    }
    private void Build()
    {
        var lastTime = System.DateTime.Now;
        {
            // 文件检查
            if (!Directory.Exists(m_OutPutPath))
            {
                Directory.CreateDirectory(m_OutPutPath);
            }
            var targetPath = m_OutPutPath + "/" + m_BundleName;
            if (File.Exists(targetPath))
            {
                File.Delete(targetPath);
            }
        }
        var files = Directory.GetFiles(m_AssetsParentPath + "/" + m_TargetPath);
        List<string> assetnames = new();



        var target = EditorUserBuildSettings.activeBuildTarget;
        List<AssetBundleBuild> assets = new();
        AssetBundleBuild bundles = new();
        List<string> targets = new();
        for (var i = 0; i < files.Length; i++)
        {
            var path = files[i];
            //bundles.assetNames = assetnames.ToArray();
            //bundles.assetBundleNa me = m_BundleName;
            var fileInfo = new FileInfo(path);
            if (path.Contains(".meta"))
            {
                continue;
            }
            //"F:\\MyProject\\HyBridCLR\\HybridCLR1\\Assets\\"
            //"F:\\MyProject\\HyBridCLR\\HybridCLR1"
            var targetPath = fileInfo.FullName.Replace(m_AssetsParentPath + @"\", "");
            //assetnames.Add(targetPath);
            targets.Add(targetPath);

        }
        bundles.assetNames = targets.ToArray();
        bundles.assetBundleName = $"{System.DateTime.Now.Ticks}-{m_BundleName}";
        assets.Add(bundles);
        var assMain = BuildPipeline.BuildAssetBundles(m_OutPutPath, assets.ToArray(), buildOptions, target);

        Debug.Log($"用时：start = {lastTime}，end = {DateTime.Now}，use = {DateTime.Now - lastTime}, count = {assMain.GetAllAssetBundles().Length}");

        Process.Start(m_OutPutPath);
        AssetDatabase.Refresh();
    }


    private async void TestMD5()
    {
        var directoryInfo = new DirectoryInfo(m_TargetPath);
        var files = directoryInfo.GetFiles("*", SearchOption.AllDirectories);
        var logStr = "md5 log -> ";
        List<Task> tasks = new();
        foreach (var file in files)
        {
            if (file.Extension == ".meta")
            {
                continue;
            }
            var fullName = file.FullName;
            var name = file.Name;
            tasks.Add(Task.Run(() =>
            {
                var value = GetMD5(fullName);
                logStr += $"\n\t {name} -> {value}";
            }));
        }
        await Task.WhenAll(tasks.ToArray());
        Debug.Log(logStr);
    }
    public string GetMD5(string fileName)
    {
        try
        {
            if (string.IsNullOrEmpty(fileName)) return null;

            FileStream file = new FileStream(fileName, FileMode.Open);
            MD5 md5 = new MD5CryptoServiceProvider();
            byte[] retVal = md5.ComputeHash(file);
            file.Close();

            StringBuilder sb = new StringBuilder();
            var logStr = $"hash -> {file.Name}";
            for (int i = 0; i < retVal.Length; i++)
            {
                logStr += $"\n\t {retVal[i]}";
                sb.Append(retVal[i].ToString("x2"));
            }
            Debug.Log(logStr);
            return sb.ToString();
        }
        catch (System.Exception ex)
        {
            Debug.LogError("获取MD5失败：" + ex.ToString());
            return null;
            // System.Exception("GetMD5HashFromFile() fail, error:" + ex.Message);
        }

    }


    private void TestAtlas(string f_SpritePath, string f_AtlasPath)
    {
        var directoryInfo = new DirectoryInfo(f_AtlasPath);
        var assetPath = f_AtlasPath + $"/{directoryInfo.Name}-{DateTime.Now.Ticks}.spriteatlas";
        //var assetPath = f_AtlasPath + $"/{directoryInfo.Name}.spriteatlas";
        if (File.Exists(assetPath))
        {
            AssetDatabase.DeleteAsset(assetPath);
        }
        //AssetDatabase.Refresh();
        SpriteAtlasPackingSettings packingSetting = new SpriteAtlasPackingSettings()
        {
            enableRotation = false,
            enableTightPacking = false,
            padding = 4,
        };

        var spriteGuids = AssetDatabase.FindAssets("t:sprite", new string[] { f_SpritePath });
        var spriteList = new List<Sprite>();
        var spriteAtlas = new SpriteAtlas();
        foreach (var spriteGuid in spriteGuids)
        {
            var spritePath = AssetDatabase.GUIDToAssetPath(spriteGuid);
            var sprite = AssetDatabase.LoadAssetAtPath<Sprite>(spritePath);
            spriteList.Add(sprite);
        }

        spriteAtlas.Add(spriteList.ToArray());
        spriteAtlas.SetPackingSettings(packingSetting);



        //EditorUtility.SetDirty(spriteAtlas);

        //SpriteAtlasUtility.PackAllAtlases(EditorUserBuildSettings.activeBuildTarget);
        SpriteAtlasUtility.PackAtlases(new SpriteAtlas[] { spriteAtlas }, EditorUserBuildSettings.activeBuildTarget, true);
        AssetDatabase.CreateAsset(spriteAtlas, assetPath);
        AssetDatabase.ImportAsset(assetPath);


        var sprite2 = spriteAtlas.GetSprite("AdventureTeam_img_putong");

        var md5Value = GetMD5(assetPath); 
        Debug.Log($"{md5Value}");
        //"0b5bd1e0973773eb15775cb67a8787d3"
        //    "3415d34823af76a457c74267f06d651f"
        //    "9b5645c05f3ffa43e342371cf72bb89c"
        //    "6d795a1b0d7acecb4988e6a2019b4799"

    }
}
#endif
