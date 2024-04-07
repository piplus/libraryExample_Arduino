#ifndef t1
#define t1

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class TestLib{
  public:
    TestLib(bool displayMsg=false);

    long getRandomNumber();
  
  private:

};

#endif