#include <Servo.h>


Servo myservo;  // create servo object to control a servo
int val1=90;        // variable to read the value from the analog pin
int val2=0;        // variable to read the value from the analog pin

int timeServo = 1000;  //

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(val1);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there
  myservo.write(val2);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there
}
