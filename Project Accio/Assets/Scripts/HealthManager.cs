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

    public GameObject midPoint;
    public GameObject enemyPosition;
    public GameObject playerPosition;
    
    public static event Action PlayerDeath; 
    
    void Start()
    {
        playerHealth = maxHealth / 2;
        currentHealth = playerHealth;
    }

   
    void Update()
    {
        slider.value = currentHealth;

        while (GameManager.Instance.gameHasStarted == false)
        {
            return;
        }
        
        if (enemyMomentum)
        {
            TakeDamage(1f);
        }
        else
        {
            Heal(1f);
        }
    }

    public void TakeDamage(float damageTaken)
    {
        currentHealth -= damageTaken * Time.deltaTime;
        
        midPoint.transform.position = Vector2.MoveTowards(midPoint.transform.position, playerPosition.transform.position, damageTaken * Time.deltaTime);

        
        if (midPoint.transform.position == playerPosition.transform.position)
        {
            PlayerDeath.Invoke();
        }
    }

    public void Heal(float hpToHeal)
    {
        midPoint.transform.position = Vector2.MoveTowards(midPoint.transform.position, enemyPosition.transform.position, hpToHeal * Time.deltaTime);
    }

    public bool CheckIfPlayerHasTakenDamage()
    {
        if (playerHealth < maxHealth)
        {
            return true;
        }
        
        return false;
        
    }

}
