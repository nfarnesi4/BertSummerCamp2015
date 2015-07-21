//this program will show you some other vars and explain what there function is




String name;
void setup() {
  // put your setup code here, to run once:
  //begin com with the computer
  Serial.begin(9600);
  
  //so far we only used whole number (no decimal point)
  //and if you divide two ints the value was sometimes rounded
  //the solution is a double
  
  //here's and example
 
  double a = 1.5;
  double b = 2;
  
  
  //Test 1
  
  //in test one we print the result of double a times double b
  
   double answer = a * b;//#1
   Serial.print("Test 1: a*b = ");//#1
   Serial.println(answer);//#1
  
  //Test 2
  
  //in test two we will use a new var called a boolean
  
  //numbers are great but what if i want to have a var with only
  //two different states like on or off
  //we for that there is a var called a boolean which can be true or false
  
  //boolean on = true;//#2
  //boolean off = false;//#2
  
  //Serial.print("Test 2: on = ");//#2
  //Serial.print(on);//#2
  //Serial.print(" off = ");//#2
  //Serial.println(off);//#2
  
  
  //Test 3
  
  //in this test we will use a string to hold text
  
  //String text = "Hello, ";//#3
  //String yourName = "type your name here!";//#3//fill in your name between the two quote marks
  //Serial.print("Test 3: " + text + yourName);//#3 // notice you can add strings together
  //you can also express just one letter or character like this 
 //char oneLetter = 'h';//#3 note the '' and note ""
  //name = yourName;//#3
}

void loop() {
  // put your main code here, to run repeatedly: 
  //for fun uncoment the line below
  //Serial.println("Hello, " + name);
}
