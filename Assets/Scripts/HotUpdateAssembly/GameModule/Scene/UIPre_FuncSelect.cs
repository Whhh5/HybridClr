using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public interface IFuncItemInfo
{
    public string Name { get; }
    public void OnClick();
}
public class UIPre_FuncSelectData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_LevelSelect;

    public HashSet<IFuncItemInfo> FuncList = new();

    public override void InitData()
    {
        base.InitData();


    }
    public void Register(IFuncItemInfo f_FuncItem)
    {
        FuncList.Add(f_FuncItem);
    }
    public void OnClick(IFuncItemInfo f_FuncItem)
    {
        f_FuncItem.OnClick();
    }
}






















public class UIPre_FuncSelect : UnityObjectPoolItemUI
{
    private UIPre_FuncSelectData m_EntityData = null;
    public override void SetUnityObjectData(UnityObjectPoolItemData f_ObjectData)
    {
        base.SetUnityObjectData(f_ObjectData);
        m_EntityData = f_ObjectData as UIPre_FuncSelectData;
    }
    [SerializeField]
    private Button m_LevelBtn = null;
    private HashSet<Button> m_BtnList = new();
    public override void OnUnLoad()
    {
        base.OnUnLoad();
        foreach (var item in m_BtnList)
        {
            GameObject.Destroy(item.gameObject);
        }
        m_BtnList.Clear();
    }
    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        m_LevelBtn.gameObject.SetActive(false);
        foreach (var item in m_EntityData.FuncList)
        {
            var value = item;
            var btn = GameObject.Instantiate(m_LevelBtn, m_LevelBtn.transform.parent);
            btn.onClick.AddListener(() => m_EntityData.OnClick(value));
            btn.transform.Find("Name").GetComponent<TextMeshProUGUI>().text = value.Name;
            m_BtnList.Add(btn);
            btn.gameObject.SetActive(true);
        }
    }
}
