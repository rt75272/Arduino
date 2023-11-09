/*
Button

When the button is pressed the LED lights up 
until the button is released.

 http://www.arduino.cc/en/
 */

// Constants to set pin numbers:
const int buttonPin = 2;     // Button pin number.
const int ledPin =  13;      // LED pin number.

int buttonState = 0;         // Variable for reading the button status.

void setup() {
  pinMode(ledPin, OUTPUT);   // Initialize the LED pin as output.
  pinMode(buttonPin, INPUT); // Initialize the button pin as input.
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button value.

  // Check if the pushbutton is pressed.
  // If pressed, the buttonState is HIGH.
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on.
  } 
  else {
    digitalWrite(ledPin, LOW);  // Turn LED off.
  }
}