#include<iostream>
#include<math.h>
using namespace std;

float areaOfTriangle();

int main(){
  cout<<"Area of triangle is :"<<areaOfTriangle()<<endl;
  return 0;
}

float areaOfTriangle(){
  float length1,length2,length3,area,s;
  cout<<"Enter length of three side of triangle"<<endl;
  cin>>length1>>length2>>length3;
  s=(length1+length2+length3)/2;
  area=sqrt(s*(s-length1)*(s-length2)*(s-length3));
  return area;
}