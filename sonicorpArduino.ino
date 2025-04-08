#include "Ultrasonic.h"

int pinoTrigger = 12;
int pinoEcho = 13;
HC_SR04 sensor(pinoTrigger, pinoEcho);

void setup(){
  Serial.begin(9600);
}

void loop(){
  float distancia = sensor.distance();

  if (distancia > 10){
    Serial.println(0);
  } else{
    Serial.println(1);
  }

  delay(1000);
}
