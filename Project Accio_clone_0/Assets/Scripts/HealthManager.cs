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

    public static event Action PlayerDeath; 
    
    void Start()
    {
        slider.value = maxHealth;
        currentHealth = maxHealth;
        playerHealth = maxHealth;
    }

   
    void Update()
    {
        slider.value = currentHealth;
    }

    public void TakeDamage(float damageTaken)
    {
        Debug.Log("Damage taken: " + damageTaken);
        currentHealth -= damageTaken;

        if (currentHealth <= 0)
        {
            PlayerDeath.Invoke();
        }
    }

    public void Heal(float hpToHeal)
    {
        Debug.Log("Healed: " + hpToHeal);
        currentHealth += hpToHeal;
    }

}
