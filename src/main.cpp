#include <Arduino.h>
#include <Stepper.h>

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
  Stepper stepper(512,8,9,10,11);
  stepper.setSpeed(10);
  // Stepper stepper(32,10,11,8,9);

  stepper.step(512 * 6);

  // while (1){
    // stepper.step(512);
    // stepper.step(-512);
  // }

}

void loop(){
}
