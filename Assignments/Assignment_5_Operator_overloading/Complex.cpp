#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;

  public:
    Complex();

    Complex(int,int);

    void set(int,int);

    void display();

    Complex operator+(Complex);

    ~Complex(){}

};

Complex::Complex(){
  this->real=0;
  this->img=0;
}

Complex::Complex(int real, int img){
  this->real=real;
  this->img=img;
}

void Complex::set(int real,int img){
  this->real=real;
  this->img=img;
}

void Complex::display(){
  cout<<real<<" +i"<<img <<endl;
}

Complex Complex::operator+(Complex c1){
  Complex temp;
  temp.real=this->real+c1.real;
  temp.img=this->img+c1.img;
  return temp;
}

int main(){
  Complex c1,c2,c3;
  c1.set(3,5);
  c2.set(1,2);
  c3=c1+c2;
  c3.display();
  return 0;
}