#include<iostream>
using namespace std;

class Postfix {
    int a,b,c;

  public:
    Postfix(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
    }
    void operator++(int){
      a++;
      b++;
      c++;
    }

    void display(){
      cout<<a<<endl<<b <<endl<<c <<endl;
    }


};

int main(){
  Postfix p(1,2,3);
  p++;
  p.display();
  return 0;
}
