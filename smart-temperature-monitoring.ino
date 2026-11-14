
#include "DHTesp.h"

const int DHT_PIN = 15;
const int RED_LED = 2;
const int GREEN_LED = 4;

DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  Serial.println("Smart Temperature Monitoring");
  Serial.println("System Started!");
}

void loop() {
  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  Serial.print("Temperature: ");
  Serial.print(data.temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(data.humidity);
  Serial.println(" %");

  if (data.temperature >= 30) {
    Serial.println("WARNING: HIGH TEMPERATURE");

    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  }
  else {
    Serial.println("Temperature is NORMAL");

    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  Serial.println("--------------------");

  delay(2000);
}
