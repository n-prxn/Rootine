using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Events
{
    Earthworm,
    Ant
}

public class SpecialEvent : MonoBehaviour
{
    public Events specialEvent;
    public float eventOccurTime = 30;
    [SerializeField] GameObject[] insect;
    [SerializeField] Transform earthwormSpawnPoint;
    [SerializeField] Transform[] antSpawnPoint;
    private float timer;
    // Start is called before the first frame update
    void Start()
    {
        InitializeSpecialEvent();
        timer = eventOccurTime / 3f;
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            if (timer > 0)
            {
                timer -= Time.deltaTime;
            }
            else
            {
                specialEvent = (int)Random.Range(1f, 3f) % 2 == 0 ? Events.Ant : Events.Earthworm;
                InitializeSpecialEvent();
                timer = eventOccurTime;
            }
        }
    }

    void InitializeSpecialEvent()
    {
        switch (specialEvent)
        {
            case Events.Earthworm:
                Instantiate(insect[0], new Vector2(earthwormSpawnPoint.position.x, Random.Range(-17f, -1f)), Quaternion.identity);
                break;
            case Events.Ant:
                for (int i = 0; i < 3; i++)
                {
                    Instantiate(insect[1], new Vector2(Random.Range(antSpawnPoint[3].position.x, antSpawnPoint[1].position.x), Random.Range(antSpawnPoint[2].position.y, antSpawnPoint[0].position.y)), Quaternion.identity);
                }
                break;
            default:
                break;
        }
    }
}
