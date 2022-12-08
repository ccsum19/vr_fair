using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PrizeButton : MonoBehaviour
{

    public TMP_Text pointText;
    private int pointsRemaining = 10;
    private AudioSource audS;
    public GameObject spawnLoc;
    public GameObject[] prizes;

    private Vector3 spawnPos;

    // Start is called before the first frame update
    void Start()
    {
        spawnPos = spawnLoc.transform.position;

        int recPoints = Points.totalPoints;
        /*
        if (pointsRemaining-recPoints > 0) {
            displayPointsRemaining();
        } else {
            pointsRemaining = 10;
            pointText.text = pointsRemaining.ToString();
        }
        */
        if (pointsRemaining-recPoints < 0) {
            pointsRemaining = 10;
            pointText.text = pointsRemaining.ToString();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void displayPointsRemaining() {
        int recPoints = Points.totalPoints;
        pointText.text = (pointsRemaining-recPoints).ToString();
    }
    
    private void spawnPrize() {
        int randomPrize = Random.Range(0, 12);
        DontDestroyOnLoad(Instantiate(prizes[randomPrize], spawnPos, Quaternion.identity));
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            if ((pointsRemaining-Points.totalPoints) <= 0) {
                pointText.text = "!";
                Debug.Log("spawning random prize");
                spawnPrize();
                audS = GetComponent<AudioSource>();
                audS.Play();
                Points.totalPoints = 0;
            } else {
                displayPointsRemaining();
            }
        }
    }
}
