/*

This challenge has a lot of new stuff in it. It will require 
you to light the light or LED on the board when the button is pressed 

when the button is pressed  digitalRead(BUTTON_PIN) == HIGH should be true

to turn On the led you need to digitalWrite(LED_PIN, HIGH);

to turn off the led you need to  do a digitalWrite(LED_PIN, LOW);

do everything in the loop part of the program

*/


// Create an alias for the onboard pushbutton.
#define BUTTON_PIN 12

// Create an alias for the onboard LED.
#define LED 13






void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  // Set up the button and the LED.
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  
  //don't put any code here
  
  
  

}

void loop() {
  // put your main code here, to run repeatedly: 
  //Start here
  
  //Is the button pressed? (BUTTON_PIN) != HIGH)
  
  
  //if yes set the led high
  
  
  //else set the led low
  
  
  
}
