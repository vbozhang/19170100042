/*
 * led2.c
 * 硬件描述：Arduino板的12、13口接直流电机，GDN接电阻与电机负极相连
 * 功能描述：在串口监视器，发送w/a/d/s，实现两个电机同时转动/仅右边电机转动/仅左边电机转动/两电机均不转动
 *  Created on: 2021-07-14
 *  Author: Wenbo Zhang
 */
int leftpin = 13; //指定左电机的接口13
int rightpin = 12; //指定右电机的接口12

char ch;
void setup()
{
    pinMode(leftpin, OUTPUT); //设置接口13为输出模式
    pinMode(rightpin, OUTPUT); //设置接口12为输出模式
    Serial.begin(9600); //设置串口波特率为9600b/s //初始化串口
}

void loop()
{
    if(Serial.available()>0) //如果缓冲区有数据，则读取并输出
    {
        char ch = Serial.read();
        Serial.println(ch);
        //两个电机同时转动
        if(ch == 'w')
        {
            digitalWrite(leftpin, HIGH);
            digitalWrite(rightpin,  HIGH);
            Serial.println("turn on");
        }
        //仅右边电机转动
        else if(ch == 'a')
        {
            digitalWrite(leftpin, LOW);
            digitalWrite(rightpin,  HIGH);
            Serial.println("turn left");
        }
        //仅左边电机转动
        else if(ch == 'd')
        {
            digitalWrite(leftpin, HIGH);
            digitalWrite(rightpin,  LOW);
            Serial.println("turn right");
        }
        //两电机均不转动
        else if(ch == 's')
        {
            digitalWrite(leftpin, LOW);
            digitalWrite(rightpin,  LOW);
            Serial.println("turn off");
        }        
    }
}