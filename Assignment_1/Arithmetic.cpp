
//Arithmetic Operator

#include<iostream>

int main(){
  int number1=10,number2=20;
  int result =number1+number2;  // + operator(addition operator)
  std::cout<<"Sum is : "<<result<<std::endl;
  result =number2/number1;      // / operator(division operator)
  std::cout<<"Division is : "<<result<<std::endl;
  result =number2*number1;      // * operator(Multiplication operator)
  std::cout<<"Multiplication is : "<<result<<std::endl;
  result =number1-number2;      // - operator(subtraction operator)
  std::cout<<"Subtraction is : "<<result<<std::endl;
  result =number2 % number1;      // % operator(Modulus operator)
  std::cout<<"Remainder is : "<<result<<std::endl;
  return 0;
}