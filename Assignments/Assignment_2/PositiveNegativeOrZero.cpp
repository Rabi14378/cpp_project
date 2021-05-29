#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter any number:"<<endl;
  cin>>number;
  if(number==0) cout<<"Number is zero"<<endl;
  else if(number<0) cout<<"Number is Negative"<<endl;
  else cout<<"Number is positive"<<endl;

  return 0;
}