using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FrontDoor : MonoBehaviour {

    private bool isFinale = false;
    public GameObject trigger = null;

    public void SetFinale() {
        if (!isFinale) {
            isFinale = true;
            GameObject.Find("Bambam").GetComponent<AudioSource>().Play();
            trigger.SetActive(true);
        }
    }



}
