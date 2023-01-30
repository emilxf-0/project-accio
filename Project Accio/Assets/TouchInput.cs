using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class TouchInput : MonoBehaviour
{
    private List<Vector3> userInputPoints = new List<Vector3>();

    private LineRenderer lineRenderer;
    private Timer timer;

    private float fadeTime = 1f;
    private float fadeStartTime;
    private bool startFade;
    
    void Start()
    {
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
                fadeStartTime = Time.time;
                startFade = true;
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

}
