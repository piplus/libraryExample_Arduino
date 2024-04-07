#include <Arduino.h>

#ifndef led
#define led


class ledCount {
  public:
    int st = 0;

    ledCount();

    void ledswitch(int pin, int t, int count);
    void ledCountMillis(int pin,int setTime,int time,int count);

  private:
};



#endif