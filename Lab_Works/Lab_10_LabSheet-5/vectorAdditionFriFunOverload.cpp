/** 
 * todo: Write a program to implement vector addition using operator overloading using friend function.
*/

#include<iostream>
using namespace std;

class Vector {

    int x,y,z;

  public:

    Vector();
    Vector(int,int,int);
    friend Vector operator+(Vector,Vector);
    void display();
    ~Vector(){}
};

Vector::Vector(){
  this->x=0;
  this->y=0;
  this->z=0;
}

Vector::Vector(int x, int y, int z){
  this->x=x;
  this->y=y;
  this->z=z;
}

Vector operator+(Vector v1,Vector v2){
  int a=v1.x+v2.x;
  int b=v1.y+v2.y;
  int c=v1.z+v2.z;
  return Vector(a,b,c);
}

void Vector::display(){
  cout<<this->x<<"x + "<<this->y<<"y + "<<this->z<<"z"<<endl;
}

int main(){
  Vector v1(1,2,3),v2(4,5,6),v3;
  v3=v1+v2;
  cout<<"Result of addition is :"<<endl;
  v3.display();
  return 0;
}