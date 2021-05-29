#include<iostream>

int main(){
  int a=11, b=5,c;
  c=(a&b);                         //& operator(bitwise And)
  std::cout<<c<<std::endl; 
  std::cout<<(a|b)<<std::endl;     //| operator(bitwise OR)
  std::cout<<(a<<b)<<std::endl;    //<< operator(left shift operator)
  std::cout<<(a>>b)<<std::endl;    //>> operator(Right shift)
  std::cout<<(~a)<<std::endl;    //! operator(bitwise not operator)
}