/*
 * led.c
 * 硬件描述：Arduino板的5-13口分别接不同的led灯
 * 功能描述：5-13号灯从右到左依次亮起，再从左向右依次熄灭，不断循环
 *  Created on: 2021-07-13
 *  Author: Wenbo Zhang
 */
int i=13;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for (i = 5; i <= 13; i++) //通过这个循环让led灯从右往左依次亮起
  {
    digitalWrite(i, HIGH);
    delay(300); //延时一段时间
  }
  for (i = 13; i >= 5; i--) //通过这个循环让led灯从左往右依次熄灭
  {
    digitalWrite(i, LOW);
    delay(300); //延时一段时间
  }
}