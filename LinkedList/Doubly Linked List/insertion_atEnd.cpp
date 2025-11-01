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
  vector<int> arr = {2,3,4,5,6,7};

  //insertion at end
  Node* tail = NULL;
  for(int i=0; i<6; i++){
    if(head == NULL){
      head = new Node(arr[i]);
      tail = head;
    }
    else{
      // Node* curr = head;
      // while(curr->next != NULL){
      //   curr = curr->next;
      // }
      Node* newNode = new Node(arr[i]);
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
      
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