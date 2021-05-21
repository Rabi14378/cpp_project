#include<iostream>
#include<math.h>

float area(float,float,float);
float area(float,float);

int main(){
  int choice;
  std::cout<<".1 Area of triangle when height and base provided."<<std::endl;
  std::cout<<".2 Area of triangle when length of three side is given"<<std::endl;
  std::cout<<"Choice(1/2): ";
  std::cin>>choice;
  switch(choice){
    case 1:
      float height,base;
      std::cout<<"Enter height:"<<std::endl;
      std::cin>>height;
      std::cout<<"Enter base:"<<std::endl;
      std::cin>>base;
      std::cout<<"area of triangle is :"<<area(base,height)<<std::endl;
      break;
    case 2:
      float length1,length2,length3;
      std::cout<<"Enter length of side 1:"<<std::endl;
      std::cin>>length1;
      std::cout<<"Enter length of side 2:"<<std::endl;
      std::cin>>length2;
      std::cout<<"Enter length of side 3:"<<std::endl;
      std::cin>>length3;
      std::cout<<"area of triangle is :"<<area(length1,length2,length3)<<std::endl;
      break;
    default:
      std::cout<<"Invalid choice. "<<std::endl;
  }

  return 0;

}

float area(float x,float y){
  return (x*y)*0.5;
}

float area(float x,float y,float z){
  float s=(x+y+z)*0.5;
  float AOT=sqrt(s*(s-x)*(s-y)*(s-z));
  return AOT;
}