#include<iostream>
using namespace std;

void add(int a,int b,int c){
  cout<<"Sum is :"<<a+b+c<<endl;
}

void add(int a,int b){
  cout<<"Sum is :"<<a+b<<endl;
}

void add(int a,int b,int c,int d){
  cout<<"Sum is :"<<a+b+c+d<<endl;
}

int main(){
  add(2,4);
  add(3,5,6);
  add(1,2,3,4);

  return 0;
}