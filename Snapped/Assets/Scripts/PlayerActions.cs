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
        Debug.DrawRay(transform.position, transform.forward * 3f);
        if (Physics.Raycast(transform.position, transform.forward, out hit, 3f)) {
            if (Input.GetMouseButtonUp(0)) {
                Debug.Log(hit.transform.gameObject.name);
                IActionable actionable = hit.transform.gameObject.GetComponent<IActionable>();
                if (actionable != null) {
                    actionable.Triggered();
                }    
            }
        }
	}
}
