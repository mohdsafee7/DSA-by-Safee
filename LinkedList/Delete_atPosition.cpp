#include<iostream>
#include<vector>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }
};

Node* CreateLinkedList(vector<int>& arr, int index, int n){
  if(index == n){
    return NULL;
  }
  Node* temp;
  temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index+1, n);

  return temp;
}

int main(){
  vector<int> arr = {2,4,6,8,10};
  Node* head;
  head = NULL;

  head = CreateLinkedList(arr, 0, 5); //creating a linked list

  //delete at position x
  int x = 3;
  if(head != NULL){
    //edge case when x is 1
    if(x == 1){
      Node * temp = head;
      head = head->next;
      delete temp;
    }
    else{
      Node* prev = NULL;
      Node*  curr = head;
      x--; //we pointed curr at pos 1 intially so we will move x-1 pos ie 3
      while(x--){
        prev = curr;
        curr = curr->next;
      }
      prev->next = curr->next;
      delete curr;
    }
  }

  //to print
  Node* temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  return 0;
}