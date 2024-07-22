using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game.Input
{
    public interface IInputExecute
    {
        public KeyCode KeyCode { get; }
        public void ExecuteDown();
        public void ExecuteUp();
        public void ExecuteUpdate();
    }
    public class InputManager : MonoSingleton<InputManager>
    {
        public Dictionary<KeyCode, IInputExecute> m_InputMap = new();
        // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {
            foreach (var item in m_InputMap)
            {
                if (UnityEngine.Input.GetKeyDown(item.Key))
                {
                    item.Value.ExecuteDown();
                }
                if (UnityEngine.Input.GetKey(item.Key))
                {
                    item.Value.ExecuteUpdate();
                }
                if (UnityEngine.Input.GetKeyUp(item.Key))
                {
                    item.Value.ExecuteUp();
                }
            }
        }

        private void AddInputExecute<T>()
            where T : IInputExecute, new()
        {
            var item = new T();
            m_InputMap.Add(item.KeyCode, item);
        }
    }
}
