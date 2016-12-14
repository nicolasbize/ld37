using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {

    public AudioClip[] audioClips;

    public void PlaySound(string name, bool loop) {
        foreach(AudioClip clip in audioClips){
            if (clip.name == name) {
                PlaySound(clip, loop);
                return; 
            }
        }
    }

    public void PlaySound(AudioClip clip, bool loop) {
        AudioSource src = GetComponent<AudioSource>();
        if (src.clip != clip) {
            src.volume = 1f;
            src.clip = clip;
            src.loop = loop;
            src.Play();
        }
    }

    public bool IsPlaying() {
        return GetComponent<AudioSource>().isPlaying;
    }
}
