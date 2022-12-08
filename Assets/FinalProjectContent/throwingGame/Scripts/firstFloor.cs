using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class firstFloor : MonoBehaviour
{
    public TMP_Text pointDisplay;
    private AudioSource audS;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void addPoints(int n)
    {
        Points.totalPoints += n;
        showPoint.showPoints += n;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "rock")
        {
            //Debug.Log(Points.totalPoints);
            int newPoint = 3;
            addPoints(newPoint);
            pointDisplay.text = showPoint.showPoints.ToString();
            GetComponent<Collider>().enabled = false;
            audS = GetComponent<AudioSource>();
            audS.Play();
            //Debug.Log(Points.totalPoints);
        }
    }
}