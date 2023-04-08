#include <Servo.h>

void frente();
Servo rightfeet;
Servo leftleg;
Servo leftfeet;
Servo rightleg;  // create servo object to control a servo
int timeServo = 1000;  //

void setup() {
  rightfeet.attach(9);
  leftleg.attach(10);
  leftfeet.attach(11);
  rightleg.attach(12);

  //incialização
  rightfeet.write(0);
  leftleg.write(0);
}


void loop() {
  
  frente();                          // waits for the servo to get there
  
}

void frente(){

  rightfeet.write(65);                  // sets the servo position according to the scaled value
  delay(timeServo);
  leftleg.write(40);
  rightleg.write(0);  
  delay(timeServo);
  rightfeet.write(0);  
  delay(timeServo);
  leftfeet.write(65);
  delay(timeServo);
  rightleg.write(40);
  leftleg.write(0);
  delay(timeServo);                      // waits for the servo to get there
  leftfeet.write(0);                  // sets the servo position according to the scaled value
  delay(timeServo);
}

