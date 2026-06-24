int b=A0;
int val=0;
int led=9;
int bt;
void setup() {
pinMode(b,INPUT_PULLUP);
pinMode(led,OUTPUT);
Serial.begin(9600);
  
}

void loop() {
  val = analogRead(b);
  Serial.println(val);
 bt = map(val,0,1023,0,255);
    analogWrite(led,bt);
  
  delay(100);

}
