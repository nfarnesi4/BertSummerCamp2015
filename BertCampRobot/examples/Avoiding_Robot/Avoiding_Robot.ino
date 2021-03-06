#include <RedBot.h>
#include <NewPing.h>

//create the variables that describe how the ping distance sensor 
//is wired to the robot
const unsigned int kTrigPin = 3; 
const unsigned int kEchoPin = 11;
const unsigned int kMaxDistance = 200;
const unsigned int kNumOfPingsPerAvg = 3; //how many pings will happen before we take an averge of them
const unsigned int kTurnDistance = 7; //the distance (inches) from an object when the robot will start to turn

const int kTurnSpeed = 150; // the turn speed when the robot needs to avoid something 
const int kDriveSpeed = 160; //the speed the robot will go when not avoiding things

//create the sonar variable to get the distance from the ping sensor
NewPing sonar(kTrigPin, kEchoPin, kMaxDistance);

RedBotMotors motors;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //get the distance from the ping sensor in inches
  int distance = sonar.convert_in(sonar.ping_median(kNumOfPingsPerAvg));

  //check to see if we are too close to something (distance is less than or equal to KTurnDistance)
  
    //if it is less then we want to turn by seting the right motor to -kTurnSpeed
    //and the left to kTurnSpeed

    //otherwise we need to drive forward at kDriveSpeed


  
  

}
