using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameDataManager : MonoBehaviour
{
    public static float[] Yposition = new float[] {0.5f, -1.45f, -2.11f, -2.8f};
    public static float Number = 0;//原數
    public static int doNum  = 0;//下一個要算的動作

    public  int nowNum = 0;//算到目前的數字
    int checkAnswer = 0;
    
    public static int sign = 0; //0無  1加  2減  3乘  4除

    public static float speed = 3f;
    
    void Start()
    {
        c();
    }

    
    void Update()
    {
        Number = nowNum;
        bead.instance.move();
    }
    void c(){
        Number += 7;
        bead.instance.move();
        Invoke("c",3.0f);
    }
}
