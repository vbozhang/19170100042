/*
 * NixieTube.c
 * 硬件描述：Arduino板的连接共阴极数码管，不考虑小数点a/b/c/d/e/f/g分别接
 *         8/7/9/10/11/12/6号端口
 * 功能描述：使用串口监视器，发送0-9中的一个数字,数码管显示相应数字
 *  Created on: 2021-07-14
 *  Author: Wenbo Zhang
 */

int a = 8; //指定led灯的接口
int b = 7;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 6;
char ch;

void setup()
{
    pinMode(a, OUTPUT); //设置各接口为输出模式
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    Serial.begin(9600); //设置串口波特率为9600b/s //初始化串口
}

void loop()
{
    if(Serial.available()>0) //如果缓冲区有数据，则读取并输出
    {
        char ch = Serial.read();
        Serial.println(ch);
        //0
        if(ch == '0')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, LOW);
        }
        //1
        else if(ch == '1')
        {
            digitalWrite(a, LOW);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
        }
        //2
        else if(ch == '2')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, LOW);
            digitalWrite(g, HIGH);
        }
        //3
        else if(ch == '3')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, HIGH);
        }
        //4
        else if(ch == '4')
        {
            digitalWrite(a, LOW);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
        }
        //5
        else if(ch == '5')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, LOW);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, LOW);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
        }
        //6
        else if(ch == '6')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, LOW);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
        }
        //7
        else if(ch == '7')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
        }
        //8
        else if(ch == '8')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
        }
        //9
        else if(ch == '9')
        {
            digitalWrite(a, HIGH);
            digitalWrite(b, HIGH);
            digitalWrite(c, HIGH);
            digitalWrite(d, HIGH);
            digitalWrite(e, LOW);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
        }
    }
}