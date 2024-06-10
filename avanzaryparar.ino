//girar rigth

#include <Servo.h>
int vuelta;
int nuevaVariable;
int variavlenum2;
//motor
 int mena = 3;
 int pinIN1 = 6;
 int pinIN2 = 7;
 int pinIN3 = 8;
 int pinIN4 = 9;
 //servos
Servo Arthur;

void avanzar(){
   analogWrite(mena, 500);
   digitalWrite(pinIN1,HIGH);
   digitalWrite(pinIN2,HIGH);
   digitalWrite(pinIN3,HIGH);
   digitalWrite(pinIN4,HIGH);
   delay(1000);
   Serial.println("avanza");
}
 void stop(){
  digitalWrite(pinIN1,LOW);
  digitalWrite(pinIN2,LOW);
  digitalWrite(pinIN3,LOW);
  digitalWrite(pinIN4,LOW);
 }
void setup() {
  // put your setup code here, to run once:
  Serial.begin(11560);
   analogWrite(mena, OUTPUT);
   digitalWrite(pinIN1,OUTPUT);
   digitalWrite(pinIN2,OUTPUT);
   digitalWrite(pinIN3,OUTPUT);
   digitalWrite(pinIN4,OUTPUT);
   stop();

}

void loop() {
  // put your main code here, to run repeatedly:
  avanzar();
  Serial.println("avanza 1");
  delay(5000);//avanza 5s


  stop();
  Serial.println("para 2s");
  delay(2000);//para 2s

  avanzar();
  Serial.println("avanza 2");
  delay(5000); //avanza 5s

  stop();
  Serial.println("terminó");
}
