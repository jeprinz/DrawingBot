#include <Arduino.h>

class Coil{
public:
  Coil(int port1, int port2){
    mPort1 = port1;
    mPort2 = port2;
    pinMode(mPort1, OUTPUT);
    pinMode(mPort2, OUTPUT);
  }
  void on1(){
    digitalWrite(mPort1, 1);
    digitalWrite(mPort2, 0);
  }
  void on2(){
    digitalWrite(mPort1, 0);
    digitalWrite(mPort2, 1);
  }
  void off(){
    digitalWrite(mPort1, 0);
    digitalWrite(mPort2, 0);
  }
private:
  int mPort1;
  int mPort2;
};


void setup(){
  Serial.begin(9600);
  Coil coil1(8,9), coil2(10,11);

  while(1){
    // coil1.on1();
    coil2.on1();
    delay(50);
    // coil1.on2();
    coil2.on2();
    delay(50);
  }
}

void loop(){
}
