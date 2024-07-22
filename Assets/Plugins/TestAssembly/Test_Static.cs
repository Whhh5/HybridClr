using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using DG;
using UI.UILobbyModule;

public class Test_Static
{
    //UIMonobehaviour m_Mono = null;
    //TestPlugins.TestPlugins_2 m_TestPlugins2 = null;
    // Start is called before the first frame update
    UILobby tween = null;
    void Start()
    {
        DOTween.To(() => 0.0f, value => { }, 1.0f, 1.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
