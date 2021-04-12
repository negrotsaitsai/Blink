void setup() {

pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  delay(10000);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  delay(5000);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  delay(10000);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(5000); 
}
