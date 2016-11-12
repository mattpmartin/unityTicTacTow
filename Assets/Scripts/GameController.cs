using UnityEngine;
using System.Collections;
using UnityEngine.UI;

[System.Serializable]
public class Player{
	public Image panel;
	public Text text;
	public Button button;
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

	public GameObject startInfo;

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
		gameOverPanel.SetActive (false);
		restartButton.SetActive (false);
		moveCount = 0;
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
			SetPlayerColourInactive ();
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
		moveCount = 0;
		gameOverPanel.SetActive (false);

		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].text = "";
		}

		restartButton.SetActive (false);

		SetPlayerButtons (true);
		SetPlayerColourInactive ();

		startInfo.SetActive (true);
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

	public void SetStartingSide (string startingSide){
		playerSide = startingSide;
		if (startingSide == "X") {
			SetPlayerColours (playerX, playerO);
		} else {
			SetPlayerColours (playerO, playerX);
		}

		StartGame ();
	}

	void StartGame(){
		SetBoardInteractable (true);
		SetPlayerButtons (false);
		startInfo.SetActive (false);
	}

	void SetPlayerButtons(bool value){
		playerO.button.interactable = value;
		playerX.button.interactable = value;
	}

	void SetPlayerColourInactive() {
		playerO.panel.color = inactivePlayerColour.panelColour;
		playerO.text.color = inactivePlayerColour.textColour;
		playerX.panel.color = inactivePlayerColour.panelColour;
		playerX.text.color = inactivePlayerColour.textColour;
	}
}
