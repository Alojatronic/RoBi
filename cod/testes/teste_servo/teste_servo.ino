#include <Servo.h>


Servo myservo;  // create servo object to control a servo
<<<<<<< HEAD
int val;        // variable to read the value from the analog pin
int timeServo = 500;  //
=======
int val1=90;        // variable to read the value from the analog pin
int val2=0;        // variable to read the value from the analog pin

int timeServo = 1000;  //
>>>>>>> 942f41d35672abdd07dfde0a8eb394057edf6701

void setup() {
  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
}

void loop() {
<<<<<<< HEAD
    // scale it to use it with the servo (value between 0 and 180)
  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(0);                  // sets the servo position according to the scaled value
=======
  myservo.write(val1);                  // sets the servo position according to the scaled value
  delay(timeServo);                           // waits for the servo to get there
  myservo.write(val2);                  // sets the servo position according to the scaled value
>>>>>>> 942f41d35672abdd07dfde0a8eb394057edf6701
  delay(timeServo);                           // waits for the servo to get there
}
