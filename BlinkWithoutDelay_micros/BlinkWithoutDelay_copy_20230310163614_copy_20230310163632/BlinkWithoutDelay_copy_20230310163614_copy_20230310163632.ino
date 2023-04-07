

// constants won't change. Used here to set a pin number:
const int ledPin = LED_BUILTIN;  // the number of the LED pin

// Variables will change:
int ledState1 = LOW;  // ledState used to set the LED
int ledState2 = LOW;  // ledState used to set the LED
int ledState3 = LOW;  // ledState used to set the LED
int ledState4 = LOW;  // ledState used to set the LED
int ledState5 = LOW;  // ledState used to set the LED
int ledState6 = LOW;  // ledState used to set the LED

// Generally, you should use "const long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;  // will store last time LED was updated
unsigned long previousMillis2 = 0;  // will store last time LED was updated
unsigned long previousMillis3 = 0;  // will store last time LED was updated
unsigned long previousMillis4 = 0;  // will store last time LED was updated
unsigned long previousMillis5 = 0;  // will store last time LED was updated
unsigned long previousMillis6 = 0;  // will store last time LED was updated

// constants won't change:
const long interval1 = 100000;  // interval at which to blink (milliseconds)
const long interval2 = 200000;  // interval at which to blink (milliseconds)
const long interval3 = 400000;  // interval at which to blink (milliseconds)
const long interval4 = 800000;  // interval at which to blink (milliseconds)
const long interval5 = 50000;  // interval at which to blink (milliseconds)
const long interval6 = 160000;  // interval at which to blink (milliseconds)

const long currentMillis = micros();


void setup() {
  // set the digital pin as output:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {

unsigned long time = micros(); 

  if (time - previousMillis1 >= interval1)  {
    // save the last time you blinked the LED
    previousMillis1 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(11, ledState1);
  }

  if (time - previousMillis2 >= interval2)  {
    // save the last time you blinked the LED
    previousMillis2 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(10, ledState2);
  }

  if (time - previousMillis3 >= interval3)  {
    // save the last time you blinked the LED
    previousMillis3 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(9, ledState3);
  }

  if (time - previousMillis4 >= interval4)  {
    // save the last time you blinked the LED
    previousMillis4 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(6, ledState4);
  }

  if (time - previousMillis5 >= interval5)  {
    // save the last time you blinked the LED
    previousMillis5 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(5, ledState5);
  }

  if (time - previousMillis6 >= interval6)  {
    // save the last time you blinked the LED
    previousMillis6 = time;

    // if the LED is off turn it on and vice-versa:
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(3, ledState6);
  }
}
