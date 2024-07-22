#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using HybridCLR;
using System.IO;
using System;
using HybridCLR.Editor;

public class HybridCLRTools : EditorWindow
{
    [MenuItem("Tools/HybridCLR Tools")]
    public static void ShowWindow()
    {
        try
        {
            var window = EditorWindow.GetWindow<HybridCLRTools>();
            window.Show();
        }
        catch (System.Exception ex)
        {
            UnityEngine.Debug.LogError(ex);
        }
    }


    private static string m_AssetsParentPath = "";
    private static string m_AssetsDllPath = "";
    private static string m_DllHotUpdatePath = "";
    private static string m_HotAssemblyDllPath = "";
    private static string m_PatchDllPath = "";
    private static string m_DllBytesOutPutPath = "";
    private static string m_PatchDllBytesOutPutPath = "";
    private HashSet<string> m_HotDllList = null;
    private HashSet<string> m_PatchDlls = null;

    private void OnEnable()
    {
        m_AssetsParentPath = new DirectoryInfo(Application.dataPath).Parent.FullName;
        m_AssetsDllPath = $"{Application.dataPath}/Scripts/Dll";
        m_DllHotUpdatePath = $"{m_AssetsParentPath}/HybridCLRData/CustomHotDlls/{EditorUserBuildSettings.activeBuildTarget}";
        m_HotAssemblyDllPath = $"{m_AssetsParentPath}/HybridCLRData/HotUpdateDlls/{EditorUserBuildSettings.activeBuildTarget}";
        m_PatchDllPath = $"{m_AssetsParentPath}/HybridCLRData/StrippedAOTAssembly2/{EditorUserBuildSettings.activeBuildTarget}";



        m_DllBytesOutPutPath = $"{Application.dataPath}/Resources_moved/HotDlls";
        m_PatchDllBytesOutPutPath = $"{Application.dataPath}/Resources_moved/AOTGenericSharing";

        m_HotDllList = new();
        foreach (var item in SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
        {
            m_HotDllList.Add(item);
        }
        //m_HotDllList = ; new()
        //{
        //    "TestDll.dll",
        //    "HotUpdateAssembly.dll",
        //    "TestAssembly.dll",
        //    "PlaceHolderDll1.dll",
        //    "PlaceHolderDll2.dll",
        //};
        m_PatchDlls = new();
        foreach (var item in AOTGenericReferences.PatchedAOTAssemblyList)
        {
            m_PatchDlls.Add(item);
        }
    }
    private void OnGUI()
    {
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("External Dll: ", GUILayout.Width(100));
            m_AssetsDllPath = EditorGUILayout.TextField(m_AssetsDllPath);
        }
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("External Hot Dll: ", GUILayout.Width(100));
            m_DllHotUpdatePath = EditorGUILayout.TextField(m_DllHotUpdatePath);
        }
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("Assembly Dll: ", GUILayout.Width(100));
            m_HotAssemblyDllPath = EditorGUILayout.TextField(m_HotAssemblyDllPath);
        }
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("Patch Dll: ", GUILayout.Width(100));
            m_PatchDllPath = EditorGUILayout.TextField(m_PatchDllPath);
        }
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("OutPut Dll: ", GUILayout.Width(100));
            m_DllBytesOutPutPath = EditorGUILayout.TextField(m_DllBytesOutPutPath);
        }
        EditorGUILayout.EndHorizontal();
        EditorGUILayout.BeginHorizontal();
        {
            GUILayout.Label("OutPut Patch: ", GUILayout.Width(100));
            m_PatchDllBytesOutPutPath = EditorGUILayout.TextField(m_PatchDllBytesOutPutPath);
        }
        EditorGUILayout.EndHorizontal();
        if (GUILayout.Button("Dll2Bytes", GUILayout.Width(100), GUILayout.Height
            (30)))
        {
            ClearDirectory();
            ExternalDll2Bytes();
            HotAssemblyToBytes();
            SpritPatchDllToBytes();
            AssetDatabase.Refresh();
        }


    }

    private void ExternalDll2Bytes()
    {
        CopyDllToBytes(m_DllHotUpdatePath, m_DllBytesOutPutPath, (fileInfo) =>
        {
            return m_HotDllList.Contains(fileInfo.Name);
        });
    }
    private void HotAssemblyToBytes()
    {
        CopyDllToBytes(m_HotAssemblyDllPath, m_DllBytesOutPutPath, (fileInfo) =>
        {
            return m_HotDllList.Contains(fileInfo.Name);
        });
    }
    private void SpritPatchDllToBytes()
    {
        CopyDllToBytes(m_PatchDllPath, m_PatchDllBytesOutPutPath, (fildInfo) =>
        {
            return m_PatchDlls.Contains(fildInfo.Name);
        });
    }
    private void CopyDllToBytes(string f_SourcePath, string f_DestPath, Func<FileInfo, bool> f_Condition = null)
    {
        // 拷贝 热更程序集 Dll
        var fileInfos = new DirectoryInfo(f_SourcePath).GetFiles();
        foreach (var fileInfo in fileInfos)
        {
            if (fileInfo.Name.Contains(".meta")
                || !fileInfo.Name.Contains(".dll"))
            {
                continue;
            }
            if (f_Condition != null && !f_Condition.Invoke(fileInfo))
            {
                continue;
            }
            // 到目标资源目录
            var newName = f_DestPath + "/" + fileInfo.Name + ".bytes";
            fileInfo.CopyTo(newName, true);
            fileInfo.LastWriteTime = System.DateTime.Now;
        }
    }
    private void ClearDirectory()
    {
        Directory.Delete(m_DllBytesOutPutPath, true);
        Directory.Delete(m_PatchDllBytesOutPutPath, true);

        Directory.CreateDirectory(m_DllBytesOutPutPath);
        Directory.CreateDirectory(m_PatchDllBytesOutPutPath);
    }
}
#endif