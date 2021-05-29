
//Relational operator or comparision operator

#include<iostream>

int main(){
  int a=10, b=20,c;
  c=(a>b);                         //> operator(greater than operator)
  std::cout<<c<<std::endl; 
  std::cout<<(a<b)<<std::endl;     //< operator(less than operator)
  std::cout<<(a<=b)<<std::endl;    //<= operator(less than or equal to operator)
  std::cout<<(a>=b)<<std::endl;    //>= operator(less than or equal to operator)
  std::cout<<(a!=b)<<std::endl;    //!= operator(not equal to operator)
  return 0;
}