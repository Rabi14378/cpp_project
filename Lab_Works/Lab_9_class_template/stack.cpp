#include<iostream>


template<class T>
class Stack {

    int top;
    T *data;
  public:
    Stack();
    void push(T);
    T pop();
    void display();
    ~Stack();

};
template<class T>
Stack<T>::Stack(){
  this->top=-1;
  data=new T[this->top+1];
}
template<class T>
void Stack<T>::push(T item){
  T *temp=new T[++top];
  for(int i=0;i<top;i++){
    temp[i]=data[i];
  }
  delete []this->data;
  this->data=new T[top+1];
  for(int i=0;i<top;i++){
    this->data[i]=temp[i];
  }
  this->data[top]=item;
  delete []temp;
}
template<class T>
T Stack<T>::pop(){
  T popedData;
  if(top==-1){
    std::cout<<"Stack is empty"<<std::endl;
    return T(-1);
  }
  else{
    popedData=data[top];
    T *temp=new T[top];
    for(int i=0;i<top;i++){
      temp[i]=this->data[i];
    }
    delete []data;
    this->data=new T[top];
    for(int i=0;i<top;i++){
      this->data[i]=temp[i];
    }
    delete []temp;
    top--;
    return popedData;
  }
}
template<class T>
void Stack<T>::display(){
  std::cout<<"Data on the stack:"<<std::endl;
  for(int i=0;i<top+1;i++){
    std::cout<<data[i]<<std::endl;
  }
}
template<class T>
Stack<T>::~Stack(){
  delete []data;
}
template<class T>
void pushData( Stack<T> *s1){
  T item;
  std::cout<<"Enter data :"<<std::endl;
  std::cin>>item;
  s1->push(item);
}
int main(){
  
  Stack<char> *s1=new Stack<char>;
  int a;
  while (a)
  {
    std::cout<<"1.Add item:\n2.Remove item\n3.Display items\n4.exit\n"<<std::endl;
    std::cin>>a;
    switch (a)
    {
      case 1:
        pushData(s1);
        break;
      case 2:
        std::cout<<"removed item is : "<<s1->pop()<<std::endl;
        break;
      case 3:
        s1->display();
        break;
      default:
        return 0;
    }
  }
  
  std::cin.get();

  return 0;
}