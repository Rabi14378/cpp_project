#include<iostream>

int main(){
  int a=10,b=20;
  if(a<=10&&b>=10){
    std::cout<<"Logical AND operator"<<std::endl;
  }
  if(a>=10||b>=10){
    std::cout<<"Logical OR operator"<<std::endl;
  }
  if(!(a>10||b<=10)){
    std::cout<<"Logical NOT operator"<<std::endl;
  }

  return 0;
}