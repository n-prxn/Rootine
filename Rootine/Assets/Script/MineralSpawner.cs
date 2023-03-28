using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public struct Mineral
{
    public GameObject mineral;
    public int weight;
}

public class MineralSpawner : MonoBehaviour
{
    public Mineral[] minerals;
    public LayerMask groundLayer;
    [SerializeField] GameObject water;
    [SerializeField] Transform top, right, left, bottom;
    public int mineralSpawnAmount = 1, waterSpawnAmount = 1;
    public float spawnRateTime = 2f, waterSpawnRateTime = 2f, waterSpawnRate = 0.7f;
    private float spawnCooldown = 0f, waterCooldown = 0f;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            SpawnRandomMineral();
            SpawnWater();
        }
    }
    private void SpawnWater()
    {
        if (waterCooldown > 0)
        {
            waterCooldown -= Time.deltaTime;
        }
        else
        {
            if (UnityEngine.Random.Range(0f, 1f) < waterSpawnRate)
            {
                for (int i = 0; i < waterSpawnAmount; i++)
                {
                    Instantiate(water, RandomSpawnPosition(), Quaternion.identity);
                }
            }
            waterCooldown = waterSpawnRateTime;
        }
    }

    private void SpawnRandomMineral()
    {
        if (spawnCooldown > 0)
        {
            spawnCooldown -= Time.deltaTime;
        }
        else
        {
            for (int i = 0; i < mineralSpawnAmount; i++)
            {
                GameObject mineral = Instantiate(GetRandomMineral(), RandomSpawnPosition(), Quaternion.identity);
            }
            spawnCooldown = spawnRateTime;
        }
    }
    private Vector2 RandomSpawnPosition()
    {
        return new Vector2(UnityEngine.Random.Range(left.position.x, right.position.x), UnityEngine.Random.Range(top.position.y, bottom.position.y));
    }

    public int GetRandomWeightedIndex(int[] weights)
    {
        int weightSum = 0;
        for (int i = 0; i < weights.Length; i++)
        {
            weightSum += weights[i];
        }

        int index = 0;
        int lastIndex = weights.Length - 1;
        while (index < lastIndex)
        {
            if (UnityEngine.Random.Range(0, weightSum) < weights[index])
            {
                return index;
            }
            weightSum -= weights[index++];
        }
        return index;
    }

    public GameObject GetRandomMineral()
    {
        int[] weights = new int[minerals.Length];
        for (int i = 0; i < minerals.Length; i++)
        {
            weights[i] = minerals[i].weight;
        }
        return minerals[GetRandomWeightedIndex(weights)].mineral;
    }
}
