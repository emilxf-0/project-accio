using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
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

    public void CompareInputWithSequence(string buttonID)
    {
        if (buttonID == currentSequenceItem)
        {
            healthManager.Heal(GetHitPoints());
            Debug.Log(GetHitPoints());
            currentItemImage[item].color = Color.green;
        }
        else
        {
            healthManager.TakeDamage(GetHitPoints());
            currentItemImage[item].color = Color.red;
        }

        if (item != currentSequence.Count - 1)
        {
            item++;
        }
        else
        {
            item = 0;
            currentSequence.Clear();
            currentItemImage.Clear();
            sequence.DestroySequence();
            sequence.CreateSequence(4);
        }
    }

    public void CompareTimeStamps()
    {
        var player = GetHitPoints(); 
        var enemy = EnemyHitPoints();
        
        var hitPoints = Mathf.Abs(player - enemy);
        
        if (player > enemy)
        {
            healthManager.Heal(hitPoints);
        }
        else
        {
            healthManager.TakeDamage(hitPoints);
        }

    }

    public void ResetTimer()
    {
        timer.Reset();
    }

    public float GetHitPoints()
    {
        return timer.GetCurrentTime() / 10;
    }

    //TODO make this dynamic
    public float EnemyHitPoints()
    {
        var hitPoints = 0.1f;
        return hitPoints;
    }
    
    

}
