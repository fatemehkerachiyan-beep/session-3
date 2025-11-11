int ledPin = 9;
int val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(A0);
  analogWrite(ledPin, val / 4);
  Serial.print(val);
}
