#include <Arduino.h>
#include <Servo.h>

/**
 * @file main.cpp
 * @brief MG995 Closed Loop Axis Control
 * @author Naitik Sharma
 * @date 2026-02-28
 */

Servo axisServo;
#define SERVO_PIN 9

void setup() {
    Serial.begin(9600);
    axisServo.attach(SERVO_PIN);
    Serial.println("MG995 Closed Loop Axis Started...");
}

void loop() {

    // TODO 7:
    // Sweep servo forward
    for (int angle = 0; angle <= 180; angle += 5) {
        axisServo.write(angle);
        delay(50);
    }

    // Sweep servo backward
    for (int angle = 180; angle >= 0; angle -= 5) {
        axisServo.write(angle);
        delay(50);
    }
}