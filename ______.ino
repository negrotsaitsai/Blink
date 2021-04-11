//可變電阻的類比訊號輸入
//之後用可變電阻來控制LED燈亮度
int sensor=A0;
int sensorRead=0;
int newdata=0;
void setup() {
   Serial.begin(9600);//開啟序列阜
}

void loop() {
  sensorRead=analogRead(sensor);//由A0讀取類比訊號
  newdata=map(sensorRead, 0, 1023, 0, 255);//將讀到數值傳到序列阜
  Serial.println(newdata);
  analogWrite(3,255);
  delay(200);
}
