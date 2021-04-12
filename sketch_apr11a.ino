int big=2;//腳位
int push=3;//腳位
int datain=4;//腳位
void setup() {
    pinMode(big,OUTPUT);
    pinMode(push,OUTPUT);
    pinMode(datain,OUTPUT);
}

void loop() {
  digitalWrite(big,LOW);
  one();
  zero();
  one();
  zero();
  one();
  zero();
  one();
  zero();
  one();
 
  digitalWrite(big,HIGH);
}
void one(){
  digitalWrite(push,LOW);
  digitalWrite(datain,1);
  digitalWrite(push,HIGH);
}
void zero(){
  digitalWrite(push,LOW);
  digitalWrite(datain,0);
  digitalWrite(push,HIGH);
}
