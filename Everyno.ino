#include <FastCapacitiveSensor.h>
FastCapacitiveSensor sensor1;
FastCapacitiveSensor sensor2;
FastCapacitiveSensor sensor3;
FastCapacitiveSensor sensor4;
FastCapacitiveSensor sensor5;
FastCapacitiveSensor sensor6;
FastCapacitiveSensor sensor7;
FastCapacitiveSensor sensor8;

#define buzzer 11

void setup() {
  pinMode(12, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  Serial.begin(9600);
  sensor1.begin(A0, A1, 5.0, 10, 10, 0.2);
  sensor2.begin(A1, A3, 5.0, 10, 10, 0.2);
  sensor3.begin(A2, A3, 5.0, 10, 10, 0.2);
  sensor4.begin(A3, A3, 5.0, 10, 10, 0.2);
  sensor5.begin(A4, A3, 5.0, 10, 10, 0.2);
  sensor6.begin(A5, A3, 5.0, 10, 10, 0.2);
  sensor7.begin(A6, A3, 5.0, 10, 10, 0.2);
  sensor8.begin(A7, A3, 5.0, 10, 10, 0.2);

  Serial.begin(9600);
}

void loop() {
  if (sensor1.touch() > 1000) {
    Do();
    Serial.println("Do: " + String(sensor1.touch()));
  } else if (sensor2.touch() > 1000) {
    Re();
    Serial.println("Re: " + String(sensor2.touch()));
  } else if (sensor3.touch() > 1000) {
    Mi();
    Serial.println("Mi: " + String(sensor3.touch()));  
  } else if (sensor4.touch() > 1000) {
    Fa();
    Serial.println("Fa: " + String(sensor4.touch()));  
  } else if (sensor5.touch() > 1000) {
    Sol();
    Serial.println("Sol: " + String(sensor5.touch()));  
  } else if (sensor6.touch() > 1000) {
    La();
    Serial.println("La: " + String(sensor6.touch()));  
  } else if (sensor7.touch() > 1000) {
    Si();
    Serial.println("Si: " + String(sensor7.touch()));  
  } else if (sensor8.touch() > 1000) {
    DO();
    Serial.println("DO: " + String(sensor8.touch()));
  } else {  
    noTone(buzzer);
  }

}

void Do(){
  tone(buzzer,262); //Frekuensi nada DO
}
void Re(){
  tone(buzzer,294);
}
void Mi(){
  tone(buzzer,330);
}
void Fa(){
  tone(buzzer,349);
}
void Sol(){
  tone(buzzer,395);
}
void La(){
  tone(buzzer,440);
}
void Si(){
  tone(buzzer,494);
}
void DO(){
  tone(buzzer,523);
}
void Diam(){
  noTone(buzzer);
}