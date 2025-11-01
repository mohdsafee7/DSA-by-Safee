#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;

  Node(int value){
    data = value;
    prev = nullptr;
    next = nullptr;
  }
};

int main(){
  Node* head = NULL;
  vector<int> arr = {2,3,4,5,6};

  //insertion at begin
  for(int i=0; i<5; i++){
    if(head == NULL){
      head = new Node(arr[i]);
    }
    else{
      Node* newNode = new Node(arr[i]);
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  //print ll

  Node* curr = head;
  while(curr){
    cout<<curr->data<<" ";
    curr = curr->next;
  }
  return 0;
}