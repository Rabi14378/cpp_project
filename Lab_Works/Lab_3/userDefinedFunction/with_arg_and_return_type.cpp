#include<iostream>
#include<math.h>
using namespace std;

float areaOfTriangle(float ,float,float);

int main(){
  float length1,length2,length3;
  cout<<"Enter length of three side of triangle"<<endl;
  cin>>length1>>length2>>length3;
  cout<<"Area of triangle is :"<<areaOfTriangle(length1,length2,length3)<<endl;
  return 0;
}

float areaOfTriangle(float a,float b,float c){
  float s=(a+b+c)/2;
  float area=sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}