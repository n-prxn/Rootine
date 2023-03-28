using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;
public class Menu : MonoBehaviour
{
    [SerializeField] private GameObject transition;
    [SerializeField] private PlayableDirector selectDirector;
    [SerializeField] private Text PhloemPlayer, XylemPlayer;
    [SerializeField] private Image P1Border,P2Border;
    [SerializeField] private AudioClip[] sfxAudios;
    [SerializeField] private AudioClip bgmAudio;
    private AudioSource bgmAudioSource, sfxAudioSource;
    // Start is called before the first frame update
    void Start()
    {
        sfxAudioSource = GameObject.Find("SFX Player").GetComponent<AudioSource>();
        bgmAudioSource = GameObject.Find("BGM Player").GetComponent<AudioSource>();
        PhloemPlayer.text = "P1";
        XylemPlayer.text = "P2";
        bgmAudioSource.PlayOneShot(bgmAudio);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SelectCharacter(){
        sfxAudioSource.PlayOneShot(sfxAudios[0]);
        selectDirector.Play();
    }

    public void Exit(){
        sfxAudioSource.PlayOneShot(sfxAudios[0]);
        Application.Quit();
    }

    public void SwitchCharacter(){
        sfxAudioSource.PlayOneShot(sfxAudios[0]);

        string temp = PhloemPlayer.text;
        PhloemPlayer.text = XylemPlayer.text;
        XylemPlayer.text = temp;

        Sprite tmp = P1Border.sprite;
        P1Border.sprite = P2Border.sprite;
        P2Border.sprite = tmp;

    }

    public void PlayGame(){
        sfxAudioSource.PlayOneShot(sfxAudios[1]);
        PlayerPrefs.SetInt("phloemPlayer",PhloemPlayer.text == "P1" ? 1 : 2);
        PlayerPrefs.SetInt("xylemPlayer",XylemPlayer.text == "P1" ? 1 : 2);
        transition.SetActive(true);
    }
}
