/*------------------Documentation--------------------

Name: Calculator with two inputs and standard operations with menu
Author: Pranit Patil (23155)
-----------------------------------------------------*/

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

float addition(float num1, float num2){
  
  // This function performs addition of two numbers
  // inside the arguments
  
  float addn = num1 + num2;
  return addn;
}

float multiplication(float num1, float num2){
  
  //This function performs multiplication of two
  //numbers inside the arguments
  
  float mult = num1 * num2;
  return mult;
}

float division(double num1, double num2){
  
  //Performs division of two numbers in args
  
  if(num2 != 0){
  return(num1/num2);}
  
  else{
    cout<<"Operation not possible";
    return 0;
  }
}

float subtraction(float num1, float num2){
  
  //Subtracts two numbers given in args
  
  return (num1 - num2);
}

int main()
{
  char op;
  cout << "Enter the symbol of the operation to be performed\n";
  cin >> op;
  
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    float output;
    if (op == '+'){
      output = addition(num1, num2);
      }
    else if(op == '-'){
      output = subtraction(num1,num2);
    }
    else if(op == '*'){
      output = multiplication(num1,num2);
    }
    else if(op == '/'){
      output= division(num1,num2);
    }
    else{cout << "Enter valid operator please";}
      
      cout << output;
}
