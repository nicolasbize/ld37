using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.FirstPerson;

public class FinalTrigger : MonoBehaviour {

    public GameObject phase3Decals = null;

    void OnTriggerEnter(Collider other) {
        phase3Decals.SetActive(true);
    }
}
