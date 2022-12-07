using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
	public float timeTillNextLevel = 40f;
	public int gameScore;
	public int check;
	
	// Use this for initialization
	void Start ()
	{



	}
	
	// Update is called once per frame
	void Update ()
	{
		timeTillNextLevel -= Time.deltaTime;

		if (timeTillNextLevel <= 0) {
			calculateScore();
		}
		if(timeTillNextLevel <=-10)
        {
			LoadNextScene();
        }

	void calculateScore()
        {
			if (check == 0)
			{
				gameScore = FindObjectOfType<ScoreKeeper>().score;
				if (gameScore >= 1 && gameScore <= 4)
				{
					Points.totalPoints += 1;
				}
				else if (gameScore >= 5 && gameScore <= 9)
				{
					Points.totalPoints += 2;
				}
				else if (gameScore >= 10)
				{
					Points.totalPoints += 3;
				}
				check++;
			}
		}
	}


	public void LoadNextScene ()
	{
		//int currentIndex =	SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (0);
	}

	//public void PreviousScene ()
	//{
	//	int currentIndex =	SceneManager.GetActiveScene ().buildIndex;
	//	SceneManager.LoadScene (currentIndex - 1);
	//}
		
}
