using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Eventhandler : MonoBehaviour
{
    public TMP_Text result;
    public Timer timer;
    
    public void ShowResult()
    {
        result.text = timer.GetCurrentTime();
    }

    public void AddToList()
    {
        
    }
    
    
}
