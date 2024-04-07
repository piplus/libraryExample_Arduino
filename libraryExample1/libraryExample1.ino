#include "TestLibrary.h"


TestLib tb(true);



void setup() {
  Serial.begin(115200);
  

}

void loop() {
  long rndNo = tb.getRandomNumber();
  Serial.println(rndNo);

  delay(2000);


}

