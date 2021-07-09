#include<iostream>
using namespace std;

class Base {
  public:
    Base(){
      cout<<"Default constructor of base class" <<endl;
    }
    Base(int x){
      cout<<"Param constructor of base class ("<<x<<")" <<endl;
    }
};

class Derived:public Base{
  public:
    Derived(){
      cout<<"Default constructor of derived class"<<endl;
    }
    Derived(int x):Base(5){
      cout<<"Param constructor derived class ("<<x<<")" <<endl;
    }
};

int main(){
  Derived d1;
  Derived d2(5);
  return 0;
}
