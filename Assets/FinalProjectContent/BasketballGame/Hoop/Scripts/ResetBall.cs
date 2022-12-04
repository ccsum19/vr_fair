using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class ResetBall : MonoBehaviour
{
   public GameObject Object; 
    // Start is called before the first frame update
   
    
        void OnTriggerEnter()
        {
            var rigidbody = Object.GetComponent<Rigidbody>();
            rigidbody.position = new Vector3(0.186f, 0.214f, -12.62f);
            rigidbody.velocity = Vector3.zero;
            rigidbody.angularVelocity = Vector3.zero;



    }
    }

