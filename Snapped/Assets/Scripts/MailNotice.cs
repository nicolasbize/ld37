using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MailNotice : MonoBehaviour, IActionable {

    public void Triggered () {
        Debug.Log("OK");
        IUI ui = GameObject.Find("UI").GetComponent<IUI>();
        ui.DisplayDismissableItem("Notice");
    }
}
