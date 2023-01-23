
using System.Xml;
using UnityEngine;
using TMPro;

public class Timer : MonoBehaviour
{
    public TMP_Text timerText;
    public float timeValue;
    public float playerTime = 0f;

    public bool timerOn;

    private void Start()
    {
        timeValue = playerTime;
        timerOn = true;
    }

    private void Update()
    {
        if (timerOn)
        {
            timeValue += Time.deltaTime;
        }
        else
        {
            timeValue = 0;
        }

        DisplayTime(timeValue);
    }

    private void DisplayTime(float timeToDisplay)
    {
        timerText.text = string.Format("{0:00}", timeValue);
    }

    public float GetCurrentTime()
    {
        return timeValue;
    }

    public void Reset()
    {
        timeValue = 0;
    }

}