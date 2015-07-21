/*
This is the code for the 2015 Bishop Eustace Robotics Summer camp.

*/

//libs:

#include <RedBot.h>
#include <NewPing.h>

//IR Sensors vars:

//create the variables for which pins the left and right ir sensors
//are wired too.
const unsigned int kLeftIRPin = 9;
const unsigned int kRightIRPin = 10;

//Driving vars:

//change these to fine tune how your robot follows the light
const int kForwardDriveSpeed = 200; //speed that robot goes once it sees the light
const int kSpinSpeed = 90; //the speed that the robot spins at to look for the ir light
const int kTurnSpeed = 150; //the speed that the robot turns with to align itself with the light


//create the motors variable to 
RedBotMotors motors;

void setup(){
 
 //start coms with the computer
 Serial.begin(9600);
 
 //setup the left and right ir pins as inputs
 pinMode(kLeftIRPin, INPUT);
 pinMode(kRightIRPin, INPUT);

}

void loop(){
  
  //read the IR sensor values
  boolean left = !digitalRead(kLeftIRPin);
  boolean right = !digitalRead(kRightIRPin);
    
  //both see nothing drive in a circle to look for the light
  if(!left && !right){
    
    motors.leftDrive(kSpinSpeed);
    motors.rightDrive(-kSpinSpeed);
    
  }
  
  //both see the light drive straight!
  else if(left && right){
    
    motors.drive(kForwardDriveSpeed);
    
  }
  
  //the left sees the light but not the right
  //slow down the left and speed up the right
  else if(left){
    motors.leftBrake();
    motors.rightDrive(kTurnSpeed);
  }
  
  //the right sees the light but the left does not
  //slow down the right and speed up the left
  else{
    motors.rightBrake();
    motors.leftDrive(kTurnSpeed);
  }
  
  
}


