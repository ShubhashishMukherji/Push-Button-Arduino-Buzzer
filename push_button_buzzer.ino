const int buttonPin = 2;
const int buzzerPin = 3;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    tone(buzzerPin, 1000);
  } else {
    noTone(buzzerPin);
  }
}
