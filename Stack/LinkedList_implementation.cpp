//Stack using Linked List
#include<iostream>
// #include<stack>
using namespace std;


class Node{
  public:
    int data;
    Node* next;
  
  Node(int val){
    data = val;
    next = NULL;
  }
};

class Stack{
  Node* top;
  int size;

  public:
  Stack(){
    top = NULL;
    size = 0;
  }

  void push(int val){
    Node* temp = new Node(val);
    temp->next = top;
    top = temp;
    size++;
    cout<<"Pushed "<<val<<"into the stack"<<endl;
    return ;
  }

  void pop(){
    if(!top)
      cout<<"Stack Underflow"<<endl;
    else{
      Node* temp = top;
      cout<<"Popped: "<<temp->data<<endl;
      top = top->next;
      delete temp;
      size--;

      return;
    } 
  }

  void peek(){
    if(!top){
      cout<<"Stack is Empty";
      return;}
    else{
      cout<<top->data<<endl;
      return;
    }
  }

  bool isEmpty(){
    return top == NULL;
  }
};

int main(){
  Stack st;
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