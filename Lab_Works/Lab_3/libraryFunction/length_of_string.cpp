#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  cout<<"Enter any string"<<endl;
  getline(cin,str);
  cout<<"Length of string is :"<<str.length()<<endl;
  return 0;
}