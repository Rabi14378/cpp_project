#include<iostream>

int main(){
  int a=10,b=20,c;   
  c=a+b;                  //= operator(assignment operator)
  std::cout<<"value of c is :"<<c<<std::endl;
  c+=1;                   //c=c+1
  std::cout<<"value of c is :"<<c<<std::endl;
  c-=1;                   //c=c-1
  std::cout<<"value of c is :"<<c<<std::endl;
  return 0;
}