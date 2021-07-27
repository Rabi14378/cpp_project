# LALITPUR ENGINEERING COLLEGE

## DEPARTMENT OF COMPUTER ENGINEERING
___
## SUBJECT: OBJECT ORIENTED PROGRAMMING IN C++

### LAB SHEET-5

## Objective: To familiarize students with polymorphism concepts.

## Polymorphisms:

### Polymorphism is the ability to use an operator or function in different ways. It gives different meanings or functions to the operators or functions.
![](https://qph.fs.quoracdn.net/main-qimg-564feec0543e0c250b07a1825c778aea.webp)

### Varieties of Polymorphism (Types)

* Compile time (Function overloading and operator overloading)

* Run time (virtual function)

![](https://www.c-sharpcorner.com/UploadFile/ff2f08/understanding-polymorphism-in-C-Sharp/Images/ploymorphism.jpg)
## FunctionOverloading:

### Defining  multiple  functions with  same  name  is  known  as  function overloading. Arguments in the overloaded functions must not be same in number i.e. same function name different number of arguments.

## Operator Overloading:

### It is a mechanism that provides the operators a special meaning certain usage

~~~c++
Syntax:

      return-type operator symbol (arguments){

        Define Task of operator

      }
~~~

# Programs:

* Write a program to generate Fibonacci series using operator overloading of ++ operator
 
  * for pre increment 
 
  * for post increment


* Write a program to implement vector addition using operator overloading
  
  * using friend function
  
  * without using friend function


* Write   a   program   finding   area   of   square,   rectangle,   triangle. Use   function   overloading technique.


* Create  a  base  class  called      shape. Use  this  class  to  store  two  double  type  values  that  could  be used  to  compute  the  area  of  figures. Derive  two  specific  classes  called  triangle  and  rectangle from  the  base  shape. Add  to  the  base  class,  a  member  function  get_data() to  initialize  base class  data members  and  another  member  function  display_area() to  compute and  display  the area  of  figures. Make  display_area() as  virtual  function  and  redefine  this  function  in  the derived class to suit their requirements.