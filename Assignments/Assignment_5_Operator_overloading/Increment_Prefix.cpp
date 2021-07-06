#include<iostream>
using namespace std;

class Prefix {
    int a,b,c;

  public:
    Prefix(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
    }
    void operator++(){
      ++a;
      ++b;
      ++c;
    }

    void display(){
      cout<<a<<endl<<b <<endl<<c <<endl;
    }


};

int main(){
  Prefix p(1,2,3);
  ++p;
  p.display();
  return 0;
}