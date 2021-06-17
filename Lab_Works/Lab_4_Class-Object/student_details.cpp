//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, //percentage methods - input(), display()

#include<iostream>
using namespace std;

class Student{
  string name;
  int roll;
  string address;
  double percentage;

  public:
  void input(){
    cout<<"Enter name of student:"<<endl;
    cin>>name;
    cout<<"Enter roll number of student :"<<endl;
    cin>>roll;
    cout<<"Enter address of student :"<<endl;
    cin>>address;
    cout<<"Enter percentage of student:"<<endl;
    cin>>percentage;
  }

  void display(){
    if(percentage<45){
      cout<<name<<":You failed."<<endl;
    }else{
      cout<<"Name:\t"<<name<<"\nRoll no:\t"<<roll<<"\nAddress:\t"<<address<<"\nPercentage:\t"<<percentage<<endl;
    }
  }
};

int main(){
  Student s1,s2;
  s1.input();
  s2.input();
  s1.display();
  s2.display();
  system("pause");
  return 0;
}