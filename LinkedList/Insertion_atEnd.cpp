#include<iostream>
#include<vector>
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

/*
int main(){
  vector<int> arr = {2,4,6,3};
  Node *head = NULL;

  for(int i=0; i<4; i++){
      if(head == NULL){
        head = new Node(arr[i]);
      }
      else{
         Node *temp = head;
         while(temp->next != NULL){
            temp = temp->next;
          }
      // Node *newNode;
      // newNode = new Node(14);
        temp->next =new Node(arr[i]);
      }
  } 

  //to print ll
  Node *ptr = head;
  while(ptr != NULL){
    cout<<ptr->data<<" ";
    ptr = ptr->next;
  }
  return 0;
}
*/

//best one
int main(){
  vector<int> arr = {2,4,6,3};
  Node * head = NULL;
  Node * tail; //agar yaha pe hi head ko point kara diya to tail me bhi NULL aa jayega so it will not work dude 

  for(int i=0; i<4; i++){
    if(head == NULL){
      head = new Node(arr[i]);
      tail = head;
    }
    else{
      tail->next = new Node(arr[i]);
      tail = tail->next;
    }
  }

  //to print our LL
  Node *temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}