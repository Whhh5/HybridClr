using System.Collections;
using System.Collections.Generic;
//using TestDll;
//#if UNITY_EDITOR
using TestPlugins;
//#endif
using UnityEditor;
using UnityEngine;

using DG.Tweening;

# if UNITY_EDITOR
public class TestEditor123 : Editor
{

}
#endif

public class TestAOT : MonoBehaviour
{
    //#if UNITY_EDITOR
    //private TestPlugins_Mono m_Test1 = null;
    //#endif
    //public UIMonobehaviour m_UIMono = null;
    //public Map m_Map = null;
    // Start is called before the first frame update
    //Test_Static m_Test = null;
    //LoadDll m_LoadTest = null;
    void Start()
    {
        DOTween.To(() => 0.0f, value => { }, 1.0f, 1.0f);
        //Hello.Run();
        //TestDll.
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
