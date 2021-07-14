/*
 * led2.c
 * 硬件描述：Arduino板的10口接led灯，GDN接电阻与Led相连
 * 功能描述：使用串口监视器，发送a/b,控制led亮/灭
 *  Created on: 2021-07-14
 *  Author: Wenbo Zhang
 */
int ledpin = 10; //指定led灯的接口10
char ch;
void setup()
{
    pinMode(ledpin, OUTPUT); //设置接口10为输出模式
    Serial.begin(9600); //设置串口波特率为9600b/s //初始化串口
}

void loop()
{
    if(Serial.available()>0) //如果缓冲区有数据，则读取并输出
    {
        char ch = Serial.read();
        Serial.println(ch);
        //开led灯
        if(ch == 'a')
        {
            digitalWrite(ledpin, HIGH);
            Serial.println("turn on");
        }
        //关led灯
        else if(ch == 'b')
        {
            digitalWrite(ledpin, LOW);
            Serial.println("turn off");
        }

    }
}