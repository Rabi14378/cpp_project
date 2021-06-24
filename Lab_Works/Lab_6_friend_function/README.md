
___
## Friend Function
***
In object-oriented programming, a friend function, that is a "friend" of a given class, is a function that is given the same access as methods to private and protected data. A friend function is declared by the class that is granting access, so friend functions are part of the class interface, like methods.
***
![](https://www.journaldev.com/wp-content/uploads/2020/02/friend_function-1.png)
***
![](https://image.slidesharecdn.com/12-170211073924/95/friend-functionc-9-638.jpg?cb=1486799043)
***
If we have a class,
~~~C++
class Sample{
  int n1;

  public:
    int n2;

    Sample(){}
    Sample(int n1,int n2){
      this->n1=n1;
      this->n2=n2;
    }

    ~Sample(){}
};

int add(){
  Sample c;               (allowed)
  c.number=10;            (Not allowed)
  c.n=20;                 (allowed)
  return c.n+c.number;    (Not allowed)
}
~~~
This class has private and public data member.
We have one global function called add which is having an object of class Sample. This function is trying to access the data member of the class. In global function, upon object only public data member is accessable. So private and protected members are not accessable.

In order to access all member of class, either the function should be member of the class or class should recognize the function as a friend.
~~~C++
class Sample{
  int n1;

  public:
    int n2;

    Sample(){}
    Sample(int n1,int n2){
      this->n1=n1;
      this->n2=n2;
    }
    friend int add();

    ~Sample(){}
};

int add(){
  Sample c;               (allowed)
  c.number=10;            (allowed)
  c.n=20;                 (allowed)
  return c.n+c.number;    (allowed)
}
~~~

A friend function is a global function which can access all the member of the class upon object (not directly).Now as the function is defined with friend prefix inside class, it will be ab
le to access private member as well.

> Class say's, though function does not belongs to our member but it is our friend, so it can access our data.

>friend function is declared inside class and is defined outside the class without scope resolution operator.
