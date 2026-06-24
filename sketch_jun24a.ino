#include <DHT.h>

#define DHT_PIN   2
#define RELAY_PIN 8   

DHT dht(DHT_PIN, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);  
}

void loop() {
    float temp = dht.readhumidity();


  if (isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(1000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  if (temp > 30) {
    digitalWrite(RELAY_PIN, HIGH);  
    Serial.println("Status: LED ON (Temp > 30°C)");
  } else {
    digitalWrite(RELAY_PIN, LOW);   
    Serial.println("Status: LED OFF");
  }

  delay(1000);
}