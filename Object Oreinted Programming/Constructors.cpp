#include<iostream>
using namespace std;
class Customer{
  string name;
  int accNo;
  int balance;

  public:
  Customer (){ 
    cout<<"Default Costructor is Called"<<endl;
  }

  //parameterized constuctor
  // Customer(string name, int accNo, int balance){
  //   cout<<"from parameterized constructor: "<<endl;
  //   this->name = name;
  //   this->accNo = accNo;
  //   this->balance = balance;
  // }

  //inline constructor , constructor with different argument i.e. Constructor Overloading
  inline Customer(string a , int b, int c): name(a), accNo(b), balance(c){ }
  
  void display(){
    cout<<name<<" "<<accNo<<" "<<balance<<endl;
  }
};

int main(){
  Customer a1; //default constructor is called 

  Customer a2("Safee", 255, 50000);
  a2.display();

  Customer a3("Sofia", 253, 40000);
  a3.display();

  return 0;
}