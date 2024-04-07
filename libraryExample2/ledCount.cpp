#include "ledCount.h"



ledCount::ledCount(){
  
}

void ledCount::ledswitch(int pin, int t, int count) {
  int c= 0;
  for(int i=0; i < count + count ; i++){
    st = !st;
    digitalWrite(pin, st);
    if(st == 1){
      c++;
      Serial.println(c);
    }
    delay(t);
  }
}

void ledCount::ledCountMillis(int pin,int setTime,int time,int count){
  int timer = setTime;
  int c= 0;
  for(;;){
    if(millis() - timer >= time){
      st = !st;
      digitalWrite(pin,st);
      if(st == 1){
        c++;
        Serial.println(String(pin)+" : "+String(c+1));
      }
      if(c >= count){
        digitalWrite(pin,LOW);
        c = 0;    
        break;
      }
      timer = millis();
    }
    delay(1);
  }

}