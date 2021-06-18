#include<iostream>
using namespace std;

class Construct{
  int id;
  string name;
  float salary;

  public:
    Construct(){
      id=0;
      name="Default";
      salary=0;
    }
    Construct(int id,string name,float salary){
      this->id=id;
      this->name=name;
      this->salary=salary;
    }

    Construct(Construct & c1){
      id=c1.id;
      name=c1.name;
      salary=c1.salary;
    }
    Construct(int id,string name){
      this->id=id;
      this->name=name;
      salary=1200;
    }

    void setName(string name){
      this->name=name;
    }
    void setId(int id){
      this->id=id;
    }
    void setSalary(float salary){
      this->salary=salary;
    }
    void showData(){
      cout<<"Name :"<<name<<"\nId :"<<id<<"\nsalary :"<<salary<<endl;
    }


};  

int main(){

  //Default constructor or non paramitarized constructor is called.
  Construct c1;

  //paramiterized constructor with three argument is called.
  Construct c2(2,"Abhishek",1234.98);

  /*copy constructor is called where 
  data of object passed as argument is assigned
  to newly made object*/
  Construct c3(c2);

  //constructor with 2 argument(id and name) is called.
  Construct c4(3,"Aditya");

//sets id of object c1 to 4
  c1.setId(4);

  c4.setSalary(1200.32);

  c1.showData(); //Displays data of object c1
  c2.showData(); //Displays data of object c2
  c3.showData(); //Displays data of object c3
  c4.showData(); //Displays data of object c4

  system("Pause");
  return 0;
}