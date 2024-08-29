int gas = A0;
void setup(){
  pinMode(gas,INPUT);
  Serial.begin(9600);
}
void loop(){
  int A=analogRead(gas);
  Serial.println(A);
  delay(1000);
}
