/** 
 * todo: Write a program to implement vector addition using operator overloading.
*/

#include<iostream>
using namespace std;

class Vector {

    int x,y,z;

  public:

    Vector();
    Vector(int,int,int);
    Vector operator+(Vector);
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

Vector Vector::operator+(Vector v1){
  int a=v1.x+this->x;
  int b=v1.y+this->y;
  int c=v1.z+this->z;
  return Vector(a,b,c);
}

void Vector::display(){
  cout<<this->x<<"x + "<<this->y<<"y + "<<this->z<<"z"<<endl;
}

int main(){
  Vector v1(1,2,3),v2(4,5,6),v3(7,8,9),v4;
  v4=v1+v2+v3;
  cout<<"Result of addition is :"<<endl;
  v4.display();
  return 0;
}
