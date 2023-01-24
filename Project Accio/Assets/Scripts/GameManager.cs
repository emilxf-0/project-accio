using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Burst.CompilerServices;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public static GameManager Instance
    {
        get
        {
            if (instance == null)
            {
                Debug.Log("Game manager doesn't exist");
            }
            
            return instance;
        }
    }

    public string playerID = "187";
    public bool gameHasStarted = false;
    

    private float lastEnemyTimestamp;
    private int lastEnemyPosition;
    public float latestPlayerTimestamp;
    
    public GameObject gameOver;
    public TMP_Text gameOverText;
    public HealthManager healthManager;
    public Sequence sequence;
    public Timer timer;
    
    
    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
        }
    }
    
    private void OnEnable()
    {
        HealthManager.PlayerDeath += PlayerDeath;
    }

    private void OnDisable()
    {
        HealthManager.PlayerDeath -= PlayerDeath;
    }

    private void Start()
    {
        DatabaseAPI.Instance.SetPlayerID();
        
        if (SceneManager.GetSceneByName("GamePlay").isLoaded)
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
        
        DatabaseAPI.Instance.isListening = true;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
    }
    
    public void SinglePlayerGame()
    {
        CompareTimestampWithComputer(ComputerEnemyTimeStamp(), GetPlayerTimeStamp());
        Invoke(nameof(SinglePlayerGame), 0.5f);
    }
    
    private void InstantiateEnemyAction(PlayerInfo playerInfo)
    {
        var enemyPlayerID = $"{playerInfo.playerID}";
        var enemyReactionTime = float.Parse($"{playerInfo.playerReactionTime}");
        var enemySequencePosition = int.Parse($"{playerInfo.sequencePosition}");

        if (enemyPlayerID == playerID || enemyPlayerID == "0")
        {
            CheckIfPlayerShouldHaveMomentum();
            return;
        }

        gameHasStarted = true;

        CompareTimeStampsAndPosition(enemyReactionTime, GetPlayerTimeStamp(), enemySequencePosition);
        lastEnemyTimestamp = enemyReactionTime;

        lastEnemyPosition = enemySequencePosition;
    }

    public void CompareTimestampWithComputer(float enemyTimeStamp, float playerTimeStamp)
    {
        healthManager.enemyMomentum = enemyTimeStamp < playerTimeStamp;
    }

    public void CompareTimeStampsAndPosition(float enemyTimeStamp, float playerTimeStamp, int enemyPosition)
    {

        var playerSequencePosition = sequence.sequencePosition;
        
        Debug.Log("Player stats are: " + playerTimeStamp + " and " + playerSequencePosition);
        Debug.Log("Enemy stats are: " + enemyTimeStamp + " and " + enemyPosition);
        Debug.Log("Enemy momentum is: " + healthManager.enemyMomentum);
        
        if (sequence.inputMatchSequence == false)
        {
            //TODO increase damage multiplier
        }

        if (playerSequencePosition < enemyPosition)
        {
            healthManager.enemyMomentum = true;
        }
        else if (latestPlayerTimestamp > enemyTimeStamp)
        {
            healthManager.enemyMomentum = true;
        }
        else
        {
            Debug.Log("Now I'm healing!");
            healthManager.enemyMomentum = false;
        }
        
        Debug.Log("And now Enemy momentum is: " + healthManager.enemyMomentum);
    }

    public void CheckIfPlayerShouldHaveMomentum()
    {
        if (lastEnemyPosition < sequence.sequencePosition)
        {
            healthManager.enemyMomentum = false;
        }
    }

    public void PlayerDeath()
    {
        if (healthManager.midPoint.transform.position == healthManager.playerPosition.transform.position)
        {
            gameOverText.text = "Avada Kedavra, bitch!";
        }
        else
        {
            gameOverText.text = "Congratulations, you killed someone!";
        }
        gameOver.SetActive(true);
    }

    public void ResetGame()
    {
        healthManager.StartPosition();
        gameOver.SetActive(false);
        sequence.NewSequence();
    }

    public void ResetTimer()
    {
        timer.Reset();
    }

    public float GetPlayerTimeStamp()
    {
        return timer.GetCurrentTime();
    }

    //This is for SinglePlayer mode
    public float ComputerEnemyTimeStamp()
    {
        var computerTimeStamp = latestPlayerTimestamp + (Random.Range(0.02f, 0.4f));
        return computerTimeStamp;
    }

}
