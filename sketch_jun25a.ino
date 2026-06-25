#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11);
char cmd;
int leftForward = 7;
int leftBackward = 6;
int rightForward = 4;
int rightBackward = 5;

void setup() {
  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);
  BT.begin(9600);
}
void loop() {
  if (BT.available()) {
    cmd = BT.read();
    if (cmd == 'f') {  // Forward
      digitalWrite(leftForward, HIGH);
      digitalWrite(leftBackward, LOW);
      digitalWrite(rightForward, HIGH);
      digitalWrite(rightBackward, LOW);
    }
    if (cmd == 'b') {  // Backward
      digitalWrite(leftForward, LOW);
      digitalWrite(leftBackward, HIGH);
      digitalWrite(rightForward, LOW);
      digitalWrite(rightBackward, HIGH);
    }
    if (cmd == 'l') {  // Left
      digitalWrite(leftForward, LOW);
      digitalWrite(leftBackward, HIGH);
      digitalWrite(rightForward, HIGH);
      digitalWrite(rightBackward, LOW);
    }
    if (cmd == 'r') {  // Right
      digitalWrite(leftForward, HIGH);
      digitalWrite(leftBackward, LOW);
      digitalWrite(rightForward, LOW);
      digitalWrite(rightBackward, HIGH);
    }
    if (cmd == 'w') {  // Stop
      digitalWrite(leftForward, LOW);
      digitalWrite(leftBackward, LOW);
      digitalWrite(rightForward, LOW);
      digitalWrite(rightBackward, LOW);
    }
  }
}