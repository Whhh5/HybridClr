using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
//using DG.Tweening;

//namespace TestPlugins
//{
namespace MapCore
{
    public partial class Map : MonoBehaviour
    {
        [SerializeField]
        private TextMeshProUGUI m_TestTxt = null;
        [SerializeField]
        private TextMeshProUGUI m_TestTxt2 = null;
        // Start is called before the first frame update
        // public UIMonobehaviour<MonoBehaviour> m_Testmone = null;
        void Start()
        {
            //m_TestTxt.text = $"Test Map Value";
            //m_TestTxt2.text = $"Test Map Value 2";

            DOTween.To(() => 0, value => { }, 1, 1);
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void TestMap()
        {
            
        }
    }
}
//}