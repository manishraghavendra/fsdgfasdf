#include<dht.h>
dht DHT;
#define DHT11_PIN 4 void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int chk=DHT.read11(DHT11_PIN);
  Serial.print("Temperature=");
  Serial.println?(DHT.temperature);
  Serial.print("humidity=");
  Serial.println(DHT.humidity);
  delay(2000);
}
