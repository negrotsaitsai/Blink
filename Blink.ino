

//先做的事
void setup() {
  
  pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
}

//不斷地做
void loop() {
  digitalWrite(12, HIGH);  
   digitalWrite(11, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW); 
  digitalWrite(11, HIGH);// turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
