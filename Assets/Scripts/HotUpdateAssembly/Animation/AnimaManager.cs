using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game.Animation
{
    public class AnimaManager : Singleton<AnimaManager>
    {
        public override EManagerFuncType ManagerFuncType =>
            EManagerFuncType.Awake
            | EManagerFuncType.Start
            | EManagerFuncType.Update;
        public override async UniTask AwakeAsync()
        {
            await base.AwakeAsync();


        }
        public override async UniTask StartAsync()
        {
            await base.StartAsync();

            //var layerMixer = AnimationLayerMixerPlayable.Create();
        }

        public override void Update()
        {
            base.Update();


        }
    }
}
