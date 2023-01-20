using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Sequence : MonoBehaviour
{
    public List<string> currentSequence = new();
    public List<Image> currentItemImage = new();
    public GameObject sequenceItemPrefab;
    public Transform sequenceTransform;
    
    private string currentSequenceItem;
    public bool inputMatchSequence;
    private int item = 0;

    private void Start()
    {
        CreateSequence(4);
    }

    private void Update()
    {
        if (SceneManager.GetSceneByName("GamePlay").isLoaded == true)
        {
            currentSequenceItem = currentSequence[item];
        }
    }

    public void CreateSequence(int lengthOfSequence)
    {
        for (int i = 0; i < lengthOfSequence; i++)
        {
            var randomDirection = Random.Range(0, 3);
            var newArrow = Instantiate(sequenceItemPrefab, transform.position, Quaternion.identity);
            
            newArrow.transform.SetParent(sequenceTransform, false);
            newArrow.GetComponent<Image>().sprite = newArrow.GetComponent<SequenceItem>().possibleActions[randomDirection];
            
            currentItemImage.Add(newArrow.GetComponent<Image>());

            switch (randomDirection)
            {
                case 0:
                    currentSequence.Add("right");
                    break;
                case 1:
                    currentSequence.Add("left");
                    break;
                case 2:
                    currentSequence.Add("up");
                    break;
                case 3:
                    currentSequence.Add("down");
                    break;
            }

        }
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
        
        UpdateSequence();
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
            Invoke(nameof(NewSequence), 0.2f);
        }
    }
    
    public void NewSequence()
    {
        currentSequence.Clear();
        currentItemImage.Clear();
        DestroySequence();
        CreateSequence(4);
    }

    public void DestroySequence()
    {
        foreach (Transform child in sequenceTransform)
        {
            Destroy(child.gameObject);
        }
    }
    
    
    
}
