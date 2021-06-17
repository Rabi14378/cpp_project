#include<iostream>
#include<math.h>
using namespace std;

void areaOfTriangle(float ,float,float);

int main(){
  float length1,length2,length3;
  cout<<"Enter length of three side of triangle"<<endl;
  cin>>length1>>length2>>length3;
  areaOfTriangle(length1,length2,length3);
  return 0;
}

void areaOfTriangle(float a,float b,float c){
  float s=(a+b+c)/2;
  float area=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<"Area of triangle is :"<<area<<endl;
}