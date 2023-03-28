using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    [SerializeField] private Text[] mineralTexts;
    [SerializeField] private Text moistureText, temperatureText, depthText, timeText;
    [SerializeField] private GameObject mineralCircle, waterCircle;
    [SerializeField] private RectTransform tempBar, moistBar;
    [SerializeField] private GameObject[] mineralStatus;
    [SerializeField] private AudioClip[] sfxAudios;
    private bool isMineralRotating, isWaterRotating;
    private AudioSource sfxAudioSource;
    private Transform mainCam;
    // Start is called before the first frame update
    void Start()
    {
        mainCam = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
        sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateMinerals();
        UpdateEnvironmentInfo();
        UpdateGoal();
        UpdateDepth();
        UpdateTime();
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            SwitchStatusTab();
        }
    }

    void UpdateMinerals()
    {
        int i = 0;
        foreach (Text mineral in mineralTexts)
        {
            if (i < 14)
            {
                mineral.text = GameplayController.instance.GetMineralAmountOfIndex(i).ToString("##0");
                i++;
            }
        }
    }

    void UpdateGoal()
    {

        if (isMineralRotating)
        {
            float currentMineral = GameplayController.instance.GetCurrentMineral();
            if (currentMineral > GameplayController.instance.targetMineral)
            {
                currentMineral = GameplayController.instance.targetMineral;
            }

            Vector3 to = new Vector3(0, 0, 90f + (currentMineral * 90f / GameplayController.instance.targetMineral));
            if (mineralCircle.transform.eulerAngles.z <= to.z)
            {
                mineralCircle.transform.RotateAround(mineralCircle.transform.position, Vector3.forward, 10 * Time.deltaTime);
            }
            else
            {
                isMineralRotating = false;
            }
        }

        if (isWaterRotating)
        {
            float currentWater = GameplayController.instance.GetCurrentWater();
            if (currentWater > GameplayController.instance.targetWater)
            {
                currentWater = GameplayController.instance.targetWater;
            }
            Vector3 to = new Vector3(0, 0, 360f - (currentWater * 90f / GameplayController.instance.targetWater));
            print("to.z " + to.z);
            print("eulerangle " + Mathf.Abs(waterCircle.transform.eulerAngles.z - 360));
            if ((waterCircle.transform.eulerAngles.z == 0 ? 360 : waterCircle.transform.eulerAngles.z) >= to.z)
            {
                waterCircle.transform.RotateAround(waterCircle.transform.position, Vector3.back, 10 * Time.deltaTime);
            }
            else
            {
                isWaterRotating = false;
            }
        }
    }

    void UpdateEnvironmentInfo()
    {
        moistureText.text = "Moisture : " + (GameplayController.instance.moisture).ToString("##0.0%");
        temperatureText.text = GameplayController.instance.temperature.ToString() + " Celsius";

        tempBar.sizeDelta = new Vector2((GameplayController.instance.temperature / 40f) * 202f, tempBar.rect.height);
        moistBar.sizeDelta = new Vector2((GameplayController.instance.moisture) * 202f, moistBar.rect.height);
    }

    public void SetWaterRotate()
    {
        isWaterRotating = true;
    }

    public void SetMineralRotate()
    {
        isMineralRotating = true;
    }

    public void SwitchStatusTab()
    {
        PlaySFX(sfxAudios[0]);
        if (mineralStatus[0].activeSelf)
        {
            mineralStatus[0].GetComponent<Animator>().SetBool("isClose", true);
            mineralStatus[1].SetActive(true);
        }
        else if (mineralStatus[1].activeSelf)
        {
            mineralStatus[1].GetComponent<Animator>().SetBool("isClose", true);
            mineralStatus[0].SetActive(true);
        }
    }

    public void UpdateDepth()
    {
        if (mainCam.position.y <= 0)
        {
            depthText.text = (Mathf.Abs(mainCam.position.y * 10f)).ToString("##0.0") + " M";
        }
        else
        {
            depthText.text = "Ground";
        }
    }

    public void UpdateTime()
    {
        timeText.text = "Remain Time: " + GameplayController.instance.GetRemainingTime().ToString("##0");
    }

    public void PlaySFX(AudioClip sfx)
    {
        sfxAudioSource.PlayOneShot(sfx);
    }
}
