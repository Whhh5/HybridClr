using HybridCLR.Editor;
using HybridCLR.Editor.AOT;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class CustomMenu
{
    [MenuItem("HybridCLR/Generate/StripAOTAssembly")]
    public static void StripAOTAssembly()
    {
        BuildTarget target = EditorUserBuildSettings.activeBuildTarget;
        string srcDir = SettingsUtil.GetAssembliesPostIl2CppStripDir(target);
        string dstDir = $"{SettingsUtil.HybridCLRDataDir}/StrippedAOTAssembly2/{target}";
        var getFiles = Directory.GetFiles(srcDir, "*.dll");
        foreach (var src in getFiles)
        {
            string dllName = Path.GetFileName(src);
            string dstFile = $"{dstDir}/{dllName}";
            AOTAssemblyMetadataStripper.Strip(src, dstFile);
        }
    }
}
