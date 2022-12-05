using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PrizeButton : MonoBehaviour
{

    public TMP_Text pointText;
    private int pointsRemaining = 10;
    public GameObject glassBox;
    private AudioSource audS;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void displayPointsRemaining() {
        int recPoints = Points.totalPoints;
        pointText.text = (pointsRemaining-recPoints).ToString();
    }
    

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            if ((pointsRemaining-Points.totalPoints) <= 0) {
                glassBox.SetActive(false);
                pointText.text = "!";
                audS = GetComponent<AudioSource>();
                audS.Play();
            } else {
                displayPointsRemaining();
            }
        }
    }
}
