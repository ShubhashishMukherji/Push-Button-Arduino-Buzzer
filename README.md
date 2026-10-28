# Push-Button Controlled Buzzer Using Arduino Uno

**Author:** Shubhashish Mukherji  
**Registration Number:** 26BEE0082
## Project Report

[View the Project Report on Google Docs](https://docs.google.com/document/d/1o9WEIm5Jr8YB-61Mg5aeEwLmq-Wff46Y3BhwePcsfmU/edit?usp=sharing)

## Overview
This project uses an Arduino Uno to operate a buzzer while a push button is held down. The buzzer stops when the button is released.

## Components
- Arduino Uno
- Push button
- Piezo buzzer
- Breadboard and jumper wires

## Circuit Connections

| Component | Arduino connection |
|---|---|
| Push button terminal 1 | Digital pin D2 |
| Push button terminal 2 | GND |
| Buzzer positive (+) | Digital pin D3 |
| Buzzer negative (−) | GND |

The push button should connect D2 to GND when pressed. The code uses `INPUT_PULLUP`, so no external pull-up resistor is required.

## Arduino Code
```cpp
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
```

## Working Principle
- `INPUT_PULLUP` makes the input HIGH when the button is released.
- Pressing the button connects D2 to GND, making the input LOW.
- When D2 is LOW, `tone(buzzerPin, 1000)` generates a 1000 Hz tone.
- When the button is released, `noTone(buzzerPin)` stops the tone on the next loop iteration.

## Simulation Evidence
Add screenshots of the running simulation to the `images/` folder:
1. `button-released.png` — button released and buzzer off.
2. `button-pressed.png` — button held down and buzzer on.

The circuit layout screenshots are included in this repository as references, but they do not by themselves demonstrate both live output states.

## Tinkercad Project
https://www.tinkercad.com/things/01SS0R6YXb6-ieee-task
