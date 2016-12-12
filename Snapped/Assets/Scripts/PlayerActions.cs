using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerActions : MonoBehaviour {

	private bool myEnabled = true;
	
	// Update is called once per frame
	void Update () {
        if (myEnabled) {
            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.forward, out hit, 3f)) {
                if (Input.GetMouseButtonUp(0)) {
                    IActionable actionable = hit.transform.gameObject.GetComponent<IActionable>();
                    if (actionable != null) {
                        actionable.Triggered();
                    }
                    ClueCollider clue = hit.transform.gameObject.GetComponent<ClueCollider>();
                    if (clue != null) {
                        clue.Interact();
                    }
                }
            }
            Debug.DrawRay(transform.position, transform.forward * 6f);
            if (Physics.Raycast(transform.position, transform.forward, out hit, 6f)) {
                if (hit.transform.gameObject.tag == "EndTag") {
                    GameObject.Find("UI").GetComponent<UI>().EndGame();
                }
            }
        }

	}

    public void Disable() {
        this.myEnabled = false;
    }
}
