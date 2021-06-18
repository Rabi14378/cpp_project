
___
## Constructor Overloading
***
In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading.

- Overloaded constructors essentially have the same name (name of the class) and different number of arguments.

- A constructor is called depending upon the number and type of arguments passed.

- While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.
___

In above code,there are 4 Constructor for construct class.These are the example of constructor overloading.

```C++
Construct(){
      id=0;
      name="Default";
      salary=0;
    }
```
>This constructor has no argument and some default values are assigned to the data members.

* When object is created like `Construct c1` , there is no any arguments so this constructor is called.
***

```C++
Construct(int id,string name,float salary){
      this->id=id;
      this->name=name;
      this->salary=salary;
    }
```
>This constructor has three arguments and according to their arguments values of data member are assigned.

* When object is created like `Construct c2(int id,string name,float salary)`, there is 3 arguments so this constructor is called.

***

```C++
Construct(Construct & c1){
      id=c1.id;
      name=c1.name;
      salary=c1.salary;
    }
```

>This constructor has another object as argument and assignes the value of previously made object to newly created object.This constructor is also known as copy constructor.

* When object is created like `Construct c3(c2)`, this objects will have same value as object c2. As argument is object so this constructor will be called.
___
```C++
Construct(int id,string name){
      this->id=id;
      this->name=name;
      salary=1200;
    }
```

>This constructor has only two arguments and assignes these argument values to respected data member.
* When object is created like `Construct(4,"Aditya")`, there are twp arguments so this constructor will be called.
___
## Output 
```C++
  c1.showData();
```
<div style="background-color:grey">
<pre>Name :Default
Id :4
salary :0
</pre>
</div>

```C++
c2.showData();
```
<div style="background-color:grey">
<pre>Name :Abhishek
Id :2
salary :1234.98
</pre>
</div>

```C++
c3.showData();
```
<div style="background-color:grey">
<pre>Name :Abhishek
Id :2
salary :1234.98
</pre>
</div>

```C++
c3.showData();
```
<div style="background-color:grey">
<pre>Name :Aditya
Id :3
salary :1200.32
</pre>
</div>