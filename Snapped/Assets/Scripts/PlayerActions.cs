using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerActions : MonoBehaviour {

	private bool enabled = true;
	
	// Update is called once per frame
	void Update () {
        if (enabled) {
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
        }

	}

    public void Disable() {
        this.enabled = false;
    }
}
