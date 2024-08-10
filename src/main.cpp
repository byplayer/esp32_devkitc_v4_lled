#include <Arduino.h>

#if 1
static const uint8_t SENSOR_1 = 25;

void setup() {
  Serial.begin(115200);

  pinMode(SENSOR_1, ANALOG);
}

void loop() {
  Serial.println("read sensor");
  uint16_t v = analogRead(SENSOR_1);
  Serial.println(v);
  delayMicroseconds(2000000);
}
#else
#define LED_PIN 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ON");
  digitalWrite(LED_PIN, HIGH);
  delayMicroseconds(3000000);
  digitalWrite(LED_PIN, LOW);
  Serial.println("OFF");
  delayMicroseconds(3000000);
}
#endif
