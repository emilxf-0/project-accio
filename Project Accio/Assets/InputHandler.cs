using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    private string buttonID;
    private List<string> playerInput = new(); 
    private void Start()
    {
        buttonID = GetComponent<ButtonID>().buttonID;
    }

    public void GetButtonInput()
    {
        playerInput.Add(buttonID);
    }

    private void CompareInputWithSequence()
    {
        
    }
}
