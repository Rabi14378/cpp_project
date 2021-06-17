#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char str1[30];
  char str2[30];
  cout<<"Enter any string"<<endl;
  
  cin>>str1;
  strcpy(str2,str1);
  cout<<"Value of str2 is :"<<str2<<endl;
  return 0;
}