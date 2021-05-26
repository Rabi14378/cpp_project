//Q. Write a program in C++ to read the record of a student (name, address, roll) and display /////them using structure

#include<iostream>
using namespace std;

struct student{
  string name;
  int roll;
  string address;
};

int main(){
  student s1;
  cout<<"Enter name of student:"<<endl;
  cin>>s1.name;
  cout<<"Enter roll number of student:"<<endl;
  cin>>s1.roll;
  cout<<"Enter address of student:"<<endl;
  cin>>s1.address;

  cout<<"Name:"<<s1.name<<endl<<"Roll no:"<<s1.roll<<endl<<"Address:"<<s1.address<<endl;
  return 0;
}