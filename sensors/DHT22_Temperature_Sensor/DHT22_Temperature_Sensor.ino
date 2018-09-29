#include "DHTesp.h"
 
DHTesp dht;
#define DHTPIN 7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
 
void setup()
{
  Serial.begin(9600);
  dht.setup(DHTPIN, DHTesp::DHTTYPE);
}

void loop()
{
  TempAndHumidity measurement = dht.getTempAndHumidity();

  Serial.print("Temperature: ");
  Serial.println(measurement.temperature);

  Serial.print("Humidity: ");
  Serial.println(measurement.humidity);

  delay(2000);
}
