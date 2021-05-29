//  Write a program to read the record of 3 students(name, address and roll) and display the //////record using structure in C++

#include<iostream>
using namespace std;

struct student{
  string name;
  int roll;
  string address;
};

int main(){
  student s[3];
  for(int i=0;i<3;i++){
    cout<<"Enter name of student: "<<i+1<<endl;
    cin>>s[i].name;
    cout<<"Enter roll number of student:"<<endl;
    cin>>s[i].roll;
    cout<<"Enter address of student:"<<endl;
    cin>>s[i].address;
  }

  cout<<"\n\nList of student\n";

  for(int i=0;i<3;i++){
      cout<<"Name:"<<s[i].name<<endl<<"Roll no:"<<s[i].roll<<endl<<"Address:"<<s[i].address<<endl;
    }

  return 0;
}