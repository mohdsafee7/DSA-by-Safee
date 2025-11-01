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

Node* createDLL(vector<int>& arr, int index, int size, Node* back){
  if(index == size){
    return NULL;
  }

  Node* temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, index+1, size, temp);

  return temp;
}


int main(){
  Node* head = NULL;
  vector<int> arr = {2,3,4,5,6};
  head = createDLL(arr,0,arr.size(), NULL);

  int pos = 4;

  //insert at start
  if(pos == 0){
    //if ll doesn't exists
    if(head == NULL){
      head =new Node(15);
    }
    //LL already exists
    else{
      Node* temp = new Node(15);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
  }
  else{
    Node* curr = head;
    //go to the node at pos where we have to insert
    while(--pos){
      curr = curr->next;
    }
    //if we are at last(insert at end)
    if(curr->next == NULL){ //we are at last node
      Node* temp = new Node(20);
      temp->prev = curr;
      curr->next = temp;
    }
    else{
      //insert at middle
      Node* temp = new Node(111);
      temp->next = curr->next;
      temp->prev = curr;
      curr->next = temp;
      temp->next->prev = temp;
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