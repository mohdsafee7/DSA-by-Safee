//Stack using Array
#include<iostream>
#include<vector>
using namespace std;

class Stack{
  vector<int> stack;
  int top;
  int capacity;

  public:
  //constructor
  Stack(int s) : stack(s), top(-1), capacity(s) {}
  // Stack(int s){
  //   capacity = s;
  //   top = -1;
  //   stack[s];
  // }

  void push(int value){
    if(top == capacity-1){
      cout<<"Stack Overflow"<<endl;
      return;
    }
    else{
      top++;
      stack[top] = value;
    }
  }

  void pop(){
    if(top == -1){
      cout<<"Stack Underflow"<<endl;
      return;
    }
    cout<<"Popped : "<<stack[top]<<endl;
    top = top-1;
  }

  void peek(){
    if(top == -1){
      cout<<"Stack is Empty"<<endl;
      return;
    }
    else{
      cout<<stack[top]<<endl;
    }
  }

  void isEmpty(){
    if(top == -1){
      cout<<"Stack is Empty"<<endl;
      return;
    }
    else{
      cout<<"Stack is not Empty"<<endl;
    }
  }

  void isSize(){
    cout<<stack.size()<<endl;
    cout<<top+1<<endl;
    return;
  }
};


int main(){
  Stack st(5);
  st.push(10);
  st.push(8);
  st.push(7);
  st.peek();
  st.pop();
  st.peek();
  st.pop();
  st.pop();
  st.pop();
  st.peek();

  return 0;
}