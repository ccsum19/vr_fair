using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class thirdFloor : MonoBehaviour
{

    public TMP_Text pntDisplay;
    private AudioSource audioS;

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
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "rock")
        {
            int newPoint = 1;
            addPoints(newPoint);
            pntDisplay.text = newPoint.ToString();
            GetComponent<Collider>().enabled = false;
            audioS = GetComponent<AudioSource>();
            audioS.Play();
            //Debug.Log(Points.totalPoints);
        }
    }
}