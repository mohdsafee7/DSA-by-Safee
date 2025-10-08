//convert arr to linked list
#include<iostream>
#include<vector>
using namespace std;

//node
class Node
{
  public:
  int data;
  Node *next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

int main(){
  vector<int> arr = {2,4,6,3};

  //creating a node
  Node *head;
  head = NULL;

  //traverse in arr and insert each ele into ll
  for(int i=0; i<4; i++){
    if(head == NULL){
      head = new Node(arr[i]);
    }
    else{
      Node *newNode;
      newNode = new Node(arr[i]); //this is in heap(dynamic mem.)
      newNode->next = head;
      head = newNode;
    }
  }

  //to print the values of ll
  Node *temp;
  temp = head;

  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  return 0;
}