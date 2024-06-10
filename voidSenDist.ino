//sensor distancia
const int tgr = 13; //pin triger : envia imagen
const int  echo = 12 ; //  pin echo :imagen leida
int dist;
int t;

void SenDist(){
    long T; //tiempo que tarda en llegar echo
    long dist; //distancia cm
    digital.Write(tgr, HIGH);
    delay(2000);//2s
    digital.write(tgr, LOW);
    T = pulseIn(echo, HIGH)
    dist =T/59;
    
    Serial.print("Distancia:");
    Serial.print(dist); //Enviamos serialmente el valor de la distancia
    Serial.print("cm");
    Serial.println();
    delay(100);
  }
void setup() {
  // put your setup code here, to run once:
  //Sensor
  pinMode(tgr, OUTPUT); //SALIDA
  pinMode(echo, INPUT); //ENTRADA
  digitalWrite(tgr, LOW); //inicializa pin con 0

   //sensor
  long T; //tiempo que tarda en llegar echo
  long dist; //distancia cm

}

void loop() {
  // put your main code here, to run repeatedly:
  SenDist();
}
