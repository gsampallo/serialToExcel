int sensorPin = A0;
int ledPin = 13;  
int sensorValue = 0; 

void setup() {
  Serial.begin(115200);
}

int i = 0;
void loop() {
  
  sensorValue = analogRead(sensorPin);
  Serial.print(i);
  Serial.print(",");
  Serial.print(sensorValue);
  Serial.println(";");
  i = i + 1;

  delay(10);
}
