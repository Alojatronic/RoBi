#include <Servo.h>


Servo myservo;  // create servo object to control a servo
int val;        // variable to read the value from the analog pin
int timeServo = 100;  //

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}


void loop() {
  val = map(90, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there
  val = map(0, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
}
