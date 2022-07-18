using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class bead : MonoBehaviour
{
    public static bead instance;
    
    public int digit;
    public int number;
    float[] position = new float[3];
    private Vector2 target;

    int now = 0;
    float speed;

    private void Awake(){
        instance = this;
    }
    void Start()
    {
        position[0] = GameDataManager.Yposition[ number%5 ];
        if(number == 5){
            position[1] = position[0]-0.5f;
        }
        else{
            position[1] = position[0]+0.5f;
        }
        target =new Vector2( transform.position.x, position[0]);
        transform.position = target;
        

        speed = GameDataManager.speed;
        move();
        Debug.Log(Math.Pow(10 ,digit));
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
    }
    public void move(){
        int store = (int)Math.Floor(GameDataManager.Number/ Math.Pow(10 ,digit) );
        if( store % 5 >= number){
            if( now == 0 ){
                now = 1;
                target.y = position[now];
            }
        }
        else{
            if( now == 1 ){
                now = 0;
                target.y = position[now];
            }
        }
    }

    public void add(int addDigit, int num){
        if(addDigit == digit){

        }
    }
}
