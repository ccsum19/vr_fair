using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class teacherTrigger : MonoBehaviour
{
    public GameObject teacherTextBubble;
    Animator anim;
    bool flip = true;

    // Start is called before the first frame update
    void Start()
    {
        anim = gameObject.GetComponent<Animator>();
        teacherTextBubble.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            //Debug.Log("Collision entered!");
            //if (flip) {
                anim.SetTrigger("wave");
                anim.ResetTrigger("idle");
                flip = false;
                teacherTextBubble.SetActive(true);
            //}
        }
        
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            //Debug.Log("Collision exited!");
            anim.SetTrigger("idle");
            anim.ResetTrigger("wave");
            teacherTextBubble.SetActive(false);
        }
        
    }
}
