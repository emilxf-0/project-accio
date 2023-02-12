using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class HealthManager : MonoBehaviour
{
    public Slider slider;
    public float maxHealth;
    public float playerHealth;
    public float currentHealth;
    public bool enemyMomentum;
    public float damage = 0.25f;

    public GameObject midPoint;
    public GameObject enemyPosition;
    public GameObject playerPosition;
    

    public static event Action PlayerDeath; 
    
    void Start()
    {
        playerHealth = maxHealth / 2;
        currentHealth = playerHealth;
        StartPosition();
    }

   
    void Update()
    {
        slider.value = currentHealth;

        if (GameManager.Instance.gameHasStarted == false)
        {
            return;
        }
        
        if (enemyMomentum)
        {
            MoveTowards(playerPosition.transform.position, damage);
        }
        else
        {
            MoveTowards(enemyPosition.transform.position, damage);
        }
    }

    private void MoveTowards(Vector2 endPoint, float amountToMove)
    {
        var toleranceLevel = 0.1f;
        midPoint.transform.position = Vector2.Lerp(midPoint.transform.position, endPoint, amountToMove * Time.deltaTime);
        
        if (Vector2.Distance(midPoint.transform.position, endPoint) < toleranceLevel)
        {
            PlayerDeath?.Invoke();
        }
    }

    public bool CheckIfPlayerHasTakenDamage()
    {
        if (playerHealth < maxHealth)
        {
            return true;
        }
        
        return false;
    }

    public void StartPosition()
    {
        midPoint.transform.position = Vector3.Lerp(enemyPosition.transform.position, playerPosition.transform.position, 0.5f);
    }

}
