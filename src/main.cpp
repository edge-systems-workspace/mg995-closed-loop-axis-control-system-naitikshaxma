#include <Arduino.h>
#include <Servo.h>

/**
 * MG995 Closed Loop Axis Control
 */

Servo axisServo;
#define SERVO_PIN 9

void setup() {

    // TODO 3:
    // Initialize Serial communication
    Serial.begin(9600);

    // TODO 4:
    // Attach servo to defined pin
    axisServo.attach(SERVO_PIN);

    Serial.println("MG995 Axis Control Initialized...");
}

void loop() {
}