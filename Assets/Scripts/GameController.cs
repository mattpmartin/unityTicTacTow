using UnityEngine;
using System.Collections;
using UnityEngine.UI;

[System.Serializable]
public class Player{
	public Image panel;
	public Text text;
}

[System.Serializable]
public class PlayerColour{
	public Color panelColour;
	public Color textColour;
}

public class GameController : MonoBehaviour {
	public Text[] buttonList;

	private string playerSide;

	public GameObject gameOverPanel;
	public Text gameOverText;
	public GameObject restartButton;

	public Player playerX;
	public Player playerO;

	public PlayerColour activePlayerColour;
	public PlayerColour inactivePlayerColour;

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

		SetPlayerColours (playerX, playerO);
	}

	public string GetPlayerSide (){
		return playerSide;
	}

	public void EndTurn (){
		moveCount++;

		if (buttonList [0].text == playerSide && buttonList [1].text == playerSide && buttonList [2].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [3].text == playerSide && buttonList [4].text == playerSide && buttonList [5].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [6].text == playerSide && buttonList [7].text == playerSide && buttonList [8].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [0].text == playerSide && buttonList [3].text == playerSide && buttonList [6].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [1].text == playerSide && buttonList [4].text == playerSide && buttonList [7].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [2].text == playerSide && buttonList [5].text == playerSide && buttonList [8].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [0].text == playerSide && buttonList [4].text == playerSide && buttonList [8].text == playerSide) {
			GameOver (playerSide);
		} else if (buttonList [2].text == playerSide && buttonList [4].text == playerSide && buttonList [6].text == playerSide) {
			GameOver (playerSide);
		} else if (moveCount >= 9) {
			GameOver ("draw");
		} else {
			ChangeSide ();
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

		if (playerSide == "X") {
			SetPlayerColours (playerX, playerO);
		} else {
			SetPlayerColours (playerO, playerX);
		}
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

		SetPlayerColours (playerX, playerO);
	}

	void SetBoardInteractable (bool value){
		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].GetComponentInParent<Button> ().interactable = value;
		}
	}

	void SetPlayerColours (Player newPlayer, Player oldPlayer){
		newPlayer.panel.color = activePlayerColour.panelColour;
		newPlayer.text.color = activePlayerColour.textColour;

		oldPlayer.panel.color = inactivePlayerColour.panelColour;
		oldPlayer.text.color = inactivePlayerColour.textColour;
	}
}
