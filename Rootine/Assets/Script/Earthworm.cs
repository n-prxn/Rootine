using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Earthworm : MonoBehaviour
{
    // Start is called before the first frame update
    public Mineral[] minerals;
    public Transform mineralSpawnPoint;
    public float speed = 2f, dirX, dirY, duration = 150f;
    public float spawnRateTime = 1f;
    private float spawnCooldown = 0f;
    private Rigidbody2D rb;
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        //dirX = Mathf.Sign(Random.Range(-1f,1f));
        //dirY = Mathf.Sign(Random.Range(-1f,1f));
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            rb.velocity = new Vector2(-speed, 0);
            MineralBuff();
            if(duration > 0){
                duration -= Time.deltaTime;
            }else{
                Destroy(this.gameObject);
            }
        }
    }

    void MineralBuff()
    {
        if (spawnCooldown > 0)
        {
            spawnCooldown -= Time.deltaTime;
        }
        else
        {
            GameObject mineral = Instantiate(GetRandomMineral(), mineralSpawnPoint.position, Quaternion.identity);
            spawnCooldown = spawnRateTime;
        }
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
