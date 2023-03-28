using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AnimationFunction : MonoBehaviour
{
    void SetInactive(){
        this.gameObject.SetActive(false);
    }

    void SelfDestroy(){
        Destroy(this.gameObject);
    }

    void NextScene(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    void Unpause(){
        GameplayController.instance.isPause = false;
    }

    void Pause(){
        GameplayController.instance.isPause = true;
    }
}
