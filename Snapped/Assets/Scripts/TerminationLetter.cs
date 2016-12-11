using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerminationLetter : MonoBehaviour, IActionable {

    public void Triggered () {
        IUI ui = GameObject.Find("UI").GetComponent<IUI>();
        ui.DisplayDismissableItem("TerminationLetter");
    }
}
