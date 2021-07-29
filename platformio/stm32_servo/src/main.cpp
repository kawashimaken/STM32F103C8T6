#include <Servo.h>
#include <Arduino.h>
int servoPin = PA0;
int potPin = PA3;

int servoAngle = 0;

Servo myServo;

void setup()

{
myServo.attach(servoPin);
}

void loop()
{

  for (int i=0; i <= 180; i++){
    servoAngle = (i);
    myServo.write(servoAngle);
    delay(10);
  } 
  delay(100);
  for (int i=180; i >= 0; i--){
    servoAngle = (i);
    myServo.write(servoAngle);
    delay(10);
  } 
  delay(1000);
}