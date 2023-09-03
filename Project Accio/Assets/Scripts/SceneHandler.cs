using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneHandler : MonoBehaviour
{
    private void Start()
    {
        if (SceneManager.GetSceneByName("Matchmaking").isLoaded)
        {
            //Invoke(nameof(ConnectToGame), 2f);
        }
    }

    private void OnEnable()
    {
        DatabaseAPI.ConnectToGame += ConnectToGame;
        DatabaseAPI.LoginSuccessful += LoginSuccessful;
    }

    private void OnDisable()
    {
        DatabaseAPI.ConnectToGame -= ConnectToGame;
        DatabaseAPI.LoginSuccessful -= LoginSuccessful;
    }

    public void GoToMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void LoginSuccessful()
    {
        SceneManager.LoadScene("MatchMaking");
    }

    public void ConnectToGame()
    {
        SceneManager.LoadScene("GamePlay");
    }

    public void GoToLoadingScene()
    {
        SceneManager.LoadScene("Loading Scene");
    }
}
