#include<iostream>
using namespace std;

void swap(int a ,int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"Value inside swap function"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;

}

int main(){
  int a,b;
  cout<<"Enter two numbers";
  cin>>a>>b;
  cout<<"Value before swapping"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
  swap(a,b);
  cout<<"Value after swapping"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
  return 0;
}