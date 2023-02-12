using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Sequence : MonoBehaviour
{
    public List<GameManager.Symbols> currentSequence = new();
    public List<SpriteRenderer> currentItemImage = new();
    public GameObject sequenceItemPrefab;
    public Transform sequenceTransform;
    
    public GameManager.Symbols currentSequenceItem;
    public bool inputMatchSequence;
    public int sequencePosition = 0;
    
    private int item = 0;

    private void Start()
    {
        CreateSequence(1);
    }

    private void Update()
    {
        if (SceneManager.GetSceneByName("GamePlay").isLoaded == true)
        {
            currentSequenceItem = currentSequence[item];
        }
    }

    private void CreateSequence(int lengthOfSequence)
    {
        for (int i = 0; i < lengthOfSequence; i++)
        {
            var randomDirection = Random.Range(0, 4);
            var newSymbol = Instantiate(sequenceItemPrefab, transform.position, Quaternion.identity);
            
            newSymbol.transform.SetParent(sequenceTransform, true);
            newSymbol.GetComponent<SpriteRenderer>().sprite = newSymbol.GetComponent<SequenceItem>().possibleActions[randomDirection];
            //newArrow.GetComponent<SequenceItem>().sequenceID = i; //Sets the sequenceitemID to current position
            
            currentItemImage.Add(newSymbol.GetComponent<SpriteRenderer>());

            switch (randomDirection)
            {
                case 0:
                    currentSequence.Add(GameManager.Symbols.TRIANGLE);
                    break;
                case 1:
                    currentSequence.Add(GameManager.Symbols.SQUARE);
                    break;
                case 2:
                    currentSequence.Add(GameManager.Symbols.PENTAGRAM);
                    break;
                case 3:
                    currentSequence.Add(GameManager.Symbols.LIGHTNING);
                    break;
            }

        }
    }
    
    public void CompareInputWithSequence(bool symbolsMatch)
    {
        Debug.Log("Sequence is: " + sequencePosition);
        sequencePosition++;
        Debug.Log("And now sequence is: " + sequencePosition);
        
        if (symbolsMatch)
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

    private void UpdateSequence()
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
        CreateSequence(1);
    }

    private void DestroySequence()
    {
        foreach (Transform child in sequenceTransform)
        {
            Destroy(child.gameObject);
        }
    }

}
