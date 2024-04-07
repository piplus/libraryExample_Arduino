#include "TestLibrary.h"

TestLib::TestLib(bool displayMsg) {
  
}


long TestLib::getRandomNumber() {
  unsigned long specialNumber = random(5,1000);

  specialNumber *= PI;
  specialNumber -= 5;
  return specialNumber;
}