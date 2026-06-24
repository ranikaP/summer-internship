int led1 = 13;
int led2 = 8;
int led3 = 3;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  
}

void loop() {
  digitalWrite(led1,1);
  delay(1000);
  digitalWrite(led1,0);

  digitalWrite(led2,1);
  delay(1000);
  digitalWrite(led2,0);
 

  digitalWrite(led3,1);
   delay(1000);
  digitalWrite(led3,0);

  
}

