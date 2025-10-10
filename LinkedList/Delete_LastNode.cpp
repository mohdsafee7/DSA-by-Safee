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


  //delete a node at last
  if(head != NULL){
    //edge case: while there is only one node in LL
    if(head->next == NULL){
      Node*temp = head;
      delete temp;
      head = NULL;
    }
    else{
      //more than one node
      Node *curr = head, *prev = NULL;  
      while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
      }
      delete curr; //delete the last node
      prev->next = NULL;
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