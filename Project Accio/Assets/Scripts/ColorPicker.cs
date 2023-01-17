using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorPicker : MonoBehaviour
{
    private const string PLAYER_COLOR = "PLAYER_COLOR";

    public Slider slider;
    public Image playerColor;

    private void Start()
    {
        LoadColor();
        slider.onValueChanged.AddListener(delegate { SetColor(); });
    }

    private void LoadColor()
    {
        slider.value = PlayerPrefs.GetFloat(PLAYER_COLOR);
        SetColor();
    }

    private void Update()
    {
        SetColor();
        SaveColor();
    }

    private void SetColor()
    {
        playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
    }

    private void SaveColor()
    {
        PlayerPrefs.SetFloat(PLAYER_COLOR, slider.value);
    }
}
