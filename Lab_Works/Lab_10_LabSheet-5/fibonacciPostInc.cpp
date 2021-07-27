/** 
 * todo: Write a program to generate Fibonacci series using operator overloading of post increment operator 
*/

#include<iostream>
using namespace std;

class Fibonacci {

    int n1,n2,n3;
  public:

    Fibonacci();
    void operator++(int);
    ~Fibonacci(){}
};

Fibonacci::Fibonacci(){
  this->n1=0;
  this->n2=1;
  this->n3=0;
}

void Fibonacci::operator++(int){
  cout<<n1<<", ";
  n3=n1+n2;
  n2=n1;
  n1=n3;
}



int main(){

  Fibonacci f1;
  for(int i=0;i<10;i++){
    f1++;
  }
  return 0;
}