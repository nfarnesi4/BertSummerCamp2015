//loops help you do things over and over again
//there are two types of loops 
//the while loop and the for loop

boolean forever = false;//#5 change this value for test five

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  //test 1
  
  //lets say you want to print hello
  //four times. You could do this
  Serial.println("Test 1: ");//#1
  Serial.println("Hello number 1");//#1
  Serial.println("Hello number 2");//#1
  Serial.println("Hello number 3");//#1
  Serial.println("Hello number 4");//#1
  //this works but there is a better way
  
  //test 2
  
  //Serial.println("Test 2: ");//#2
  //test 1 worked but there is a much better
  //way to do this. Its called a for loop
  //and it looks something like this
 // int numberOfTimes = 4;//#2
  //for(int i = 1; i <= numberOfTimes; i++)//#2
  //  {//#2
      //anything in here will run numberOfTimes
      //times
  //    Serial.print("Hello number ");//#2
 //     Serial.println(i);//#2
    
  //  }//#2
  //change the value of numberOfTimes and see
  //what happens
  
  //test 3
  
  //in a while loop 
 //Serial.println("Test 3: ");//#3
 // int x = 0;//#3
 // while(x <= 25)//#3
 // {//#3
  //  x = x + 5;//#3
  //}//#3

  //test 4
  
  //another example of a while loop
  
 // Serial.println("Test 4:");//#4
  
 //boolean notTen = true;//#4
 //int num = 0;//#4
 
 
 //while(notTen){//#4
   //Serial.print("num = ");//#4
   //Serial.println(num);//#4
   //num++; //num = num + 1;//#4
     //if(num == 10){//#4
      // notTen = false; //#4
     //}//#4
 //}/#4
  
  //test 5
  
  //in this test we will use the infinite 
  //loop to say hello forever
  
  //Serial.println("Test 5: ");//#5
    //to do this you will need to change
    //the value of the variable
    
}

void loop() {
  // put your main code here, to run repeatedly: 
  if(forever){
   Serial.println("Hello"); 
    
  }
}
