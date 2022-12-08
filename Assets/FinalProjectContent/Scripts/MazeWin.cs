using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MazeWin : MonoBehaviour
{
    public int firstPlace = 10;
    public int sceneToLoad;
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
            SceneManager.LoadScene("Win");
        }
        
    }
}
