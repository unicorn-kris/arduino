#include <TaskManagerIO.h>

int ledState1 = LOW;  // ledState used to set the LED
int ledState2 = LOW;  // ledState used to set the LED
int ledState3 = LOW;  // ledState used to set the LED
int ledState4 = LOW;  // ledState used to set the LED
int ledState5 = LOW;  // ledState used to set the LED
int ledState6 = LOW;  // ledState used to set the LED


void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  }

  const long interval1 = 100;  // interval at which to blink (milliseconds)
  const long interval2 = 2000;  // interval at which to blink (milliseconds)
  const long interval3 = 400000;  // interval at which to blink (milliseconds)
  const long interval4 = 800000;  // interval at which to blink (milliseconds)
  const long interval5 = 50000;  // interval at which to blink (milliseconds)
  const long interval6 = 1600000;  // interval at which to blink (milliseconds)

  taskid_t taskpin3 = taskManager.scheduleFixedRate(interval1, [] {
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    }
    else {
      ledState1 = LOW;
    }

    digitalWrite(3, ledState1);
  }, TIME_MICROS);

   taskid_t taskpin5 = taskManager.scheduleFixedRate(interval2, [] {
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    }
    else {
      ledState2 = LOW;
    }

    digitalWrite(5, ledState2);
  }, TIME_MICROS);

    taskid_t taskpin6 = taskManager.scheduleFixedRate(interval3, [] {
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    }
    else {
      ledState3 = LOW;
    }

    digitalWrite(6, ledState3);
  }, TIME_MICROS);

    taskid_t taskpin9 = taskManager.scheduleFixedRate(interval4, [] {
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    }
    else {
      ledState4 = LOW;
    }

    digitalWrite(9, ledState4);
  }, TIME_MICROS);

    taskid_t taskpin10 = taskManager.scheduleFixedRate(interval5, [] {
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    }
    else {
      ledState5 = LOW;
    }

    digitalWrite(10, ledState5);
  }, TIME_MICROS);

    taskid_t taskpin11 = taskManager.scheduleFixedRate(interval6, [] {
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    }
    else {
      ledState6 = LOW;
    }

    digitalWrite(11, ledState6);
  }, TIME_MICROS);

void loop() {
  taskManager.runLoop();
}