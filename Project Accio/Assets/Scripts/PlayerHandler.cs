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
        float colorFloat = float.Parse(color);
        slider.value = colorFloat;
        playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
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
