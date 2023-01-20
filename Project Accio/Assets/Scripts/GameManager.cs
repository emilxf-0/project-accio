using System;
using System.Collections;
using System.Collections.Generic;
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
    
    public GameObject gameOver;
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
        DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        DatabaseAPI.Instance.isListening = true;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
    }
    
    private void InstantiateEnemyAction(PlayerInfo playerInfo)
    {
        var enemyPlayerID = $"{playerInfo.playerID}";
        var enemyReactionTime = float.Parse($"{playerInfo.playerReactionTime}");
        var enemySequencePosition = Int32.Parse($"{playerInfo.sequenceID}");

        if (enemyPlayerID == playerID || enemyPlayerID == "0")
        {
            return;
        }
        
        //Checks to see if the Player is behind the enemy player 
        if (enemySequencePosition > sequence.sequencePosition)
        {
            StartCoroutine(AssignDamage(enemyReactionTime, enemySequencePosition));
        }
        else
        {
            CompareTimeStamps(enemyReactionTime, GetPlayerTimeStamp());
        }
    }
    
    IEnumerator AssignDamage(float enemyReactionTime, int enemySequencePosition)
    {
        yield return new WaitUntil(() => sequence.sequencePosition == enemySequencePosition);
        CompareTimeStamps(enemyReactionTime, GetPlayerTimeStamp());
    }
    
    public void CompareTimeStamps(float enemyTimeStamp, float playerTimeStamp)
    {
        var hitPoints = Mathf.Abs(playerTimeStamp - enemyTimeStamp);
        
        if (playerTimeStamp > enemyTimeStamp || sequence.inputMatchSequence == false)
        {
            healthManager.TakeDamage(0.1f);
        }
        else
        {
            healthManager.Heal(0.05f);
        }
    }

    public void PlayerDeath()
    {
        gameOver.SetActive(true);
    }

    public void ResetGame()
    {
        healthManager.currentHealth = healthManager.maxHealth;
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
    public float EnemyHitPoints()
    {
        var hitPoints = 0.1f;
        return hitPoints;
    }

}
