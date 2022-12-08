using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class saveThis : MonoBehaviour
{
    public GameObject spawnLoc;
    private Vector3 spawnPos;
    // Start is called before the first frame update
    void Start()
    {
        spawnPos = spawnLoc.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Prize")
        {
            other.GetComponent<Rigidbody>().velocity = new Vector3(0,0,0);
            other.gameObject.transform.position = spawnPos;
        }
    }
}
