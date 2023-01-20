using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerInfo
{
    public string playerID;
    public float playerReactionTime;
    public int sequenceID;

    public PlayerInfo(string playerID, float playerReactionTime, int sequenceID)
    {
        this.playerID = playerID;
        this.playerReactionTime = playerReactionTime;
        this.sequenceID = sequenceID;
    }

}
