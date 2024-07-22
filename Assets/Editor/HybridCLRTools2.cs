using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System.Threading.Tasks;

public class HybridCLRTools2 : EditorWindow
{
    [MenuItem("HybridCLR/HybridCLR Tools")]
    public static void ShowWindow()
    {
        try
        {
            var window = EditorWindow.GetWindow<HybridCLRTools2>();
            window.Show();
        }
        catch (System.Exception ex)
        {
            UnityEngine.Debug.LogError(ex);
        }
    }

    private string m_TargetEditorPath = "";
    private string m_TargetPath = "";
    List<string> m_SelectAssets = new();
    private string m_DataPath = "";
    private void OnEnable()
    {
        m_DataPath = Application.dataPath;
        m_TargetPath = $"{m_DataPath}/Editor/AotuMove";
    }
    private void OnGUI()
    {
        var objList = Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets);
        string[] arrPath = new string[objList.Length];
        m_SelectAssets = new();
        for (int i = 0; i < objList.Length; i++)
        {
            var path = AssetDatabase.GetAssetPath(objList[i]);
            m_SelectAssets.Add(path);
            EditorGUILayout.TextField(path);
        }
        if (GUILayout.Button("Check Editor"))
        {
            CheckFloder(m_SelectAssets.ToArray());
        }
        if (GUILayout.Button("Update NameSpace"))
        {
            UpdateHotUpdateDllNameSpace();
        }
        if (GUILayout.Button("Check HotScripts"))
        {
            UpdateHotUpdateDllNameSpace();
            CheckHotScripts(m_SelectAssets.ToArray());
        }

        EditorGUILayout.BeginHorizontal();
        {
            EditorGUILayout.TextArea(m_MoveEditorLog, GUILayout.Width(150));
            EditorGUILayout.TextArea(keyStr, GUILayout.Width(150));
            EditorGUILayout.TextArea(logStr);
        }
        EditorGUILayout.EndHorizontal();
    }

    #region 自动移动 Editor
    private string m_MoveEditorLog = "";
    private List<Task> m_EditormoveTasks = new();
    private async void CheckFloder(string[] f_ArrFloder)
    {
        m_MoveEditorLog = "Move Editor -> ";
        m_EditormoveTasks = new();
        foreach (var floderPath in f_ArrFloder)
        {
            var dirInfo = new DirectoryInfo(floderPath);
            CheckEditorFloder(dirInfo);
        }
        await Task.WhenAll(m_EditormoveTasks.ToArray());
        Debug.Log(m_MoveEditorLog);
        AssetDatabase.Refresh();
    }
    private void CheckEditorFloder(DirectoryInfo f_DirectroyInfo)
    {
        var task = Task.Run(() =>
        {
            var childFloders = f_DirectroyInfo.GetDirectories();
            foreach (var childFloder in childFloders)
            {
                if (childFloder.Name == "Editor")
                {
                    CheckOneEditorFlider(childFloder);
                }
                else
                {
                    CheckEditorFloder(childFloder);
                }
            }
        });
        m_EditormoveTasks.Add(task);
    }
    private void CheckOneEditorFlider(DirectoryInfo f_DirectroyInfo)
    {
        var fullName = f_DirectroyInfo.FullName.Replace("\\", "/");
        var newName = fullName.Replace(m_DataPath + "/", "").Replace("/", "-").Replace("\\", "-");

        if (!Directory.Exists(m_TargetPath))
        {
            Directory.CreateDirectory(m_TargetPath);
        }
        var newPath = $"{m_TargetPath}/{newName}";
        if (Directory.Exists(newPath))
        {
            Directory.Delete(newPath);
        }
        Directory.Move(fullName, newPath);
        m_MoveEditorLog += $"\n\t fullName \n\t\t -> {newPath}";

        var metaPath = fullName + ".meta";
        if (File.Exists(metaPath))
        {
            File.Delete(metaPath);
        }
    }
    #endregion


    #region 自动检测命名空间
    private HashSet<string> namespaceList = new();
    private HashSet<string> nullNameSpaceClass = new();
    private string keyStr = "";
    private void UpdateHotUpdateDllNameSpace()
    {
        namespaceList = new();
        nullNameSpaceClass = new();
        keyStr = "check key ->";

        var assemblys = System.AppDomain.CurrentDomain.GetAssemblies();
        HashSet<string> dllNameList = new();
        foreach (var item in HybridCLR.Editor.SettingsUtil.HotUpdateAssemblyFilesExcludePreserved)
        {
            dllNameList.Add(item);
        }
        foreach (var item in assemblys)
        {
            var name = item.GetName().Name;
            if (!dllNameList.Contains(name + ".dll"))
            {
                continue;
            }
            var types = item.GetTypes();
            foreach (var type in types)
            {
                var nameSp = type.Namespace;
                if (string.IsNullOrEmpty(nameSp))
                {
                    nullNameSpaceClass.Add(type.Name);
                    var name2 = $"{type.Name}";
                    if (type.IsGenericType)
                    {
                        var index = name2.IndexOf("`", 0);
                        if (index == -1)
                        {
                            continue;
                        }
                        name2 = name2.Substring(0, index);
                    }
                    keyStr += $"\n\t {name2}";
                    continue;
                }
                if (namespaceList.Contains(nameSp))
                {
                    continue;
                }
                namespaceList.Add(nameSp);
                keyStr += $"\n\t {nameSp}";
            }

        }
    }
    private List<Task> tasks = new();
    private string logStr = null;
    private async void CheckHotScripts(string[] f_FloderPath)
    {
        tasks = new();
        logStr = "CheckHotScripts -> ";
        foreach (var item in f_FloderPath)
        {
            var dicInfo = new DirectoryInfo(item);
            CheckFloderScripts(dicInfo);
        }
        await Task.WhenAll(tasks.ToArray());
        tasks = null;
        Debug.LogWarning(logStr);
    }
    private void CheckFloderScripts(DirectoryInfo f_DirInfo)
    {
        var fils = f_DirInfo.GetFiles("*.cs", SearchOption.TopDirectoryOnly);
        foreach (var file in fils)
        {
            CheckFileCS(file);
        }
        var childDirs = f_DirInfo.GetDirectories("*", SearchOption.TopDirectoryOnly);
        foreach (var item in childDirs)
        {
            CheckFloderScripts(item);
        }
    }
    private void CheckFileCS(FileInfo f_FileInfo)
    {
        var task = Task.Run(() =>
        {
            var streamRender = f_FileInfo.OpenText();

            var readLine = "";
            var lineCount = 0;
            var localLog = $"\n\t fileName = {f_FileInfo.Name}, fullName = {f_FileInfo.FullName}";
            bool isLog = false;
            while ((readLine = streamRender.ReadLine()) != null)
            {
                lineCount++;
                // 判断命名空间
                foreach (var space in namespaceList)
                {
                    if (!readLine.Contains(space))
                        continue;
                    localLog += $"\n\t\t line: {lineCount}, using -> {space}";
                    isLog = true;
                }
                // 判断没有命名空间的类
                foreach (var cl in nullNameSpaceClass)
                {
                    if (!readLine.Contains(cl))
                        continue;
                    localLog += $"\n\t\t line: {lineCount}, class -> {cl}";
                    isLog = true;
                }

            }
            logStr += isLog ? localLog : "";

            streamRender.Close();
        });
        tasks.Add(task);
    }

    #endregion
}
