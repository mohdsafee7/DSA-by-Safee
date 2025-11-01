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
  vector<int> arr = {2,3,4,5,6,7};
  head = createDLL(arr,0,6, NULL);
  
  //Insert at pos
  int pos = 3;

  //delete at first
  if(pos == 1){
    //if only one node exist
    if(head->next == NULL){
      delete head;
      head = NULL;
    }
    else{
      Node* temp = head;
      head = head->next;
      delete temp;
      head->prev = NULL;
    }
  }
  else{
    Node* curr = head;
    while(--pos){
      curr = curr->next;
    }

    //check if it is last node
    if(curr->next == NULL){//we are at end
      curr->prev->next = NULL;
      delete curr;
    }
    else{
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete curr;
    }
  }
  //print ll

  Node* curr = head;
  while(curr){
    cout<<curr->data<<" ";
    curr = curr->next;
  }
}
