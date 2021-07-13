#include<iostream>
using namespace std;

class Person {
  protected:
    int code;
    string name;
  public:

    Person(){
      this->name=" ";
      this->code=0;
    }
    Person(string name,int code){
      this->name=name;
      this->code=code;
    }

    void setPersonInfo(string name,int code){
      this->name=name;
      this->code=code;
    }

    Person(Person&);
    ~Person(){}
};

class Account:public virtual Person {
  protected:
    int pay;
  public:

    Account(){
      this->pay=0;
    }
    Account(int pay){
      this->pay=pay;
    }

    void setPay(int pay){
      this->pay=pay;
    }

    Account(Account&);
    ~Account(){}
};

class Admin:public virtual Person {
  protected:
    int exp;
  public:

    Admin(){
      this->exp=0;
    }
    Admin(int exp){
      this->exp=exp;
    }

    void setExp(int exp){
      this->exp=exp;
    }

    Admin(Admin&);
    ~Admin(){}
};

class Master:public Admin,public Account {

  public:

    Master(){}
    Master(string name,int code,int pay,int exp):Person(name,code),Admin(exp),Account(pay){}

    void updateData(){
      cout<<"Enter name, code no,pay and experience restictively:"<<endl;
      cin>>this->name>>this->code>>this->pay>>this->exp;
    }
    void updateData(string name,int code,int pay,int exp){
      this->name=name;
      this->code=code;
      this->pay=pay;
      this->exp=exp;
    }

    void display(){
      cout<<"Code no\t\tName\t\tpay\t\texperience"<<endl;
      cout<<this->code<<"\t\t"<<this->name<<"\t\t"<<this->pay<<"\t\t"<<this->exp<<endl;
    }
    Master(Master&);
    ~Master(){}
};

int main(){
  Master m1;
  m1.setPersonInfo("Ronish",0025);
  m1.setPay(25000);
  m1.setExp(6);
  m1.display();
  m1.updateData();
  m1.display();
  Master m2("Madhav",0027,67000,9);
  m2.display();
  m2.updateData("Gaurav",0011,56000,4);
  m2.display();

  return 0;
}