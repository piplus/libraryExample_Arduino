#include "ledCount.h"

ledCount lc;

int st = 0;

void setup() {
  Serial.begin(115200);
  pinMode(D4, OUTPUT);
  pinMode(D3, OUTPUT);
  // lc.ledswitch(D3,500,10);
  lc.ledCountMillis(D4,millis(),500,20);
  delay(2000);
  lc.ledCountMillis(D3,millis(),1500,10);
  delay(2000);
  lc.ledswitch(D4,3000,5);
}

void loop() {
}




