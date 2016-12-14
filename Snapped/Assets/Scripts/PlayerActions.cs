using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerActions : MonoBehaviour {

	private bool myEnabled = true;
	
	// Update is called once per frame
	void FixedUpdate () {
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

        } else {
            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.forward, out hit, 5f)) {
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
