#include<iostream>
using namespace std;
template<class T>
class Stack {
  T stack[20];
  int top;
  public:

    Stack(){
        top=-1;
    }
    void push (T data){
      stack[++top]=data;
    }
    T pop(){
      return stack[top--];
    }
    int size(){
      return top+1;
    }
    ~Stack(){}
};

int main(){
  cout<<"Stack for integer data type :"<<endl;
  Stack<float>s1;
  cout<<"size of stack is "<<s1.size()<<endl;
  s1.push(1.1);
  s1.push(2.2);
  s1.push(3.3);
  cout<<"Size of stack "<<s1.size()<<endl;
  cout<<"Number popped "<<s1.pop()<<endl;
  cout<<"Number popped "<<s1.pop()<<endl;
  cout<<"size of stack is "<<s1.size()<<endl;
  s1.push(4.1);
  cout<<"size of stack is "<<s1.size()<<endl;
  cout<<"Number popped "<<s1.pop()<<endl;
  cout<<"Number popped "<<s1.pop()<<endl;

  cout<<"size of stack is "<<s1.size()<<endl;

  return 0;
}