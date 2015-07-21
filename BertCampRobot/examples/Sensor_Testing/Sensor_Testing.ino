/*
The goal of this program is to test to make sure all the sensors are working
*/

#include <NewPing.h>
//create the variables for which pins the left and right ir sensors
//are wired too.
const unsigned int kLeftIRPin = 9;
const unsigned int kRightIRPin = 10;

//create the variables that describe how the ping distance sensor 
//is wired to the robot
const unsigned int kTrigPin = 3; 
const unsigned int kEchoPin = 11;
const unsigned int kMaxDistance = 200;

//create the sonar variable to get the distance from the ping sensor
NewPing sonar(kTrigPin, kEchoPin, kMaxDistance);

void setup() {
  // put your setup code here, to run once:
  
  //start the serial com with the computer
  Serial.begin(9600);
  
  //setup the ir sensor pins as digital inputs
  pinMode(kLeftIRPin, INPUT);
  pinMode(kRightIRPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //print of the values from the ir sensor
  Serial.print("Left IR: ");
  Serial.print(!digitalRead(kLeftIRPin));
  Serial.print(" Right IR: ");
  Serial.println(!digitalRead(kRightIRPin));
  
  
  //print the distance reading from the ping sensor
  //comment the lines above and uncomment the lines below
  //Serial.print("Distance in cm: ");
  //Serial.print(sonar.ping_cm());
  
  //delay for 30 ms to give time for the ping sensor to reset
  delay(30);

}
