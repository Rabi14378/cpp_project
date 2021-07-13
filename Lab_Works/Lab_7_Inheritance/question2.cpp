#include<iostream>
using namespace std;

class Student {
  protected:
    int roll;
    string name;
  public:

    Student(){
      this->name=" ";
      this->roll=0;
    }
    Student(string name,int roll){
      this->name=name;
      this->roll=roll;
    }
    Student(Student&);

    void setData(string name,int roll){
      this->name=name;
      this->roll=roll;
    }
    string getName(){
      return name;
    }
    int getRoll(){
      return roll;
    }

    ~Student(){}
};

class Test:public virtual Student {
  protected:
    int math,eng;
  public:

    Test(){
      this->math=0;
      this->eng=0;
    }
    Test(int math,int eng){
      this->math=math;
      this->eng=eng;
      
    }
    Test(Test&);

    void setMark(int math,int eng){
      this->math=math;
      this->eng=eng;
    }
    int getMath(){
      return this->math;
    }
    int getEng(){
      return this->eng;
    }

    ~Test(){}
};

class Sport:public virtual Student {
  protected:
    int score;
  public:

    Sport(){
      this->score=0;
    }
    Sport(int score){
      this->score=score;
      
    }
    Sport(Sport&);

    void setScore(int score){
      this->score=score;
    }
    int getScore(){
      return this->score;
    }

    ~Sport(){}
};


class Result:public Sport,public Test {
    int total;
  public:

    Result(){
      this->total=0;
    }
    Result(string name,int math,int eng,int score,int roll):Student(name,roll),Test(math,eng),Sport(score){
      this->total=math+eng;
    }
    Result(Result&);
    int getTotal(){
      return this->total=this->math+this->eng;
    }

    void display(){
      cout<<"Name: "<<this->name<<endl;
      cout<<"Roll no: "<<this->roll<<endl;
      cout<<"Total marks secured :"<<this->getTotal()<<endl;
      cout<<"score in sport :"<<this->score<<" out of 10"<<endl;
    }
    ~Result(){}
};

int main(){
  Result r1;
  r1.setData("bishal",9);
  r1.Test::setMark(60,50);
  r1.setScore(7);
  r1.display();
  Result r2("sani",50,55,7,30);
  r2.display();
  return 0;
}