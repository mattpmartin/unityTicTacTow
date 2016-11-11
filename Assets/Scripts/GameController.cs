using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {
	public Text[] buttonList;

	private string playerSide;

	public GameObject gameOverPanel;
	public Text gameOverText;
	public GameObject restartButton;

	private int moveCount;

	void SetGameControllersOnButtons (){
		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].GetComponentInParent<GridSpace> ().SetGameControllerReference (this);
		}
	}

	void Awake (){
		SetGameControllersOnButtons ();
		playerSide = "X";
		gameOverPanel.SetActive (false);
		restartButton.SetActive (false);
		moveCount = 0;
	}

	public string GetPlayerSide (){
		return playerSide;
	}

	public void EndTurn (){
		if (buttonList [0].text == playerSide && buttonList [1].text == playerSide && buttonList [2].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [3].text == playerSide && buttonList [4].text == playerSide && buttonList [5].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [6].text == playerSide && buttonList [7].text == playerSide && buttonList [8].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [0].text == playerSide && buttonList [3].text == playerSide && buttonList [6].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [1].text == playerSide && buttonList [4].text == playerSide && buttonList [7].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [2].text == playerSide && buttonList [5].text == playerSide && buttonList [8].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [0].text == playerSide && buttonList [4].text == playerSide && buttonList [8].text == playerSide)
		{
			GameOver (playerSide);
		}

		if (buttonList [2].text == playerSide && buttonList [4].text == playerSide && buttonList [6].text == playerSide)
		{
			GameOver (playerSide);
		}

		ChangeSide ();

		moveCount++;

		if (moveCount >= 9) {
			GameOver ("draw");
		}
	}

	void GameOver (string winningPlayer)
	{
		SetBoardInteractable(false);
		if (winningPlayer == "draw")
		{
			SetGameOverText("It's a Draw!");
		} else
		{
			SetGameOverText(winningPlayer + " Wins!");
		}
		restartButton.SetActive(true);
	}

	void ChangeSide (){
		playerSide = (playerSide == "X") ? "O" : "X";
	}

	void SetGameOverText(string value){
		gameOverPanel.SetActive (true);
		gameOverText.text = value;
	}

	public void ResetGame(){
		playerSide = "X";
		moveCount = 0;
		gameOverPanel.SetActive (false);

		SetBoardInteractable (true);

		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].text = "";
		}

		restartButton.SetActive (false);
	}

	void SetBoardInteractable (bool value){
		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].GetComponentInParent<Button> ().interactable = value;
		}
	}
}
