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
class Base2 {
  public:
    Base2(){
      cout<<"Default constructor of base 2 class" <<endl;
    }
    Base2(int x){
      cout<<"Param constructor of base class 2 ("<<x<<")" <<endl;
    }
};

class Derived:public Base1 , public Base2{
  public:
    Derived(){
      cout<<"Default constructor of derived class"<<endl;
    }
    Derived(int x){
      cout<<"Param constructor derived class ("<<x<<")" <<endl;
    }
};

int main(){
  Derived d1;
  Derived d2(5);
  return 0;
}
