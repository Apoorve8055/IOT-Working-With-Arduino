//install DHT sensor library 1.2.3V

#include <DHT.h>

DHT dht(8,DHT22);
float humidity;
float Temerature;

void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {
 humidity = dht.readHumidity();
 Temerature = dht.readTemperature();
 Serial.print("\n humidity : ");
 Serial.print(humidity);
 Serial.print("% ,Temerature : ");
 Serial.print(Temerature);
 delay(2000);
}