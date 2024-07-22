using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIPre_LevelSelectData : UnityObjectPoolItemUIData
{
    public override ELoadTarget PrefabType => ELoadTarget.UIPre_LevelSelect;
}
public class UIPre_LevelSelect : UnityObjectPoolItemUI
{
    [SerializeField]
    private Button m_LevelBtn = null;
    private Dictionary<ELevel, Button> m_BtnList = new();
    public override void OnUnLoad()
    {
        base.OnUnLoad();
        foreach (var item in m_BtnList)
        {
            GameObject.Destroy(item.Value.gameObject);
        }
        m_BtnList.Clear();
    }
    public override void OnLoadAsync()
    {
        base.OnLoadAsync();
        m_LevelBtn.gameObject.SetActive(false);
        for (int i = (int)ELevel.None + 1; i < (int)ELevel.EnumCount; i++)
        {
            var level = (ELevel)i;
            var btn = GameObject.Instantiate(m_LevelBtn, m_LevelBtn.transform.parent);
            btn.onClick.AddListener(() => OnClient_Level2(level));
            btn.transform.Find("Name").GetComponent<TextMeshProUGUI>().text = level.ToString();
            m_BtnList.Add(level, btn);
            btn.gameObject.SetActive(true);
        }
    }
    private void OnClient_Level(ELevel f_Level)
    {
        Debug.Log($" ---- OnClient_Level, {f_Level}");
        if (LevelManager.Instance.TryGetCurLevel(out var level))
        {
            LevelManager.Instance.ExitLevel();
        }
        LevelManager.Instance.EnterLevel(f_Level);
    }
    private void OnClient_Level2(ELevel f_Level)
    {
        Debug.Log($" ---- OnClient_Level, {f_Level}");

    }
}
