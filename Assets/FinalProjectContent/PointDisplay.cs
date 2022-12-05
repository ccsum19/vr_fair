using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PointDisplay : MonoBehaviour
{
    public TMP_Text pointText;

    public void displayPoints() {
        int recPoints = Points.totalPoints;
        pointText.text = recPoints.ToString();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("gettingTriggered");
        if(other.gameObject.tag == "Player")
        {
            Debug.Log("trying to get points");
            displayPoints();
        } else {
            Debug.Log("Didnt get points");
        }
        
    }
}
