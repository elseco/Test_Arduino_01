#include <Arduino.h>
#include <Servo.h>

Servo srv = Servo();
int speed = 15;
int pos = 90;
void setup() {
  // put your setup code here, to run once:
  srv.attach(9);
  srv.write(pos);
}

void loop() {

  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    srv.write(pos);              // tell servo to go to position in variable 'pos'
    delay(speed);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    srv.write(pos);              // tell servo to go to position in variable 'pos'
    delay(speed);                       // waits 15 ms for the servo to reach the position
  }
}