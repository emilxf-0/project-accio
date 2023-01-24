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
        StartPosition();
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
            TakeDamage(0.75f);
        }
        else
        {
            Heal(0.75f);
        }
    }

    public void TakeDamage(float damageTaken)
    {
        midPoint.transform.position = Vector2.MoveTowards(midPoint.transform.position, playerPosition.transform.position, damageTaken * Time.deltaTime);
        
        if (midPoint.transform.position == playerPosition.transform.position)
        {
            PlayerDeath.Invoke();
        }
    }

    public void Heal(float hpToHeal)
    {
        midPoint.transform.position = Vector2.MoveTowards(midPoint.transform.position, enemyPosition.transform.position, hpToHeal * Time.deltaTime);
        
        if (midPoint.transform.position == enemyPosition.transform.position)
        {
            PlayerDeath.Invoke();
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
