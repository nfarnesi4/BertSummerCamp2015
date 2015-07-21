//This code example will look at if statments which are used to compare variables
/*
Here is a chart that will help you during this lesson
1 == 1 : true
1 == 0 : false
1 < 1  : false
1 <= 1 : true
1 > 0  : true
1 > 2  : false
1 != 1 : false
1 != 10: true

one = true

!one = false

//hint this will be helpful for the practice programs

% gives you the remainder of one number divided into another

15 % 3 = 0 
15 % 4 = 3 (3*4 =12 15-12 = 3)
12 % 2 = 0
12 % 10 = 2

*/

void setup() {
  // put your setup code here, to run once:
  //begin com with the computer
  Serial.begin(9600);
  int a,b,c,d;
  a = 10;
  b = 10;
  c = 15;
  d = 25;
  
  boolean isSunny, isRaining, isHungry, one, zero;
  one = true;
  zero = false;
  
  //test 1
  
  //in this test we will look at the ==
  //it can tell us if number are equal look at
  //the table at the top of the program for others
  //like it
  
  //Notice that in Test 1 when the computer prints a 1 
  //it means true and when it prints a 0 it means false
  Serial.print("Test 1: a == 10 = "); //#1
  Serial.print(a == 10); //#1
  Serial.print(" a == c = "); //#1
  Serial.println(a == c); //#1
  
  //test 2
  
  //In this test we will look at if statments 
  //They are pretty easy to understant because
  //they are just like real life
  
  //If it's sunny then I will go to my friends house
  
  //in that case wheather or not it's sunny is the condition
  //and if you go to your friends house is the result
  //lets try it in code:
  
  //Serial.print("Test 2: "); //#2
  
  //isSunny = false; //yes it is sunny //#2
 // if(isSunny){ //#2
    //the code inside the {} will only run if isSunny = true
  //  Serial.println("you are going to your friends house!"); //#2
 // }
  
  //but what if it is not sunny?
  //change the isSunny boolean to false and run this again
 
 //test 3
 
 //ok thats great when there are only two states 
 //sunny and not sunny but what if there are more?
 //lets say if it is raining then you will check the weather
 //if it's sunny you will go to your friends house
 //and if it's not sunny or raining you will go on the computer
 //Serial.print("Test 3: "); //#3
 //isSunny = false; //#3
 //isRaining = false; //#3
  //if(isSunny){ //#3
     //Serial.println("You are going to your friends house again!"); //#3
  //} //#3
  //this will only be checked if the if statement 
  //above doesn't work. You can have as many 
  //else ifs as you want
  //else if(isRaining){ //#3
   // Serial.println("You better check the weather!"); //#3
    
 // }//#3
  //the else runs if everthing fails
 // else {//#3
    //Serial.println("Go on the computer"); //#3
 // }//#3
  //change the values of isSunny and isRaining
  //and see the result

  //test 4
  
  //Now lets get a little more detailed
  //When you go to your friends house you will
  //need to check if your hungry
  //if you are you will eat and if your not you won't eat
  //there are also other conditions
  
   //Serial.print("Test 4: "); //#4
 //isSunny = true; //#4
 //isRaining = false; //#4
 //isHungry = true; //#4
  //if(isSunny){ //#4
    // Serial.print("You are going to your friends house again! "); //#4
     //now that your are at your friends
     //house we need to see if your hungry
     //if(isHungry){ //#4
       //Serial.println("Go out and eat something with your friend!"); //#4
     //}//#4
    // else {//#4
     // Serial.println("You're full don't eat anymore!"); //#4 
    // }//#4
 // }//#4
  //this will only be checked if the if statement 
  //above doesn't work. You can have as many 
  //else ifs as you want
  //else if(isRaining){ //#4
   // Serial.println("You better check the weather!"); //#4
    
    //if(isHungry){ //#4
      // Serial.println("Eat inside it's raining!"); //#4
     //}//#4
    // else {//#4
    //  Serial.println("You're full don't eat anymore!"); //#4 
    // }//#4
    
 // }//#4
  //the else runs if everthing fails
  //else {//#4
   // Serial.println("Go on the computer"); //#4
   //  if(isHungry){ //#4
       //Serial.println("Order some pizza"); //#4
    // }//#4
    // else {//#4
    //  Serial.println("You're full don't eat anymore!"); //#4 
     //}//#4
  //}//#4
  //change the values of isSunny, isRaining and isHungry
  //and see the result
  
  //the main thing to ge out of test 4 is
  //that the hungry code is different depending
  //on what the weather is
 
}

void loop() {
  // put your main code here, to run repeatedly: 
  
}
