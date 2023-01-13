using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    private void Start()
    {
    }

    public void GetButtonInput(string id)
    {
        GameManager.Instance.CompareInputWithSequence(id);
    }
    
}
