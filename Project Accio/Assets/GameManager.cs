using System;
using System.Collections;
using System.Collections.Generic;
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
        instance = this;
    }

    private void Update()
    {
        currentSequenceItem = currentSequence[item];
    }

    private void OnEnable()
    {
        HealthManager.playerDeath += PlayerDeath;
    }

    private void OnDisable()
    {
        HealthManager.playerDeath -= PlayerDeath;
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

    public void CompareTimeStamps()
    {
        var player = GetHitPoints(); 
        var enemy = EnemyHitPoints();
        
        var hitPoints = Mathf.Abs(player - enemy);
        
        if (player > enemy || inputMatchSequence == false)
        {
            healthManager.TakeDamage(hitPoints);
        }
        else
        {
            healthManager.Heal(hitPoints);
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
        return timer.GetCurrentTime() / 8;
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