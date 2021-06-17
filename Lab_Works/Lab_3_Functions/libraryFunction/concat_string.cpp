#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char str1[30];
  char str2[30];
  cout<<"Enter your first name"<<endl;
  cin>>str1;
  cout<<"Enter your last name"<<endl;
  cin>>str2;
  strcat(str1,str2);
  cout<<"Your full name is "<<str1<<endl;
  return 0;
}