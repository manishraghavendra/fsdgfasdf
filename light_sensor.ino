int light_pin = 5;
void setup() {
  pinMode(light_pin,INPUT);
  Serial.begin(9600);
}
void loop() {
  int light_data = digitalRead(light_pin);
  if(light_data)
  Serial.println("light not detected!!!");
  else
   Serial.println("light detected!!!");
  delay(1000);
}
