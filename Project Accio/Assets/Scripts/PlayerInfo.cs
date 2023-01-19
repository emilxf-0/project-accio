using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerInfo
{
    public string playerID;
    public float playerReactionTime;
    public bool correctInput;
    
    public PlayerInfo(string playerID, float playerReactionTime)
    {
        this.playerID = playerID;
        this.playerReactionTime = playerReactionTime;
    }

}
