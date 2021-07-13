#include<iostream>
using namespace std;

class Staff {

  static int count;
  string name;
  int code;

  public:

    Staff();
    Staff(string);
    Staff(Staff&);

    void setName(string);
    string getName();
    int getCode();

    ~Staff();
};
int Staff::count=0;
/** 
 * * Definition of Constructors for Staff class 
*/
Staff::Staff(){
  this->name=" ";
  this->code=++count;
}
Staff::Staff(string name){
  this->name=name;
  this->code=++count;
}

/** 
 * *Definition of methods for Staff class
*/
void Staff::setName(string name){
  this->name=name;
}
string Staff::getName(){
  return name;
}

int Staff::getCode(){
  return code;
}

/** 
 * *Definition of destructor of Staff class 
*/
Staff::~Staff(){

}

class Teacher:public Staff {

    string subject;
    string publication;
  public:

    Teacher();
    Teacher(string,string);
    Teacher(string,string,string);
    Teacher(Teacher&);

    void setData(string, string);
    string getSubject();
    string getPublication();
    void display();

    ~Teacher();
};

/** 
 * *Definations of Constructor of Teacher class
*/
Teacher::Teacher(){
  this->subject=" ";
  this->publication=" ";
}
Teacher::Teacher(string subject, string publication){
  this->subject=subject;
  this->publication=publication;
}
Teacher::Teacher(string subject, string publication, string name):Staff(name){
  this->subject=subject;
  this->publication=publication;
}

/** 
 * *Definition of methods of Teacher class
*/
void Teacher::setData(string subject, string publication){
  this->subject=subject;
  this->publication=publication;
}
string Teacher::getSubject(){
  return subject;
}
string Teacher::getPublication(){
  return publication;
}
void Teacher::display(){
  cout<<"Teacher:\nCode\t\tName\t\tSubject\t\tPublication"<<endl;
  cout<<getCode()<<"\t\t"<<getName()<<"\t\t"<<getSubject()<<"\t\t"<<getPublication()<<endl;
}

/** 
 * *Definition of Destructor of Teacher class 
*/
Teacher::~Teacher(){

}

class Officer:public Staff {
    string grade;
  public:

    Officer();
    Officer(string);
    Officer(string, string);
    Officer(Officer&);

    void setGrade(string);
    string getGrade();
    void display();

    ~Officer();
};

/** 
 * *Definition of Constructor of officer class
*/
Officer::Officer(){
  this->grade=" ";
}
Officer::Officer(string grade){
  this->grade=grade;
}
Officer::Officer(string grade,string name):Staff(name){
  this->grade=grade;
}

/** 
 * *Definition of methods of Officer class
*/
void Officer::setGrade(string grade){
  this->grade=grade;
}
string Officer::getGrade(){
  return grade;
}
void Officer::display(){
  cout<<"Officer:\nCode\t\tName\t\tGrade"<<endl;
  cout<<getCode()<<"\t\t"<<getName()<<"\t\t"<<getGrade()<<endl;
}

/** 
 * *Definition of Destructor of Officer class
*/
Officer::~Officer(){

}
class Typist:public Staff {

    int speed;
  public:

    Typist();
    Typist(int);
    Typist(int, string);
    Typist(Typist&);

    void setSpeed(int);
    int getSpeed();

    ~Typist();
};

/** 
 * *Definition of Constructor of Typist class
*/
Typist::Typist(){
  this->speed=0;
}
Typist::Typist(int speed){
  this->speed=speed;
}
Typist::Typist(int speed,string name):Staff(name){
  this->speed=speed;
}

/** 
 * *Definition of methods of Typist class
*/
void Typist::setSpeed(int speed){
  this->speed=speed;
}
int Typist::getSpeed(){
  return speed;
}


/** 
 * *Definition of Destructor of Typist class
*/
Typist::~Typist(){

}


class Regular:public Typist {

    int wage;
  public:

    Regular();
    Regular(int);
    Regular(int, int, string);
    Regular(Regular&);

    void setWage(int);
    int getWage();
    void display();

    ~Regular();
};  

/** 
 * *Definition of Constructor of Regular class
*/
Regular::Regular(){
  this->wage=0;
}
Regular::Regular(int wage){
  this->wage=wage;
}
Regular::Regular(int wage,int speed,string name):Typist(speed,name){
  this->wage=wage;
}

/** 
 * *Definition of methods of Regular class
*/
void Regular::setWage(int wage){
  this->wage=wage;
}
int Regular::getWage(){
  return wage;
}
void Regular::display(){
  cout<<"Regular Typist:\nCode\t\tName\t\tSpeed(wpm)\t\tWage"<<endl;
  cout<<getCode()<<"\t\t"<<getName()<<"\t\t"<<getSpeed()<<"\t\t"<<getWage()<<endl;
}

/** 
 * *Definition of Destructor of Regular class
*/
Regular::~Regular(){

}

class Casual:public Typist {

    int time;
    int wage;
  public:

    Casual();
    Casual(int,int);
    Casual(int,int,int,string);
    Casual(Casual&);

    void setWageAndTime(int,int);
    int getWage();
    int getTime();
    void display();

    ~Casual();
};

/** 
 * *Definition of Constructor of Casual class
*/
Casual::Casual(){
  this->wage=0;
}
Casual::Casual(int wage,int time){
  this->wage=wage;
  this->time=time;
}
Casual::Casual(int wage,int time,int speed,string name):Typist(speed,name){
  this->wage=wage;
  this->time=time;
}

/** 
 * *Definition of methods of Casual class
*/
void Casual::setWageAndTime(int wage,int time){
  this->wage=wage;
  this->time=time;
}
int Casual::getWage(){
  return wage;
}
int Casual::getTime(){
  return time;
}
void Casual::display(){
  cout<<"Casual Typist:\nCode\t\tName\t\tSpeed\t\tTime\\hr\t\tWage\\hr\t\tTotal"<<endl;
  cout<<getCode()<<"\t\t"<<getName()<<"\t\t"<<getSpeed()<<"\t\t"<<getTime()<<"\t\t"<<getWage()<<"\t\t"<<getTime()*getWage()<<endl;
}

/** 
 * *Definition of Destructor of Casual class
*/
Casual::~Casual(){
  
}

int main(){
  Teacher t1;
  t1.setName("Bisikha Subedi");
  t1.setData("OOP","Bandipur publication");
  t1.display();
  Regular r1(22000,48,"Aditya");
  r1.display();
  Casual c1(700,4,50,"Abhishek");
  c1.display();
  Officer o1;
  o1.setName("K.P oli");
  o1.setGrade("f.Prime minister");
  o1.display();
  return 0;
}