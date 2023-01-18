using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerInfo
{
    public string playerName;
    public float playerReactionTime;
    public bool correctInput;
    
    public PlayerInfo(string playerName, float playerReactionTime)
    {
        this.playerName = playerName;
        this.playerReactionTime = playerReactionTime;
    }

}
