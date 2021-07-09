#include<iostream>
using namespace std;

class Base1 {
  public:
    Base1(){
      cout<<"Default constructor of base 1 class" <<endl;
    }
    Base1(int x){
      cout<<"Param constructor of base 1 class ("<<x<<")" <<endl;
    }
};
class Derived1:public Base1 {
  public:
    Derived1(){
      cout<<"Default constructor of derived 1 class" <<endl;
    }
    Derived1(int x){
      cout<<"Param constructor of derived 1 class ("<<x<<")" <<endl;
    }
};

class Derived2:public Derived1{
  public:
    Derived2(){
      cout<<"Default constructor of derived 2 class"<<endl;
    }
    Derived2(int x){
      cout<<"Param constructor derived class 2 ("<<x<<")" <<endl;
    }
};

int main(){
  Derived2 d1;
  Derived2 d2(5);
  return 0;
}