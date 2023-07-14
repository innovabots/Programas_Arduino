//servo Arthur
#include <Servo.h>

Servo Arthur;

void setup() {
  // put your setup code here, to run once:
  Arthur.attach(11);
  Arthur.write(90); //90 grados, originalmente

}

void loop() {
  // put your main code here, to run repeatedly:
  Arthur. write (180); //izq
  delay(1000);         //1s
  Arthur.write(90);  ///recto
  delay(3000);  //3s
  Arthur.write(0);   //der
  delay(1000);  //1s
  Arthur.write(90);  //recto
  delay(3000);  //3s
}
