using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public struct DepotMineral
{
    public string mineralName;
    public int amount;
}

public class Depot : MonoBehaviour
{
    public int maxCapacity = 20;
    public float depotCooldown = 5f;
    private AudioSource sfxAudioSource;
    [SerializeField] private AudioClip chain , store;
    [SerializeField] private Sprite[] depotState;
    [SerializeField] private List<DepotMineral> depotMinerals = new List<DepotMineral>();
    private float timer;
    // Start is called before the first frame update
    void Start()
    {
        sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
        timer = depotCooldown;
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            if (GetComponent<Animator>().GetBool("isLifting"))
            {
                if (timer > 0)
                {
                    timer -= Time.deltaTime;
                }
                else
                {
                    sfxAudioSource.PlayOneShot(chain);
                    GetComponent<Animator>().SetBool("isLifting", false);
                    foreach (DepotMineral mineral in depotMinerals)
                    {
                        GameplayController.instance.AddMineral(mineral.mineralName, mineral.amount);
                    }
                    if(depotMinerals.Count > 0){
                        sfxAudioSource.PlayOneShot(store);
                    }
                    GameplayController.instance.GetMineralTrigger();
                    GameplayController.instance.GetWaterTrigger();
                    GetComponent<SpriteRenderer>().sprite = depotState[0];
                    ClearAllMinerals();
                    timer = depotCooldown;
                }
            }
        }
    }

    public void UpdateDepotState()
    {
        if (TotalMineralAmount() < 1)
        {
            GetComponent<SpriteRenderer>().sprite = depotState[0];
        }
        else if (TotalMineralAmount() < 8)
        {
            GetComponent<SpriteRenderer>().sprite = depotState[1];
        }
        else if (TotalMineralAmount() < 15)
        {
            GetComponent<SpriteRenderer>().sprite = depotState[2];
        }
        else if (TotalMineralAmount() < 20)
        {
            GetComponent<SpriteRenderer>().sprite = depotState[3];
        }
    }

    public void AddItem(String itemName, int amount)
    {
        for (int i = 0; i < depotMinerals.Count; i++)
        {
            if (depotMinerals[i].mineralName == itemName)
            {
                DepotMineral mineral = depotMinerals[i];
                mineral.amount += amount;
                depotMinerals[i] = mineral;
                break;
            }
        }
    }

    public void ClearAllMinerals()
    {
        for (int i = 0; i < depotMinerals.Count; i++)
        {
            DepotMineral mineral = depotMinerals[i];
            mineral.amount = 0;
            depotMinerals[i] = mineral;
        }
    }

    public int TotalMineralAmount()
    {
        int totalAmount = 0;
        for (int i = 0; i < depotMinerals.Count; i++)
        {
            totalAmount += depotMinerals[i].amount;
        }
        return totalAmount;
    }
}
