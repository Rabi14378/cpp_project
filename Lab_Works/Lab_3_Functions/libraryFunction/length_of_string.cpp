#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  char str2[20];
  cout<<"Enter any string"<<endl;
  getline(cin,str);
  cout<<"Length of string is :"<<str.length()<<endl;
  
  cout<<"Enter another string"<<endl;
  cin>>str2;
  cout<<"Length of string is :"<<strlen(str2)<<endl;
  return 0;
}