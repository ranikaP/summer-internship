#include <SoftwareSerial.h>
SoftwareSerial BT(10,11);

 char C;
 void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  BT.begin(9600);
 }

void loop() {
  if(BT.available()){
    C=BT.read();
  Serial.print(C);
  if (C=='a'){
    digitalWrite(13,1);
  }
  else if(C=='b'){
     digitalWrite(13,0);
  }
}
}