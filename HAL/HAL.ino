
int analogValue_3 = 0;
int analogValue_4 = 0;
int analogValue_5 = 0;

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  // Analog Input 3
  analogValue_3 = analogRead(3);
  Serial.print("A3=");
  Serial.print(analogValue_3);
  Serial.print(",");
        
  // Analog Input 4
  analogValue_4 = analogRead(4);
  Serial.print("A4=");
  Serial.print(analogValue_4);
  Serial.print(",");
        
  // Analog Input 5
  analogValue_5 = analogRead(5);
  Serial.print("A5=");
  Serial.print(analogValue_5);
  Serial.print(",");
        

  Serial.println("");
  delay(250);
}
