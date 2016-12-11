using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UI : MonoBehaviour, IUI {

    public void DisplayDismissableItem(string objName) {
        GameObject obj = GameObject.Find(objName);
        if (obj != null) {
            obj.SetActive(true);
        }

    }

    public void DisplayDismissableItem(string objName, AudioClip audioEnter, AudioClip audioExit) {


    }

}
