#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(2);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  pinMode(1, INPUT_PULLDOWN);
  sensors.begin();
}

void loop() {
  int presence = digitalRead(1);
  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);

  Serial.print("P:");
  Serial.print(presence);
  Serial.print(" T:");
  Serial.println(temp);

  delay(1000);
}