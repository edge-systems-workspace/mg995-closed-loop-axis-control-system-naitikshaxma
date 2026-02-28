#include <Arduino.h>
#include <Servo.h>

Servo axisServo;
#define SERVO_PIN 9

void setup() {
    Serial.begin(9600);
    axisServo.attach(SERVO_PIN);
    Serial.println("MG995 Axis Control Initialized...");
}

void loop() {

    // TODO 5:
    // Move servo to 0 degrees
    axisServo.write(0);
    Serial.println("Axis Position: 0°");
    delay(2000);

    // TODO 6:
    // Move servo to 90 degrees
    axisServo.write(90);
    Serial.println("Axis Position: 90°");
    delay(2000);
}