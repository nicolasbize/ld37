using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Diary : MonoBehaviour, IActionable {

    public void Triggered () {
        IUI ui = GameObject.Find("UI").GetComponent<IUI>();
        ui.DisplayDismissableItem("Diary");
    }
}
