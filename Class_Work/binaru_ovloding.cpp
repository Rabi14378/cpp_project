#include<iostream>
using namespace std;

class Distance {

    int feet;
    int inch;
  public:
    Distance();
    Distance(int, int);
    Distance operator+(Distance d1);
    void display();
    ~Distance(){}

};

Distance::Distance(){
  this->feet=0;
  this->inch=0;
}

Distance::Distance(int feet, int inch){
  this->feet=feet;
  this->inch=inch;
}

Distance Distance::operator+(Distance d1){
  Distance temp;
  temp.inch=this->inch+d1.inch;
  temp.feet=this->feet+d1.feet+(temp.inch/12);
  temp.inch%=12;
  return temp;
}

void Distance::display(){
  cout<<"Total distance is: "<<feet<<" feet "<<inch<<" inch" <<endl;
}

int main(){
  Distance d1(10,3),d2(2,10),d3;
  d3=d1+d2;
  d3.display();
  return 0;
}