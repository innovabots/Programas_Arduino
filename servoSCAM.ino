#include <Servo.h>

Servo SCAM;


void setup() {
  // put your setup code here, to run once:
  SCAM.attach(10);
  SCAM.Write(90);//angulo de origen
}

void loop() {
  // put your main code here, to run repeatedly:
  SCAM.Wite(180);//izq
  delay(1000);    //1s
  SCAM.Wite(90);// centro
  delay(3000);    //3s
  SCAM.Wite(0);// der
  delay(1000);    //1s
  SCAM.Wite(90);// centro
  delay(3000);    //3s
}
