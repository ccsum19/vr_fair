using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class triggerTime : MonoBehaviour
{
    public GameObject friend;
    public GameObject friendTextBubble;
    Animator anim;
    bool flip = true;
    public TMP_Text friendText;

    // Start is called before the first frame update
    void Start()
    {
        anim = gameObject.GetComponent<Animator>();
        friendTextBubble.SetActive(false);
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
            //friend.transform.Rotate(0.0f, 270.0f, 0.0f, Space.Self);
            //if (flip) {
                anim.SetTrigger("wave");
                anim.ResetTrigger("idle");
                flip = false;
                friendTextBubble.SetActive(true);
            //}
            /*
            else {
                friendTextBubble.SetActive(true);
                friendText.text = "Didn't we already say hi to each other?";
            }
            */
        }
        
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            //Debug.Log("Collision exited!");
            //friend.transform.Rotate(0.0f, 90.0f, 0.0f, Space.Self);
            anim.SetTrigger("idle");
            anim.ResetTrigger("wave");
            friendTextBubble.SetActive(false);
        }
        
    }
}
