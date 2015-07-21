//In this program we will be using functions.
//Functions allow you to use pieces of code 
//over and over again in different parts of
//your program

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  //Test 1
  
  //In this test we will be using the printHello
  //function below to printHello
  Serial.print("Test 1: ");//#1
  printHello();//#1
 
 //Test 2

  //In this test we will be using the
 //printHelloManyTimes function. This
 // function has one input which is the
  //number of times you want to print hello
 
 //Serial.println("Test 2: ");//#2
 //printHelloManyTimes(10); //#2
 //change the number to what ever you want
 //and see what happen (no negatives)
 
 //Test 3
 
 //in this test we will us a function with
 //two inputs. The first is the number of times
 //the second is your name
 //Serial.println("Test 3: ");//#3
 //fill in your name and the number of times
 //you want to say it
 //printYourNameManyTimes(12, "your Name Here");//#3
 
 //you can use the function over and over again
 
 //printYourNameManyTimes(3, "your Name Here");//#3
 
 
 //test 4
 
 //In this test we will be using the addTen
 //function to in order to show how functions
 //can return data
 //Serial.print("Test 4: ");//#4
 //int result = addTen(16);//#4
// Serial.println(result);//#4
 
  //functions can return any data type
  //you just have to specifiy which
  //for example
  
  /*
  String function1(){
    
   return "whats up"; 
  }
  
  boolean function2(){
    
   return true ;
  }
  
  */
  
  //Now write your own function at the very
  //bottom. Name it testFunction and
 // make it return true if the input is
// 12 and false if it is anything else  
//once you think you have it uncoment the
//lines below to see if its right


//Serial.print("Should be 1: ");
//Serial.println(testFunction(12));
//Serial.print("Should be 0: ");
//Serial.println(testFunction(152));



}

void loop() {
  // put your main code here, to run repeatedly: 
  
}









void printHello(){
  Serial.println("Hello");
  
}

void printHelloManyTimes(int numberOfTimes){
 for(int i = 1; i <= numberOfTimes; i++){
   Serial.println("Hello");
 }
 
}  
  
void printYourNameManyTimes(int numberOfTimes, String yourName){
   for(int i = 1; i <= numberOfTimes; i++){
   Serial.println(yourName);
 }
 
  
}

int addTen(int num){
  int answer = num + 10;
  return answer;
}

//here is where you should write your own 
//function called testFunction


  

