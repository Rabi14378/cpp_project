#include<iostream>
using namespace std;

class Complex{
  int real;
  int img;

  public:
    Complex(){}
    Complex(int real,int img){
      this->real=real;
      this->img=img;
    }

    Complex AddComplex(Complex c1){
      Complex temp;
      temp.real=real+c1.real;
      temp.img=img+c1.img;
      return temp;
    }
    void display(){
      cout<<real<<"+i"<<img<<endl;
    }
};

int main(){
  Complex C1(2,4);
  Complex C2(3,2);
  Complex C3;
  C3=C1.AddComplex(C2);
  C3.display();

  return 0;
}
