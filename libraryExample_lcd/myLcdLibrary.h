
#include <Arduino.h>

#ifndef lcdismine
#define lcdismine

class mylcd {
  public:
    mylcd();
    void lcdsetup();
    void lcdPrint(int col,int row,String message);
    void lcdClear();

  private:

};


#endif