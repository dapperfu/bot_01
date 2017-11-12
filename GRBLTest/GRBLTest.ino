
int A = 0;

void setup() {
  for (int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);
  }

  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(2, 0);
  digitalWrite(2, 1);
  delay(1);
}
