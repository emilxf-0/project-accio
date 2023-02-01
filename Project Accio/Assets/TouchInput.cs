using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.Collections;
using Unity.VisualScripting;
using UnityEngine;

public class TouchInput : MonoBehaviour
{
    private List<Vector3> userInputPoints = new List<Vector3>();

    private LineRenderer lineRenderer;
    public LineRenderer[] preDefinedSymbol;
    private Timer timer;

    private float fadeTime = 1f;
    private float fadeStartTime;
    private bool startFade;
    private string currentSymbol;

    private Vector3[] preDefinedSymbolPoints;
    private Vector3[] userSymbolPoints;
    
    
    void Start()
    {
        currentSymbol = "triangle";
        preDefinedSymbolPoints = new Vector3[preDefinedSymbol[ChooseSymbol(currentSymbol)].positionCount];
        CreateNewLineRenderer();
    }
    
    void Update()
    {
        if (Input.touchCount > 0)
        {
            StartGame();
            
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Moved)
            {
                Vector3 screenPos = touch.position;
                screenPos.z = Camera.main.nearClipPlane;
                Vector3 touchWorldPos = Camera.main.ScreenToWorldPoint(screenPos);
                userInputPoints.Add(touchWorldPos);
                lineRenderer.positionCount = userInputPoints.Count;
                lineRenderer.SetPositions(userInputPoints.ToArray());
            }

            if (touch.phase == TouchPhase.Ended)
            {
                userSymbolPoints = new Vector3[lineRenderer.positionCount];
                fadeStartTime = Time.time;
                startFade = true;

                var cumulativeValue = Match();
                Debug.Log("The cumulative value is: " + cumulativeValue);
                CompareInputWithSymbol();
                SendPlayerInfo();
            }

        }

        if (startFade == false)
        {
            return;
        }
        
        FadeLine();
    }
    
    void FadeLine()
    {
        float timeSinceStart = Time.time - fadeStartTime;
        
        if (timeSinceStart < fadeTime)
        {
            var t = timeSinceStart / fadeTime;
            
            lineRenderer.startColor = Color.Lerp(Color.white, Color.clear, t);
            lineRenderer.endColor = Color.Lerp(Color.white, Color.clear, t);
        }
        else
        {
            ResetLineRenderer();
            startFade = false;
        }
    }

    void CompareInputWithSymbol()
    {
        var thresholdValue = Match();

        switch (ChooseSymbol(currentSymbol))
        {
            case 0:
                if (thresholdValue is >= 108 and <= 150)
                {
                    Debug.Log("It's a perfect triangle");
                    GameManager.Instance.sequence.CompareInputWithSequence(true);
                }
                else
                {
                    GameManager.Instance.sequence.CompareInputWithSequence(false);
                }
                

                return;
            case 1:
                if (thresholdValue is >= 200 and <= 246)
                {
                    Debug.Log("It's a perfect square");
                    GameManager.Instance.sequence.CompareInputWithSequence(true);
                }
                else
                {
                    GameManager.Instance.sequence.CompareInputWithSequence(false);
                }
                
                return;
            case 2:
                if (thresholdValue is >= 265 and <= 365)
                {
                    Debug.Log("It's a perfect pentagram. Hail Satan!");
                    GameManager.Instance.sequence.CompareInputWithSequence(true);
                }
                else
                {
                    GameManager.Instance.sequence.CompareInputWithSequence(false);
                }
                
                return;
            case 3:
                if (thresholdValue is >= 88 and <= 118)
                {
                    Debug.Log("It's a perfect lightning.");
                    GameManager.Instance.sequence.CompareInputWithSequence(true);
                }
                else
                {
                    GameManager.Instance.sequence.CompareInputWithSequence(false);
                }
                
                return;
        }

    }

    public float Match()
    {
        float[] distanceRow = new float[preDefinedSymbolPoints.Length + 1];

        for (int j = 0; j <= preDefinedSymbolPoints.Length; j++)
        {
            distanceRow[j] = float.PositiveInfinity;
        }
        
        distanceRow[0] = 0;
        
        for (int i = 1; i <= userSymbolPoints.Length; i++)
        {
            float[] newDistanceRow = new float[preDefinedSymbolPoints.Length + 1];
            newDistanceRow[0] = float.PositiveInfinity;
            
            for (int j = 1; j <= preDefinedSymbolPoints.Length; j++)
            {
                float cost = Vector3.Distance(userInputPoints[i - 1], preDefinedSymbolPoints[j - 1]);
                newDistanceRow[j] = cost + Mathf.Min(distanceRow[j], Mathf.Min(newDistanceRow[j - 1], distanceRow[j - 1]));
            }

            distanceRow = newDistanceRow;
        }

        return distanceRow[preDefinedSymbolPoints.Length];
    }

    void CreateNewLineRenderer()
    {
        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.startColor = Color.white;
        lineRenderer.endColor = Color.white;
        lineRenderer.startWidth = 0.1f;
        lineRenderer.endWidth = 0.1f;
    }

    private void ResetLineRenderer()
    {
        lineRenderer.positionCount = 0;
        userInputPoints.Clear();
        lineRenderer.startColor = Color.white;
        lineRenderer.endColor = Color.white;
    }

    private int ChooseSymbol(string nameOfSymbol)
    {
        switch (nameOfSymbol)
        {
            case "triangle":
                return 0;
            
            case "square":
                return 1;
            
            case "pentagram":
                return 2;
            
            case "lightning":
                return 3;
        }

        throw new ArgumentException("No match for: " +  nameOfSymbol);
    }
    
    public void SendPlayerInfo()
    {
        var playerReaction = GameManager.Instance.GetPlayerTimeStamp();
        var playerID = GameManager.Instance.playerID;
        var sequencePosition = GameManager.Instance.sequence.sequencePosition;
        var gameSessionID = GameManager.gameSessionID;

        if (DatabaseAPI.Instance.singlePlayerGame)
        {
            GameManager.Instance.latestPlayerTimestamp = playerReaction;
            GameManager.Instance.SinglePlayerGame();
        }
        else
        {
            DatabaseAPI.Instance.SendAction(new PlayerInfo(playerID, playerReaction, sequencePosition, gameSessionID), () =>
            {
                // Action was sent!
            }, exception => { Debug.Log(exception); });
        }
    }
    
    public void StartGame()
    {
        GameManager.Instance.gameHasStarted = true;
    }
    
}
