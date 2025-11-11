int led = 9;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    int x = Serial.parselnt();
    if (x >= 0 and x <= 100) {
      analogWrite(led, x * 2.55);
    }
  }
}
