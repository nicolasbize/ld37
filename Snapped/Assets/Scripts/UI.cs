using System.Collections;
using System.Collections.Generic;
using UnityStandardAssets.Characters.FirstPerson;
using UnityEngine;

public class UI : MonoBehaviour, IUI {

    private int timer = 0;
    private GameObject activeObject = null;

    public void DisplayDismissableItem(string objName) {
        if (this.timer > 30) {
            Transform obj = transform.FindChild(objName);
            if (obj != null) {
                obj.gameObject.SetActive(true);
                activeObject = obj.gameObject;
            }
            GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = false;
            this.timer = 0;
        }

    }

    public void DisplayDismissableItem(string objName, AudioClip audioEnter, AudioClip audioExit) {


    }

    void Update () {
        timer++;
        Debug.Log(timer);
        if (this.activeObject != null && Input.GetMouseButtonUp(0) && this.timer > 30) {
            this.activeObject.SetActive(false);
            this.activeObject = null;
            this.timer = 0;
            GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = true;
        }
    }

}
