#include<iostream>
using namespace std;

int main(){
  int number1,number2,choice;
  cout<<"Choices:\n1.To add two number\n2.To multiply two numbers\n3.To subtract two numbers\n4.To divide two numbers"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  cout<<"Enter Two numbers:"<<endl;
  cin>>number1>>number2;
  switch(choice){
  
    case 1:
      cout<<"addition is: "<<number1+number2<<endl;
      break;
    case 2:
      cout<<"Multiplication is: "<<number1*number2<<endl;
      break;
    case 3:
      cout<<"Subtraction is "<<number1-number2<<endl;
      break;
    case 4:
      cout<<"Division is: "<<number1/number2<<endl;
      break;
    default:
      cout<<"Invalid input"<<endl;
  }


  return 0;
}