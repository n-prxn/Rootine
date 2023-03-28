using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[System.Serializable]
public struct GameplayMineral
{
    public string mineralName;
    public int amount;
}
public enum Weather
{
    Rainy,
    Rainstorm,
    Drought,
    Snowy,
    Sunny
}
public class GameplayController : MonoBehaviour
{
    public static GameplayController instance;
    public Weather weather;
    public float moisture, temperature, time = 150, timeRate = 5, targetMineral = 100f, targetWater = 100f;
    public bool isPause = true;
    [SerializeField] private MineralSpawner mineralSpawner;
    [SerializeField] private UIController UI;
    [SerializeField] private GameObject sky;
    [SerializeField] private GameObject[] weatherFX;
    [SerializeField] private List<GameplayMineral> minerals = new List<GameplayMineral>();
    [SerializeField] private GameObject winning, gameOver;
    [SerializeField] private AudioClip[] sfxAudios;
    [SerializeField] private AudioClip[] bgmAudios;
    private AudioSource sfxAudioSource , bgmAudioSource;
    private float currentMineral = 0f, currentWater = 0f, remainingTime;
    // Start is called before the first frame update
    void Start()
    {
        sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
        bgmAudioSource = GameObject.Find("Gameplay/BGM Player").GetComponent<AudioSource>();
        instance = this;
        isPause = true;
        remainingTime = time;
        InitializeWeather();
    }

    // Update is called once per frame
    void Update()
    {
        if (!isPause)
        {
            TimeTicking();
            currentMineral = CalculateMineralPoint();
            currentWater = (minerals[14].amount) * 5f;

            if (currentMineral >= targetMineral && currentWater >= targetWater && remainingTime > 0)
            {
                Winning();
            }

            if (remainingTime < 0)
            {
                GameOver();
            }
        }
    }

    public float CalculateMineralPoint(){
        float mineralPoint = 0;
        for(int i = 0 ; i < 14 ; i++){
            if(i < 3){
                mineralPoint += (minerals[i].amount * 5f);
            }else if(i < 6){
                mineralPoint += (minerals[i].amount * 3f);
            }else{
                mineralPoint += (minerals[i].amount);
            }
        }
        return mineralPoint;
    }

    public void Winning()
    {
        PlaySFX(sfxAudios[0]);
        winning.SetActive(true);
        isPause = true;
    }

