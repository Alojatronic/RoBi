#include <Servo.h>


Servo myservo;  // create servo object to control a servo
int val;        // variable to read the value from the analog pin
int timeServo = 500;  //

void setup() {
  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
}


void loop() {
    // scale it to use it with the servo (value between 0 and 180)
  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there
  
}
