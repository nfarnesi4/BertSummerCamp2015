/*
This is a simple program that do simple math


*/


//these are variables they are containers that store data and they have different types 
 int a = 2;
 int b = 3;
 int  answer; 
 //fun fact an int can only be a number from -32768 to 32768

void setup() {
  // put your setup code here, to run once:
  
  //start the com with the computer
  Serial.begin(9600);
  
  //time to do some math
  
  //Test 1
  
  //print to the computer a + b
  Serial.print("Test 1: a + b = "); //#1
  Serial.println(a + b); //#1
  
  
  //Test 2
  
  //here we do the same thing as above but now the variable answer
  //will equal a + b
   //answer = a + b;//#2 //note the variable on the left is where the value is stored! //#2
  //Serial.print("Test 2: answer =  "); //#2
  //Serial.println(answer); //#2
  
  //Test 3
  
  //the value that answer is equal to can change 
  answer = a-b;//leave this uncommented
  //Serial.print("Test 3: answer = "); //#3
  //Serial.println(answer); //#3
  
  //Test 4
  
  //we can also add one to answer
 // answer + 1; //#4 
  //Serial.print("Test 4: answer = "); //#4
 // Serial.println(answer); //#4
  
  //Test 5
  
  //notice that test 4 = test 3 well that doesn't make sense!
  //well anwer + 1 does nothing really to actually at one to answer
  //you must do this
  //answer = answer + 1;//#5
  //that seems like a lot of work to just add one
  //the shortcut to adding one to a number is comented below
  //uncoment the line below and then coment the line answer = answer +1; and test it again
  //answer++;
  //Serial.print("Test 5: answer = ");//#5
  //Serial.println(answer);//#5
  
  //mult and divide
  
  //here are some other thing a computer can compute
  // * means multiply and / means divide
  //lets see these in action
 
  //Serial.print("multiply = "); //multiply
  //Serial.println(a*b); //multiply

 //once you have ran it once change the
// numbers so that it doesn't divide evenly and see what happens
  //Serial.print("divide = "); //divide
  //Serial.println(15/2); //divide
  
  

}

void loop() {
  // put yourcode here, to run repeatedly
  
  
}
