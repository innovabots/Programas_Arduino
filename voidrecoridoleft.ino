
#include <Servo.h>


int vuelta;

//motor
 int mena = 3;
 int pinIN1 = 6;
 int pinIN2 = 7;
 int pinIN3 = 8;
 int pinIN4 = 9;

 //servos
Servo Arthur;

//sensor distancia
const int tgr = 13; //pin triger : envia imagen
const int  echo = 12 ; //  pin echo :imagen leida
int dist;
int T;

 void avanzar(){ //sirve
   analogWrite(mena, 500);
   digitalWrite(pinIN1,HIGH);
   digitalWrite(pinIN2,HIGH);
   digitalWrite(pinIN3,HIGH);
   digitalWrite(pinIN4,HIGH);
   delay(1000);
   Serial.println("avanza");
}
  void stop(){ //ruedas no giran
   digitalWrite(pinIN1,LOW);
   digitalWrite(pinIN2,LOW);
   digitalWrite(pinIN3,LOW);
   digitalWrite(pinIN4,LOW);
}

void recorridoleft(){ 

    Serial.println("entro recorrido");

    for(int vuelta = 0; vuelta <= 3; vuelta = vuelta++)
    {
      Serial.println("entro for");
      //giro1
      avanzar();
      esquiva();
     // delay(800);
      Arthur.write(0);//servo gira izq
      Serial.println("Girarleft 180 grado ");
      delay(3000);//3s
      Arthur.write(85);//regresa angulo de origen 
      Serial.println("Giraright 85 grado ");
      //giro2
      avanzar();
      esquiva();
     // delay(800);
      Arthur.write(0);//servo gira izq
      Serial.println("Girarleft 180 grado ");
      delay(3000);//3s
      Arthur.write(85);//regresa angulo de origen 
      Serial.println("Giraright 85 grado ");
      //giro3
      avanzar();
      esquiva();
     // delay(800);
      Arthur.write(0);//servo gira izq
      Serial.println("Girarleft 180 grado ");
      delay(3000);//3s
      Arthur.write(85);//regresa angulo de origen 
      Serial.println("Giraright 85 grado ");
      //giro4
      avanzar();
      esquiva();
     // delay(800);
      Arthur.write(0);//servo gira izq
      Serial.println("Girarleft 180 grado ");
      delay(3000);//3s
      Arthur.write(85);//regresa angulo de origen 
      Serial.println("Giraright 85 grado ");
      //vuelta numero :"x"
      Serial.print("vuelta:"); 
      Serial.println(vuelta);
    }
void setup(){
  // put your setup code here, to run once:
  //DECLARANDO  LAS RUEDAS Y MOTOR COMO SALIDA +
   Serial.begin(9600);
   analogWrite(mena, OUTPUT);
   digitalWrite(pinIN1,OUTPUT);
   digitalWrite(pinIN2,OUTPUT);
   digitalWrite(pinIN3,OUTPUT);
   digitalWrite(pinIN4,OUTPUT);
   stop();
   
   
   //Servo ruedas
  Arthur.attach(11); 
   Arthur.Write(85); //Angulorigen

}

 void loop(){
  // put your main code here, to run repeatedly:
  recorridoleft();
  stop();

}
