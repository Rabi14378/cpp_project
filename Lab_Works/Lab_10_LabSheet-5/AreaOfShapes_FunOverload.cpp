/** 
 * todo: Write a program finding area of square, rectangle, triangle. Use function overloading technique.
*/

#include<iostream>
using namespace std;

class Area {

  public:

    Area(){}
    int area(int);
    int area(int,int);
    int area(int,float);
    ~Area(){}
};
int Area::area(int l){
  return l*l;
}
int Area::area(int l, int b){
  return l*b;
}

int Area::area(int b,float h){
  return (b*h)/2;
}

int main(){
  Area *a=new Area;
  cout<<"Area of square is: "<< a->area(5)<<endl;
  cout<<"Area of rectangle is: "<< a->area(5,6)<<endl;
  cout<<"Area of triangle is: "<< a->area(5,5.5f)<<endl;
  return 0;
}