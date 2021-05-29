#include<iostream>
using namespace std;

int main(){
  int number,sum=0;
  cout<<"Enter positive number:"<<endl;
  cin>>number;
  for(int i=1;i<=number;i++){
    sum+=i;
  }
  cout<<"Sum of first "<<number<<" natural number is: "<<sum<<endl;



  return 0;
}