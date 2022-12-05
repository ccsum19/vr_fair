using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointAdder : MonoBehaviour
{
    public int firstPlace = 3;
    public int secondPlace = 2;
    public int thirdPlace = 1;

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
        if(other.gameObject.tag == "Player")
        {
            addPoints(firstPlace);
        }
    }
}
