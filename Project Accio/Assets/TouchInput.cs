using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.Collections;
using UnityEngine;

public class TouchInput : MonoBehaviour
{
    private List<Vector3> userInputPoints = new List<Vector3>();

    private LineRenderer lineRenderer;
    public LineRenderer preDefinedCircle;
    private Timer timer;

    private float fadeTime = 1f;
    private float fadeStartTime;
    private bool startFade;

    private Vector3[] preDefinedCirclePoints;
    private Vector3[] userCirclePoints;
    
    
    void Start()
    {
        //DrawCircle(100,1);
        preDefinedCirclePoints = new Vector3[preDefinedCircle.positionCount];
        CreateNewLineRenderer();
    }
    
    void Update()
    {
        if (Input.touchCount > 0)
        {
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
                userCirclePoints = new Vector3[lineRenderer.positionCount];
                fadeStartTime = Time.time;
                startFade = true;

                var cumulativeValue = Match();
                Debug.Log("The cumulative value is: " + cumulativeValue);
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
            Debug.Log("I've reset everything now jao!");
        }
    }

    public float Match()
    {
        float[] distanceRow = new float[preDefinedCirclePoints.Length + 1];

        for (int j = 0; j <= preDefinedCirclePoints.Length; j++)
        {
            distanceRow[j] = float.PositiveInfinity;
        }
        
        distanceRow[0] = 0;
        
        for (int i = 1; i <= userCirclePoints.Length; i++)
        {
            float[] newDistanceRow = new float[preDefinedCirclePoints.Length + 1];
            newDistanceRow[0] = float.PositiveInfinity;
            
            for (int j = 1; j <= preDefinedCirclePoints.Length; j++)
            {
                float cost = Vector3.Distance(userInputPoints[i - 1], preDefinedCirclePoints[j - 1]);
                newDistanceRow[j] = cost + Mathf.Min(distanceRow[j], Mathf.Min(newDistanceRow[j - 1], distanceRow[j - 1]));
            }

            distanceRow = newDistanceRow;
        }

        return distanceRow[preDefinedCirclePoints.Length];
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

    void DrawCircle(int steps, float radius)
    {
        preDefinedCircle.positionCount = steps;

        for (int i = 0; i < steps; i++)
        {
            var circumferenceProgress = (float)i / steps;
            var currentRadian = circumferenceProgress * 2 * Mathf.PI;
            var xScaled = Mathf.Cos(currentRadian);
            var yScaled = Mathf.Sin(currentRadian);

            var x = xScaled * radius;
            var y = yScaled * radius;

            Vector3 currentPosition = new Vector3(x, y, 0);
            
            preDefinedCircle.SetPosition(i, currentPosition);
        }
    }
}
