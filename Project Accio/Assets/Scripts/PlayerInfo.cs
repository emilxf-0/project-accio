using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerInfo
{
    public string playerID;
    public float playerReactionTime;
    public int sequencePosition;
    public string gameSessionID;

    public PlayerInfo(string playerID, float playerReactionTime, int sequencePosition, string gameSessionID)
    {
        this.playerID = playerID;
        this.playerReactionTime = playerReactionTime;
        this.sequencePosition = sequencePosition;
        this.gameSessionID = gameSessionID;
    }

}
