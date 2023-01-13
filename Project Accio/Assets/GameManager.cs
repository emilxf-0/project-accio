using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

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
    private string currentSequenceItem;
    private int item = 0;
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        currentSequence.Add("left");
        currentSequence.Add("right");
        currentSequence.Add("down");
        currentSequence.Add("up");
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
            item++;
        }
        else
        {
            Debug.Log("Stupid idiot!");
            item++;
        }
    }


}
