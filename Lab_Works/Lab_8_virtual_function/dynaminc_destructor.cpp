#include<iostream>
using namespace std;

class Base {

  public:

    Base(){
      cout<<"Default Constructor of base class is called"<<endl;
    }
    Base(int x){
      cout<<"Parameterized constructor of base class is called"<<endl;
    }
    Base(Base&);

    virtual void print()=0;
    void display(){
      cout<<"This is in abstract class"<<endl;
    }

    ~Base(){
      cout<<"Destructor of base class is called"<<endl;
    }
};

class Derived:public Base {

  public:

    Derived(){
      cout<<"Default constructor of derived class is called"<<endl;
    }
    Derived(int x){
      cout<<"Parameterized constructor of derived class is called"<<endl;
    }
    Derived(Derived&);

    void print(){
      cout<<"This is in derived class"<<endl;
    }    

    ~Derived(){
      cout<<"Destructor of derived class is called"<<endl;
    }
};

int main(){
  Derived *d=new Derived;
  d->print();
  d->display();
  delete d;
  d=new Derived(10);
  d->print();
  d->display();
  delete d;
  return 0;
}