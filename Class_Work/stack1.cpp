#include<iostream>
using namespace std;
template<class T>
class Stack {
  T stack[3];
  int top;
  public:
    class Full{};
    class Empty{};
    Stack(){
        top=-1;
    }
    void push (T data){
      if(top!=3)
        stack[++top]=data;
      else
        throw Full();
    }
    T pop(){
      if(top==-1)
        throw Empty();
      else
        return stack[top--];
    }
    int size(){
      return top+1;
    }
    ~Stack(){}
};

int main(){
  Stack<int> s1;
  try{
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<"size of stack is:"<<s1.size()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<"size of stack is:"<<s1.size()<<endl;
    s1.pop();
  }
  catch(Stack<int>::Full){
    cout<<"Stack overflow!!!"<<endl;
  }
  catch(Stack<int>::Empty){
    cout<<"Stack is empty!!"<<endl;
  }
  return 0;
}