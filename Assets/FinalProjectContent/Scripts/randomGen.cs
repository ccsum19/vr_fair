using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class randomGen : MonoBehaviour
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

    public void addPoints(int n) {
        Points.totalPoints += n;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "randBox")
        {
            //Debug.Log(Points.totalPoints);
            int randomPoint = Random.Range(0, 10);
            addPoints(randomPoint);
            pointDisplay.text = randomPoint.ToString();
            GetComponent<Collider>().enabled = false;
            audS = GetComponent<AudioSource>();
            audS.Play();
            //Debug.Log(Points.totalPoints);
        }
    }
}
