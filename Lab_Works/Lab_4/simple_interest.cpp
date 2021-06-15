/*WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided*/
#include<iostream>
using namespace std;

class SimpleInterest{
  double principle,rate;
  int time;

  public:
  void setData(double a,int b,double c=15){
    principle=a;
    time=b;
    rate=c;
  }

  void getData(){
    double SI;
    SI=(principle*time*rate)/100;
    cout<<"Simple interest is :"<<SI<<endl;
  }
};

int main(){
  double principle,rate;
  int time,choice;
  SimpleInterest s;
  cout<<"Is rate given (0 for no 1 for yes):"<<endl;
  cin>>choice;
  if (choice==0){
  cout<<"Enter principle and time"<<endl;
  cin>>principle>>time;
  s.setData(principle,time);
  }
  else if(choice==1){
    cout<<"Enter principle,time anf rate"<<endl;
    cin>>principle>>time>>rate;
    s.setData(principle,time,rate);
  }else{
    cout<<"Invalid input"<<endl;
    return 0;
  }
  s.getData();
  return 0;
}