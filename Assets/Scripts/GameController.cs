using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {
	public Text[] buttonList;

	void SetGameControllersOnButtons (){
		for (int i = 0; i < buttonList.Length; i++) {
			buttonList [i].GetComponentInParent<GridSpace> ().SetGameControllerReference (this);
		}
	}

	void Awake (){
		SetGameControllersOnButtons ();
	}

	public string GetPlayerSide (){
		return "?";
	}

	public void EndTurn (){
		Debug.Log("EndTurn is not implemented!");
	}
}
