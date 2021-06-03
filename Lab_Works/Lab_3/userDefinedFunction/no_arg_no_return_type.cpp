#include<iostream>
#include<math.h>
using namespace std;

void areaOfTriangle();

int main(){
  areaOfTriangle();
  return 0;
}

void areaOfTriangle(){
  float length1,length2,length3,area,s;
  cout<<"Enter length of three side of triangle"<<endl;
  cin>>length1>>length2>>length3;
  s=(length1+length2+length3)/2;
  area=sqrt(s*(s-length1)*(s-length2)*(s-length3));
  cout<<"Area of triangle is :"<<area<<endl;
}