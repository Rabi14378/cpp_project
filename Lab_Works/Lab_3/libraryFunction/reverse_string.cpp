#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char str1[30];
  cout<<"Enter any string"<<endl;
  cin>>str1;
  strrev(str1);
  cout<<"Reversed string is "<<str1<<endl;
  return 0;
}