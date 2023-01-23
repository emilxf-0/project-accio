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
            TakeDamage(0.01f);
        }
        else
        {
            Heal(0.01f);
        }
    }

    public void TakeDamage(float damageTaken)
    {
        currentHealth -= damageTaken * Time.deltaTime;

        if (currentHealth <= 0)
        {
            PlayerDeath.Invoke();
        }
    }

    public void Heal(float hpToHeal)
    {
        currentHealth += hpToHeal * Time.deltaTime;
        
        if (currentHealth > maxHealth)
        {
            currentHealth = playerHealth;
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

}
