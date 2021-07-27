/** 
 * todo: Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figures. Make display_area() as virtual function and redefine this function in the derived class to suit their requirements
*/

#include<iostream>
using namespace std;

class Shape {
  protected:
    double base,height;
  public:

    Shape();
    Shape(double,double);
    Shape(Shape&);
    void getData(double,double);
    virtual double displayArea()=0;
    virtual ~Shape(){}
};
Shape::Shape(){
  this->base=0.0;
  this->height=0.0;
}
Shape::Shape(double height,double base){
  this->base=base;
  this->height=height;
}
void Shape::getData(double base,double height){
  this->base=base;
  this->height=height;
}


class Triangle:public Shape {

  public:
    Triangle(){}
    ~Triangle(){}
    double displayArea(){
      return (base*height)/2;
    }
};
class Rectangle:public Shape {

  public:
    Rectangle(){}
    ~Rectangle(){}
    double displayArea(){
      return (base*height);
    }
};

int main(){
  Shape *s1=new Triangle;
  s1->getData(6.87,8.34);
  cout<<"Area of triangle is: "<<s1->displayArea()<<endl;
  delete s1;
  s1=new Rectangle;
  s1->getData(4.44,8.88);
  cout<<"Area of rectangle is: "<<s1->displayArea()<<endl;
  delete s1;
  return 0;
}