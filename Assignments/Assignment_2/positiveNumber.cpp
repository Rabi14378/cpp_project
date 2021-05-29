#include<iostream>
using namespace std;

int main(){
  int numbers[10];
  cout<<"Enter any 10 numbers"<<endl;
  for(int i=0;i<10;i++){
    cin>>numbers[i];
  }

  for(int i=0;i<10;i++){
    if(numbers[i]>=0) cout<<numbers[i]<<" is positive"<<endl;
  }

  return 0;
}