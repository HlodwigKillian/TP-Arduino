int leds[] = {0, 1, 2, 3, 4};
int numberOfLeds = sizeof(leds);

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < numberOfLeds; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j = 0; j < numberOfLeds; j++) {
    digitalWrite(j, HIGH);
    delay(1000);
    digitalWrite(j, LOW);
  }
}
