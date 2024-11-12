int buzzer_pin=9;
void setup() {
 pinMode(buzzer_pin,OUTPUT);
 Serial.begin(9600);
 digitalWrite(buzzer_pin,HIGH);

}

void loop() {
digitalWrite(buzzer_pin,LOW);
delay(500);
digitalWrite(buzzer_pin,HIGH);
delay(500


);

}
