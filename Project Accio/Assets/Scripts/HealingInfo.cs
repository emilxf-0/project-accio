using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class HealingInfo
{
    public float hpToHeal;

    public HealingInfo(float hpToHeal)
    {
        this.hpToHeal = hpToHeal;
    }
}
