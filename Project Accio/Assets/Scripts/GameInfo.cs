using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class GameInfo
{
    public string gameSessionID;
    public bool waitingForPlayers;

    public GameInfo(string gameSessionID, bool waitingForPlayers)
    {
        this.gameSessionID = gameSessionID;
        this.waitingForPlayers = waitingForPlayers;
    }
}
