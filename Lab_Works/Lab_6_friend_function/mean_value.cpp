/*WAP to create sample class with 2 float data members and member functions void getdata() to input the values and one friend function float mean(sample) to calculate and return mean value.*/

#include<iostream>
using namespace std;

class Sample{
  float num1,num2;

  public:
    Sample(){}
    Sample(float num1,float num2){
      this->num1=num1;
      this->num2=num2;
    }
    void getdata(){
      cout<<"Enter two decimal numbers :"<<endl;
      cin>>num1>>num2;
    }
    friend float mean(Sample s);
    
    ~Sample(){}

};

float mean(Sample s){
  return (s.num1+s.num2)/2;
}

int main(){
  Sample s1;
  s1.getdata();
  cout<<"Average is :"<<mean(s1)<<endl;
  system("pause");
  return 0;
}