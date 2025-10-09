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

  //insertion at position 
  int x = 3; //insert at 3rd positon
  int value = 30;
  Node*ptr = head;
  x--; // ptr ko 2 postion chalao i.e, (x-1) postion
  while(x){
    ptr = ptr->next;
    x--;
  } 
  //ab ptr jahan pe insert karna h uske ek peeche aa gya h (2 par)
  //now create a node
  Node*temp = new Node(value);
  //temp ke next ko ptr ke next point karo
  temp->next = ptr->next;
  //ab ptr ko temp pe point karado
  ptr->next = temp;




  //to print
  temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  return 0;
}