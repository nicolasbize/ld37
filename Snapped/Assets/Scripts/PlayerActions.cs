using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerActions : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
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
