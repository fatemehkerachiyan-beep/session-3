int hed1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int unsigned long randNumber;
int val, i = 0;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  for (i = 2 ; i <= 7 ; i++ ) {
    pinMode(i , OUTPUT);
  }
}
void loop() {
  randNumber = random(2, 8);
  Serial.print("randNumber=");
  Serial.println(randNumber - 1);
  for (int i = 2 ; i <= randNumber ; i++) {
    digitalWrite(i, HIGH);
  }
  while (1);
}
