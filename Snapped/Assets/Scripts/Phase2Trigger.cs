using System.Collections;
using System.Collections.Generic;
using UnityStandardAssets.Characters.FirstPerson;
using UnityEngine;

public class Phase2Trigger : MonoBehaviour {

    private bool entered = false;
    private bool shifted = false;
    public GameObject phase2Decals = null;


    void OnTriggerEnter(Collider other) {
        if (!entered) {
    //        if (GameObject.Find("UI").GetComponent<UI>().cluesFound.Count > 6) {
                foreach(GameObject obj in GameObject.FindGameObjectsWithTag("Light")) {
                    Light light = obj.GetComponent<Light>();
                    light.enabled = false;
                }
            GameObject.Find("Light").SetActive(false);
            GameObject.Find("SoundManager").GetComponent<SoundManager>().PlaySound("lightsout", false);
            GameObject player = GameObject.Find("FPSController");
            player.GetComponent<FirstPersonController>().enabled = false;
            player.transform.position = new Vector3(3.35202f, 0.83f, -1.1336f);
            player.transform.rotation = new Quaternion(0, 94, 0, 0);
            GameObject.Find("FirstPersonCharacter").GetComponent<PlayerActions>().Disable();
            RenderSettings.ambientLight = new Color(0.1f, 0.1f, 0.1f);

            entered = true;
        }
    }

    void Update() {
        if (entered) {
            if (!shifted) {
                AudioSource src = GameObject.Find("UI").GetComponent<AudioSource>();
                if (src.volume > 0) {
                    src.volume -= 0.1f * Time.deltaTime;
                }
                if (!GameObject.Find("SoundManager").GetComponent<SoundManager>().IsPlaying()) {
                    GameObject.Find("LampTorch").GetComponent<Light>().enabled = true;
                    GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = true;
                    phase2Decals.SetActive(true);
                    GameObject.Find("ScaryMusic").GetComponent<AudioSource>().Play();
                    GameObject.Find("Scared").GetComponent<AudioSource>().Play();
                    Invoke("StartBreathing", 2);
                    Invoke("Daddy", 4);
                    Invoke("BamBam", 15);
                    shifted = true;
                }

            }


        }
    }

    private void StartBreathing() {
        GameObject.Find("Breathing").GetComponent<AudioSource>().Play();
        GameObject.Find("Heart").GetComponent<AudioSource>().Play();
    }

    private void Daddy() {
        GameObject.Find("Daddy").GetComponent<AudioSource>().Play();
    }

    private void BamBam() {
        GameObject.Find("FrontDoor").GetComponent<FrontDoor>().SetFinale();
    }
}
