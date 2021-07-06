#include<iostream>
using namespace std;

class Prefix {
    int a,b,c;

  public:
    Prefix(){}
    Prefix(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
    }
    Prefix &operator++(){
      ++a;
      ++b;
      ++c;
      return *this;
    }

    void display(){
      cout<<a<<endl<<b <<endl<<c <<endl;
    }


};

int main(){
  Prefix p1(1,2,3),p2;
  p2= ++p1;

  p2.display();
  return 0;
}