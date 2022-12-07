using UnityEngine;
using System.Collections;
 
// Makes objects float up & down while gently spinning.
public class floatTime : MonoBehaviour {
    // Customizable float
    public float dPS = 15.0f;
    public float amp = 0.5f;
    public float freq = 1f;
 
    // Position Storage Variables
    Vector3 posOffset = new Vector3 ();
    Vector3 tempPos = new Vector3 ();
 
    // Use this for initialization
    void Start () {
        // Store the starting position & rotation of the object
        posOffset = transform.position;
    }
     
    // Update is called once per frame
    void Update () {
        // Spin object around Y-Axis
        transform.Rotate(new Vector3(0f, Time.deltaTime * dPS, 0f), Space.World);
 
        // Float up/down with a Sin()
        tempPos = posOffset;
        tempPos.y += Mathf.Sin (Time.fixedTime * Mathf.PI * freq) * amp;
 
        transform.position = tempPos;
    }
}
