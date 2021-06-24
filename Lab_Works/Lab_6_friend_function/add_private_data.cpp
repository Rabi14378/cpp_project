
//WAP to add 2 private data of two different classes.

#include<iostream>
using namespace std;

class Class1;
class Class2{
  int number;

  public:
    Class2(int number){
      this->number=number;
    }
    friend int add(Class1 c1,Class2 c2);

    ~Class2(){}
};
class Class1{
  int number;

  public:
    Class1(int number){
      this->number=number;
    }
    friend int add(Class1 c1,Class2 c2);

    ~Class1(){}
};

int add(Class1 c1,Class2 c2){
  return c1.number+c2.number;
}

int main(){
  Class1 c1(10);
  Class2 c2(20);
  cout<<"Sum of two private data is :"<<add(c1,c2)<<endl;
  system("pause");
  return 0;
}