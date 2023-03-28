using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerNumber
{
    P1, P2
};

public class PlayerController : MonoBehaviour
{
    public float speed, jumpPower, dashDelayTime;
    public PlayerNumber playerNumber;
    public InventorySO inventory;
    private bool isGround, isDash, isIdle, canSend, canPressSwitch;
    private float input, dashTime = 0.3f, dashCooldown;
    private KeyCode leftKey, rightKey, jumpKey, absorbKey, dashKey, interactKey;
    private Vector2 movement, lastMovement;
    private Rigidbody2D rb;
    private Depot depot;
    private Animator animator;
    private List<GameObject> heldMinerals = new List<GameObject>();
    private AudioSource sfxAudioSource;
    [SerializeField] private GameObject explodedMineral;
    [SerializeField] private GroundChecker groundChecker;
    [SerializeField] private AbsorbDetection absorbDetection;
    [SerializeField] private Animator dashBarAnimator;
    [SerializeField] private AudioClip[] sfxAudios;

    // Start is called before the first frame update
    void Awake() {
        if(this.gameObject.name == "Phloem"){
            playerNumber = (PlayerPrefs.GetInt("phloemPlayer") == 1 ? PlayerNumber.P1 : PlayerNumber.P2);
        }else if(this.gameObject.name == "Xylem"){
            playerNumber = (PlayerPrefs.GetInt("xylemPlayer") == 1? PlayerNumber.P1 : PlayerNumber.P2);
        }
    }
    void Start()
    {
        InitializePlayer();
        dashCooldown = 0f;
        rb = GetComponent<Rigidbody2D>();
        depot = GameObject.FindGameObjectWithTag("Depot").GetComponent<Depot>();
        animator = GetComponent<Animator>();
        sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();

    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            MovementInput();
            movement = new Vector2(speed * input, rb.velocity.y);

            isIdle = (movement.magnitude > 0 ? false : true);

            if (!isIdle)
                lastMovement = movement;

            if (isDash)
            {
                if (dashTime > 0)
                {
                    dashTime -= Time.deltaTime;
                    rb.AddForce(lastMovement.x > 0 ? Vector2.right * 30f : Vector2.left * 30f);
                    animator.SetBool("isDash",true);
                }
                else
                {
                    isDash = false;
                    dashTime = 0.3f;
                    animator.SetBool("isDash",false);
                }
            }
            else
            {
                dashCooldown -= Time.deltaTime;
            }

            animator.SetFloat("Speed",movement.magnitude);
            animator.SetBool("isGround",groundChecker.isGround);
            Flip();
            //print(lastMovement);
        }
    }

    private void FixedUpdate()
    {
        if (!GameplayController.instance.isPause)
        {
            rb.velocity = movement;
        }
    }
    private void InitializePlayer()
    {
        switch (playerNumber)
        {
            case PlayerNumber.P1:
                leftKey = KeyCode.A;
                rightKey = KeyCode.D;
                jumpKey = KeyCode.W;
                absorbKey = KeyCode.Q;
                dashKey = KeyCode.LeftShift;
                interactKey = KeyCode.E;
                break;
            case PlayerNumber.P2:
                leftKey = KeyCode.LeftArrow;
                rightKey = KeyCode.RightArrow;
                jumpKey = KeyCode.UpArrow;
                absorbKey = KeyCode.RightControl;
                dashKey = KeyCode.RightShift;
                interactKey = KeyCode.Slash;
                break;
            default:
                break;
        }
        inventory.Clear();
    }
    private void MovementInput()
    {
        if (Input.GetKey(leftKey))
            input = -1f;
        else
        {
            if (Input.GetKey(rightKey))
                input = 1f;
            else
            {
                input = 0f;
            }
        }

        if (Input.GetKeyDown(jumpKey) && groundChecker.isGround)
            Jump();

        if (Input.GetKey(absorbKey) && inventory.heldMinerals.Count < 6)
        {
            if(this.gameObject.name == "Phloem" && absorbDetection.canAbsorb())
                Absorb();
            
            if(this.gameObject.name == "Xylem" && absorbDetection.canAbsorbWater())
                Absorb();
        }

        if(Input.GetKeyUp(absorbKey)){
            if(this.gameObject.name == "Phloem")
                absorbDetection.ClearAllMinerals();
            if(this.gameObject.name == "Xylem")
                absorbDetection.ClearAllWaters();
        }

        if (Input.GetKeyDown(dashKey) && dashCooldown <= 0)
        {
            Dash();
        }

        if (Input.GetKeyDown(interactKey) && canSend)
        {
            SendMinerals();
        }

        if(Input.GetKeyDown(interactKey) && canPressSwitch){
            LiftDepot();
        }

    }
    public void Jump()
    {
        PlaySFX(sfxAudios[1]);
        rb.velocity = new Vector2(0, jumpPower);
    }
    private void Flip()
    {
        if (lastMovement.x > Mathf.Epsilon)
        {
            GetComponent<SpriteRenderer>().flipX = true;
        }
        else
        {
            GetComponent<SpriteRenderer>().flipX = false;
        }
    }
    private void Dash()
    {
        PlaySFX(sfxAudios[3]);
        isDash = true;
        dashBarAnimator.gameObject.SetActive(true);
        dashCooldown = dashDelayTime;
    }
    private void Absorb()
    {
        if (this.gameObject.name == "Phloem")
        {
            List<GameObject> minerals = absorbDetection.GetAbsorbedMinerals();
            foreach (GameObject mineral in minerals)
            {
                //print(mineral);
                float step = 0.05f * Time.deltaTime;
                mineral.transform.position = Vector2.MoveTowards(mineral.transform.position, transform.position, step);
                mineral.GetComponent<CircleCollider2D>().isTrigger = true;
            }
        }else if(this.gameObject.name == "Xylem"){
            List<GameObject> waters = absorbDetection.GetAbsorbedWater();
            foreach(GameObject water in waters){
                float step = 0.1f * Time.deltaTime;
                water.transform.position = Vector2.MoveTowards(water.transform.position, transform.position, step);
                water.GetComponent<CircleCollider2D>().isTrigger = true;
            }
        }
    }
    private void SendMinerals()
    {
        PlaySFX(sfxAudios[0]);
        foreach (GameObject mineral in heldMinerals)
        {
            depot.AddItem(mineral.tag,1);
        }
        depot.UpdateDepotState();
        heldMinerals.Clear();
        inventory.Clear();
    }
    
    private void LiftDepot(){
        PlaySFX(sfxAudios[4]);
        depot.GetComponent<Animator>().SetBool("isLifting",true);
    }
    public void AddItem(GameObject item)
    {
        PlaySFX(sfxAudios[2]);
        heldMinerals.Add(item);
    }
    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Player"))
        {
            if (isDash)
            {
                foreach (Sprite mineral in other.collider.GetComponent<PlayerController>().inventory.heldMinerals)
                {
                    PlaySFX(sfxAudios[5]);
                    GameObject explodedItem = Instantiate(explodedMineral, other.collider.transform.position, Quaternion.identity);
                    explodedItem.GetComponent<SpriteRenderer>().sprite = mineral;
                }
                other.collider.GetComponent<PlayerController>().inventory.Clear();
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Depot") && heldMinerals.Count > 0)
        {
            canSend = true;
        }

        if(other.CompareTag("Switch")){
            canPressSwitch = true;
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("Depot"))
        {
            canSend = false;
        }

        if(other.CompareTag("Switch") ){
            canPressSwitch = false;
        }
    }

    private void PlaySFX(AudioClip sfx){
        sfxAudioSource.PlayOneShot(sfx);
    }
}
