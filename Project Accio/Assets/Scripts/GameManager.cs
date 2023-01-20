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

    public List<string> currentSequence = new();
    public List<Image> currentItemImage = new();
    
    private string currentSequenceItem;
    private int item = 0;
    private bool inputMatchSequence;

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

    private void Start()
    {
        DatabaseAPI.Instance.SetPlayerID();
        DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        DatabaseAPI.Instance.isListening = true;
    }

    

    private void Update()
    {
        //TODO add this to a sequence handler
        if (SceneManager.GetSceneByName("GamePlay").isLoaded == true)
        {
            currentSequenceItem = currentSequence[item];
        }
        if (Input.GetKeyDown(KeyCode.B))
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
    }
    
    private void InstantiateEnemyAction(PlayerInfo playerInfo)
    {
        var playerID = $"{playerInfo.playerID}";
        var enemyReactionTime = float.Parse($"{playerInfo.playerReactionTime}");
        //var correctInput = Convert.ToBoolean($"{playerInfo.correctInput}");

        if (this.playerID == playerID)
        {
            return;
        }
        
        CompareTimeStamps(enemyReactionTime);
        
    }

    private void OnEnable()
    {
        HealthManager.PlayerDeath += PlayerDeath;
    }

    private void OnDisable()
    {
        HealthManager.PlayerDeath -= PlayerDeath;
    }

    public void CompareInputWithSequence(string buttonID)
    {
        
        if (buttonID == currentSequenceItem)
        {
            inputMatchSequence = true;
            currentItemImage[item].color = Color.green;
        }
        else
        {
            inputMatchSequence = false;
            currentItemImage[item].color = Color.red;
        }
        
        Invoke(nameof(UpdateSequence), 0.2f);
    }

    public void UpdateSequence()
    {
        if (item != currentSequence.Count - 1)
        {
            item++;
        }
        else
        {
            item = 0;
            NewSequence();
        }
    }

    public void CompareTimeStamps(float enemyTimeStamp)
    {
        var player = GetHitPoints();
        var enemy = enemyTimeStamp;

        var hitPoints = Mathf.Abs(player - enemy);
        
        if (player > enemy || inputMatchSequence == false)
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
        NewSequence();
    }

    public void ResetTimer()
    {
        timer.Reset();
    }

    public float GetHitPoints()
    {
        return timer.GetCurrentTime();
    }

    //TODO make this dynamic
    public float EnemyHitPoints()
    {
        var hitPoints = 0.1f;
        return hitPoints;
    }

    public void NewSequence()
    {
        currentSequence.Clear();
        currentItemImage.Clear();
        sequence.DestroySequence();
        sequence.CreateSequence(4);
    }
    
}
