#include<iostream>
using namespace std;

class Distance {

    int feet;
    int inch;
  public:
    Distance();
    Distance(int, int);
    friend Distance operator+(Distance &,Distance &);
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

Distance operator+(Distance &d1,Distance &d2){
  Distance temp;
  temp.inch=d1.inch+d2.inch;
  temp.feet=d1.feet+d2.feet+(temp.inch/12);
  temp.inch%=12;
  return temp;
}

void Distance::display(){
  cout<<"Total distance is: "<<feet<<" feet "<<inch<<" inch" <<endl;
}

int main(){
  Distance d1(10,3),d2(2,4),d3;
  d3=d1+d2;
  d3.display();
  return 0;
}