    public void GameOver()
    {
        gameOver.SetActive(true);
        isPause = true;
    }
    public void InitializeWeather()
    {
        switch (weather)
        {
            case Weather.Sunny:
                moisture = Random.Range(0.25f, 0.45f);
                temperature = Random.Range(18, 27);
                mineralSpawner.spawnRateTime = 3f;
                mineralSpawner.waterSpawnRateTime = 4f;
                mineralSpawner.mineralSpawnAmount = 7;
                mineralSpawner.waterSpawnAmount = 7;
                bgmAudioSource.PlayOneShot(bgmAudios[0]);
                weatherFX[0].SetActive(false);
                break;
            case Weather.Drought:
                moisture = Random.Range(0.1f, 0.24f);
                temperature = Random.Range(28, 40);
                mineralSpawner.spawnRateTime = 2f;
                mineralSpawner.waterSpawnRateTime = 6f;
                mineralSpawner.mineralSpawnAmount = 7;
                mineralSpawner.waterSpawnAmount = 5;
                bgmAudioSource.PlayOneShot(bgmAudios[0]);
                weatherFX[0].SetActive(false);
                break;
            case Weather.Rainy:
                moisture = Random.Range(0.35f, 0.65f);
                temperature = Random.Range(20, 25);
                mineralSpawner.spawnRateTime = 4f;
                mineralSpawner.waterSpawnRateTime = 3f;
                mineralSpawner.mineralSpawnAmount = 6;
                mineralSpawner.waterSpawnAmount = 8;
                bgmAudioSource.PlayOneShot(bgmAudios[1]);
                weatherFX[0].SetActive(true);
                break;
            case Weather.Rainstorm:
                moisture = Random.Range(0.5f, 0.85f);
                temperature = Random.Range(20, 25);
                mineralSpawner.spawnRateTime = 5f;
                mineralSpawner.waterSpawnRateTime = 2f;
                mineralSpawner.mineralSpawnAmount = 5;
                mineralSpawner.waterSpawnAmount = 9;
                bgmAudioSource.PlayOneShot(bgmAudios[1]);
                weatherFX[0].SetActive(true);
                break;
            case Weather.Snowy:
                moisture = Random.Range(0.05f, 0.15f);
                temperature = Random.Range(3, 15);
                mineralSpawner.spawnRateTime = 4f;
                mineralSpawner.waterSpawnRateTime = 5f;
                mineralSpawner.mineralSpawnAmount = 6;
                mineralSpawner.waterSpawnAmount = 6;
                weatherFX[0].SetActive(false);
                break;
            default:
                break;
        }
    }
    public void InitializeWeight()
    {
        switch (weather)
        {
            case Weather.Sunny:
                InitializeMineralWeights(3, 2, 1);
                mineralSpawner.waterSpawnRate = 0.6f;
                break;
            case Weather.Drought:
                InitializeMineralWeights(3, 2, 3);
                mineralSpawner.waterSpawnRate = 0.3f;
                break;
            case Weather.Rainy:
                InitializeMineralWeights(2, 2, 1);
                mineralSpawner.waterSpawnRate = 0.75f;
                break;
            case Weather.Rainstorm:
                InitializeMineralWeights(2, 1, 1);
                mineralSpawner.waterSpawnRate = 0.9f;
                break;
            case Weather.Snowy:
                InitializeMineralWeights(1, 1, 1);
                mineralSpawner.waterSpawnRate = 0.3f;
                break;
            default:
                break;
        }
    }
    public void InitializeMineralWeights(int primaryWeight, int secondaryWeight, int microWeight)
    {
        for (int i = 0; i < mineralSpawner.minerals.Length; i++)
        {
            if (i < 3)
            {
                mineralSpawner.minerals[i].weight = primaryWeight;
            }
            else if (i < 6)
            {
                mineralSpawner.minerals[i].weight = secondaryWeight;
            }
            else
            {
                mineralSpawner.minerals[i].weight = microWeight;
            }
        }
    }

    public void TimeTicking()
    {
        sky.GetComponent<Rigidbody2D>().velocity = new Vector2(0, (timeRate));
        remainingTime -= Time.deltaTime;
    }

    public void GetMineralTrigger()
    {
        if(currentMineral < targetMineral){
            UI.SetMineralRotate();
        }
    }

    public void GetWaterTrigger()
    {
        if(currentWater < targetWater){
            UI.SetWaterRotate();
        }
    }

    public float GetCurrentMineral()
    {
        return this.currentMineral;
    }

    public float GetCurrentWater()
    {
        return this.currentWater;
    }

    public float GetRemainingTime()
    {
        return this.remainingTime;
    }

    public void AddMineral(string itemName, int amount)
    {
        for (int i = 0; i < minerals.Count; i++)
        {
            if (minerals[i].mineralName == itemName)
            {
                GameplayMineral gameplayMineral = minerals[i];
                gameplayMineral.amount += amount;
                minerals[i] = gameplayMineral;
                break;
            }
        }
    }

    public void ClearAllMinerals()
    {
        for (int i = 0; i < minerals.Count; i++)
        {
            GameplayMineral gameplayMineral = minerals[i];
            gameplayMineral.amount = 0;
            minerals[i] = gameplayMineral;
        }
    }

    public int GetMineralAmountOf(string mineralName)
    {
        for (int i = 0; i < minerals.Count; i++)
        {
            if (minerals[i].mineralName == mineralName)
            {
                return minerals[i].amount;
            }
        }
        return 0;
    }

    public int GetMineralAmountOfIndex(int index)
    {
        return minerals[index].amount;
    }

    public void PlaySFX(AudioClip sfx){
        sfxAudioSource.PlayOneShot(sfx);
    }

    public void Replay(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void NextLevel(){
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
