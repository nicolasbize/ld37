using System.Collections;
using System.Collections.Generic;
using UnityStandardAssets.Characters.FirstPerson;
using UnityEngine;
using UnityEngine.UI;

public class UI : MonoBehaviour, IUI {

    
    private bool hasStarted = false;
    private int timer = 0;
    private GameObject activeObject = null;
    public AudioClip introMusic;
    public AudioClip mainMusic;
    public AudioClip endMusic;
    private float introMusicVolume = 0.5f;
    private float mainMusicVolume = 0f;
    private bool isFadingMusic = false;
    private AudioClip currentClip = null;
    public HashSet<string> cluesFound = new HashSet<string>();
    private bool isEnding = false;
    private bool allowClick = false;

    void Start () {
        AudioSource audio = gameObject.GetComponent<AudioSource>();
        audio.clip = introMusic;
        currentClip = introMusic;
        audio.Play();
        GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = false;
        Image img = GameObject.Find("IntroFade").GetComponent<Image>();
        Color fadeCol = new Color (1f, 1f, 1f, 0f);
        img.CrossFadeColor(fadeCol, 4f, true, true);
        Invoke("StartSpeech", 2);
        Invoke("AllowClick", 5);
    }

    void StartSpeech() {

        GameObject.Find("SoundManager").GetComponent<SoundManager>().PlaySound("intro", false);
    }

    void AllowClick() {
        this.allowClick = true;
    }

    public void FoundClue(string clue) {
        if (!cluesFound.Contains(clue)) {
            cluesFound.Add(clue);
            GameObject.Find("DingDing").GetComponent<AudioSource>().Play();
        }
        GameObject.Find("Score").GetComponent<Text>().text = "Clues: " + cluesFound.Count + "/20";
    }

    public void DisplayDismissableItem(string objName) {
        if (this.timer > 30 && activeObject == null) {
            Transform obj = transform.FindChild(objName);
            if (obj != null) {
                obj.gameObject.SetActive(true);
                activeObject = obj.gameObject;
            }
            GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = false;
            this.timer = 0;
        }

    }

    public void DisplayDismissableItem(string objName, AudioClip audioEnter, AudioClip audioExit) {


    }

    void FixedUpdate () {
        if (this.allowClick) {
            timer++;
            if (this.timer > 30) {
                if (!hasStarted && Input.GetMouseButtonDown(0)) {
                    this.isFadingMusic = true;
                    GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = true;
                    GameObject.Find("SoundManager").GetComponent<AudioSource>().Stop();
                    Image img = GameObject.Find("IntroScreen").GetComponent<Image>();
                    Color fadeCol = new Color (1f, 1f, 1f, 0f);
                    img.CrossFadeColor(fadeCol, 3f, true, true);
                    return;
                }
                if (this.activeObject != null && Input.GetMouseButtonUp(0)) {
                    this.activeObject.SetActive(false);
                    this.activeObject = null;
                    this.timer = 0;
                    GameObject.Find("FPSController").GetComponent<FirstPersonController>().enabled = true;
                }

            }
            if (this.isFadingMusic) {
                this.CrossFadeMusic();
            }

            if (this.isEnding) {
                GameObject.Find("ScaryMusic").GetComponent<AudioSource>().volume -= 0.1f * Time.deltaTime;
                GameObject.Find("Breathing").GetComponent<AudioSource>().volume -= 0.1f * Time.deltaTime;
                GameObject.Find("Heart").GetComponent<AudioSource>().volume -= 0.1f * Time.deltaTime;
                GameObject.Find("Bambam").GetComponent<AudioSource>().volume -= 0.1f * Time.deltaTime;
                GameObject.Find("Daddy").GetComponent<AudioSource>().volume -= 0.1f * Time.deltaTime;
            }
        }

    }

    private void CrossFadeMusic() {
        AudioSource audio = gameObject.GetComponent<AudioSource>();
        if (introMusicVolume > 0.1f) {
            introMusicVolume -= 0.1f * Time.deltaTime;
            audio.volume = introMusicVolume;
        } else {
            if (currentClip != mainMusic) {
                currentClip = mainMusic;
                audio.clip = mainMusic;
                audio.Play();
            }
            if (mainMusicVolume < 0.5f) {
                mainMusicVolume += 0.1f * Time.deltaTime;
                audio.volume = mainMusicVolume;
            } else {
                this.isFadingMusic = false;
            }

        }
    }

    public void EndGame() {
        if (!this.isEnding) {
            this.isEnding = true;
            AudioSource audio = gameObject.GetComponent<AudioSource>();
            audio.Stop();
            GameObject.Find("Whine").GetComponent<AudioSource>().Play();
            Image img = GameObject.Find("IntroFade").GetComponent<Image>();
            Color fadeCol = new Color (1f, 1f, 1f, 1f);
            img.CrossFadeColor(fadeCol, 4f, true, true);
            Invoke("ShowEnd", 4);
            Invoke("LastMusic", 19);
        }
    }

    public void ShowEnd() {
        GameObject.Find("Crazy").GetComponent<AudioSource>().Play();
        GameObject.Find("EndText").GetComponent<Text>().enabled = true;
    }

    public void LastMusic() {
        GameObject.Find("EndMusic").GetComponent<AudioSource>().Play();
    }
}
