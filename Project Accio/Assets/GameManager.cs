using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

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
    public Timer timer;
    
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
    }

    private void Update()
    {
        currentSequenceItem = currentSequence[item];
    }

    public void CompareInputWithSequence(string buttonID)
    {
        if (buttonID == currentSequenceItem)
        {
            Debug.Log("Dasright!");
            currentItemImage[item].color = Color.green;
            item++;
        }
        else
        {
            Debug.Log("Stupid idiot!");
            healthManager.TakeDamage(float.Parse(timer.GetCurrentTime()) / 100);
            currentItemImage[item].color = Color.red;
            item++;
        }
    }
    


}
