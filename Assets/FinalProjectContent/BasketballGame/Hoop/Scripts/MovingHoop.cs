using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingHoop : MonoBehaviour
{
    public float delta = 1.5f;
    public float speed = 2.0f;
    private Vector3 SP;
    // Start is called before the first frame update
    void Start()
    {
        SP = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 v = SP;
        v.x += delta * Mathf.Sin(Time.time * speed);
        transform.position = v;
    }
}
