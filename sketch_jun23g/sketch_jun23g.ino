int sensor =8;
int value;
void setup() {
pinMode(sensor,INPUT);
Serial.begin(9600);
}



void loop() {
value=digitalRead(sensor);
Serial.println(value);
delay(100);
}
