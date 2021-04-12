
#include <Servo.h>//伺服馬達函式庫

Servo myservo; //定義馬達名字
int sensor=0;//電位器輸入的類比訊號值
int angle=0;
void setup() {
  myservo.attach(9);  //馬達的訊號控制位置
}

void loop() {
  sensor=analogRead(A0);  
  angle=map(sensor,0,1023,0,180);
  myservo.write(angle);       //0~180    
  delay(15);                           
}
