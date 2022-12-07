using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeDisplay : MonoBehaviour {

	Text text;

	// Use this for initialization
	void Start () {
		text = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		float time = FindObjectOfType<LevelManager>().timeTillNextLevel;
		if (time >= 0)
        {
			text.text = "Time: " + time;
		}
		else
        {
			scoreDisplay();

		}
		
	}

	public void scoreDisplay()
    {
		int totalScore = FindObjectOfType<LevelManager>().gameScore;
		int hubPoints = Points.totalPoints;
		if (totalScore >= 0 && totalScore <= 4)
		{
			text.text = "You got 3rd place! \nTotal points: " + hubPoints;
		}
		else if (totalScore >= 5 && totalScore <= 9)
		{
			text.text = "You got 2nd place! \nTotal points: " + hubPoints;
		}
		else if (totalScore >= 10)
		{
			text.text = "You got 1st place! \nTotal points: " + hubPoints;
		}
	}
}
