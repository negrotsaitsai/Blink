

int pushButton = 7; 
int beforeState=0;
int presstime=0;
void setup() {
 
  Serial.begin(9600);//開始與電腦的連線窗口'傳輸速率9600

  pinMode(pushButton, INPUT);
}


void loop() {

  int buttonState = digitalRead(pushButton);
  if(buttonState==1 and beforeState==0){
     presstime=presstime+1;
     Serial.print("hi");//ln 
     Serial.println(presstime);//傳輸輸出狀況
  }
  if(buttonState!=beforeState){//Debounce
    delay(50);
  }
  beforeState=buttonState;
  delay(1);       
}
