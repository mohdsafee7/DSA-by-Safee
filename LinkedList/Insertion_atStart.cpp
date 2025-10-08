#include<iostream>
using namespace std;

//creating a node
class Node
{
  public:
  int data;
  Node *next;

  Node(int value){
    data = value;
    next = NULL;
  }
};
int main(){
  Node *head; //dynamically
  head = NULL;
  //agar LL empty hai
  if(head == NULL){
    head = new Node(2);
  }
  else{
    Node *newNode;
    newNode = new Node(4);
    newNode->next = head;
    head = newNode;
  }
  // head->data = 2;
  // head->next = NULL;

  cout<<head->data<<endl;
  cout<<head->next;
  return 0;
}