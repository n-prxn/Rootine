using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] float offsetHorizontal, offsetVertical, offsetSmoothing;
    [SerializeField] private Transform[] player = new Transform[2];
    private Vector3 targetPosition , centerPoint;
    // Start is called before the first frame update
    void Start()
    {
        centerPoint = GetCenterPoint();
    }

    // Update is called once per frame
    void Update()
    {
        centerPoint = GetCenterPoint();
        targetPosition = new Vector3(centerPoint.x + offsetHorizontal, centerPoint.y + offsetVertical,this.transform.position.z);
        transform.position = Vector3.Lerp(transform.position,targetPosition,offsetSmoothing*Time.deltaTime);
    }

    Vector3 GetCenterPoint(){
        float xPos = (player[0].position.x + player[1].position.x)/2f;
        float yPos = (player[0].position.y + player[1].position.y)/2f;
        return new Vector3(xPos,yPos,transform.position.z);
    }
}
