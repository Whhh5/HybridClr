using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public static class GUtil
{
    private static int m_TempKey = int.MinValue;
    public static int GetTempKey()
    {
        return ++m_TempKey;
    }
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   打印
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public static void Log(string f_Message)
    {
        Debug.Log(f_Message);
    }
    public static void Error(string f_Message)
    {
        Debug.LogError(f_Message);
    }
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   加载
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public static AsyncOperationHandle<T> LoadAsync<T>(string f_Path)
    {
        var loadHandle = Addressables.LoadAssetAsync<T>(f_Path);
        return loadHandle;
    }
    public static void Unload(AsyncOperationHandle f_Handle)
    {
        Addressables.Release(f_Handle);
    }
    public static AsyncOperationHandle<IList<T>> LoadsAsync<T>(string f_Path)
    {
        var loadHandle = Addressables.LoadAssetsAsync<T>(f_Path, null);
        return loadHandle;
    }


    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   UI
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    // 根据位置获取 ugui 位置
    public static Vector2 GetUGUIPosByScreenPos(Vector2 f_SceenPos)
    {
        var press = f_SceenPos / new Vector2(Screen.width, Screen.height);
        var rectSize = GManager.UGUIManager.GetCanvasSize();
        var uiPos = press * rectSize;
        return uiPos;
    }
    public static Vector2 GetUGUIPosByMousePos()
    {
        return GetUGUIPosByScreenPos(Input.mousePosition);
    }

    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   背包格子
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public static int GetCellIndex(Vector2Int f_RowCol)
    {
        return GetMatrixIndex(GConfig.BagCellAllSize, f_RowCol.x, f_RowCol.y);
    }
    public static Vector2Int GetCellRowCol(int f_Index)
    {
        return GetMatrixRowCol(GConfig.BagCellAllSize, f_Index);
    }
    public static Vector2 GetBagCellPos(int f_Index)
    {
        var rowcol = GetCellRowCol(f_Index);
        var posX = (rowcol.y + 0.5f) * GConfig.BagCellUtilSize.x + GConfig.BagCellIntercal.x * rowcol.y;
        var posY = (rowcol.x + 0.5f) * GConfig.BagCellUtilSize.y + GConfig.BagCellIntercal.y * rowcol.x;
        var pos = new Vector2(posX, posY);
        pos.x -= (GConfig.BagCellUtilSize.y + GConfig.BagCellIntercal.y) * GConfig.BagCellAllSize.y * 0.5f;
        pos.y -= (GConfig.BagCellUtilSize.x + GConfig.BagCellIntercal.x) * GConfig.BagCellAllSize.x;
        return pos;
    }
    public static bool GetCellIsValid(int f_Index)
    {
        return f_Index > -1 && f_Index < GConfig.BagCellAllCount;
    }
    public static bool GetCellIsValid(Vector2Int f_RowCol)
    {
        return f_RowCol.x > -1
            && f_RowCol.x < GConfig.BagCellAllSize.x
            && f_RowCol.y > -1
            && f_RowCol.y < GConfig.BagCellAllSize.y;
    }
    //     ========= ----                             ---- ========= ----
    //----------------- Catalog ---------------------------------------
    //---- ========= -------------   矩阵坐标转化
    //-------------------------------------------------------------------
    //     ========= ----                             ---- ========= ----
    public static int GetMatrixIndex(Vector2Int f_Matrix, int f_Row, int f_Col)
    {
        var index = f_Row * f_Matrix.y + f_Col;
        return index;
    }
    public static Vector2Int GetMatrixRowCol(Vector2Int f_Matrix, int f_Index)
    {
        var row = f_Index / f_Matrix.y;
        var col = f_Index % f_Matrix.y;
        return new Vector2Int(row, col);
    }
    public static int TransfarCellIndex(Vector2Int f_Matrix, int f_Index)
    {
        var rowcol = GetMatrixRowCol(f_Matrix, f_Index);
        var transfer = TransferCellRowCol(f_Matrix, rowcol.x, rowcol.y);
        var result = GetMatrixIndex(f_Matrix, transfer.x, transfer.y);
        return result;
    }
    public static Vector2Int TransferCellRowCol(Vector2Int f_Matrix, int f_Row, int f_Col)
    {
        var row = f_Matrix.x - 1 - f_Col;
        return new(row, f_Row);
    }
    public static Vector2Int TransferDirection(Vector2Int f_Matrix, int f_Row, int f_Col, EDirection f_From, EDirection f_To)
    {
        var result = new Vector2Int(f_Row, f_Col);
        for (int i = (int)f_From; i < (int) f_To + 1; i++)
        {
            result = TransferCellRowCol(f_Matrix, result.x, result.y);
        }
        return result;
    }
    public static Vector2Int GetMatrixCentreIndex(Vector2Int f_Matrix)
    {
        var result = new Vector2Int((int)(f_Matrix.x * 0.5f), (int)(f_Matrix.y * 0.5f));
        return result;
    }
}
