using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Sequence : MonoBehaviour
{
    public GameObject sequenceItemPrefab;
    public Transform sequenceTransform;

    private void Start()
    {
        CreateSequence(4);
    }

    // Update is called once per frame
    void Update()
    {
               
    }

    public void CreateSequence(int lengthOfSequence)
    {
        for (int i = 0; i < lengthOfSequence; i++)
        {
            var randomDirection = Random.Range(0, 3);
            var newArrow = Instantiate(sequenceItemPrefab, transform.position, Quaternion.identity);
            
            newArrow.transform.SetParent(sequenceTransform, false);
            newArrow.GetComponent<Image>().sprite = newArrow.GetComponent<SequenceItem>().possibleActions[randomDirection];
            
            GameManager.Instance.currentItemImage.Add(newArrow.GetComponent<Image>());

            switch (randomDirection)
            {
                case 0:
                    GameManager.Instance.currentSequence.Add("right");
                    break;
                case 1:
                    GameManager.Instance.currentSequence.Add("left");
                    break;
                case 2:
                    GameManager.Instance.currentSequence.Add("up");
                    break;
                case 3:
                    GameManager.Instance.currentSequence.Add("down");
                    break;
            }

        }
    }

    public void DestroySequence()
    {
        foreach (Transform child in sequenceTransform)
        {
            Destroy(child.gameObject);
        }
    }
    
    
}
