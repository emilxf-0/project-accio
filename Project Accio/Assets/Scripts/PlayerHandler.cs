using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHandler : MonoBehaviour
{
    private const string PLAYER_COLOR = "PLAYER_COLOR";

    public TMP_Text welcomeMessage;

    public Slider slider;
    public Image playerColor;

    public string playerID;

    private void Awake()
    {
        slider.onValueChanged.AddListener(delegate { SetColor(); });
        DatabaseAPI.Instance.LoadFromFirebase();
    }

   

    public void LoadColor(string color)
    {
        Debug.Log("LoadColor: " + color);
        float colorFloat = float.Parse(color);
        Debug.Log("Float: " + colorFloat);
        slider.value = colorFloat;
        Debug.Log("Slider value is: " + slider.value);
        playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
        Debug.Log("Något är knas");
    }

    public void SetColorToBlue()
    {
        slider.value = 0.6f;
    }

    private void Update()
    {
        SetColor();
    }


    private void SetColor()
    {
        playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
    }

    public void SaveColor()
    {
        DatabaseAPI.Instance.SaveToFirebase(slider.value.ToString());
        //PlayerPrefs.SetFloat(PLAYER_COLOR, slider.value);
    }
}
