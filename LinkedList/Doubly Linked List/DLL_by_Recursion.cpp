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
  //print ll

  Node* curr = head;
  while(curr){
    cout<<curr->data<<" ";
    curr = curr->next;
  }
  return 0;
}