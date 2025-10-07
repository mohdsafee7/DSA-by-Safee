#include<iostream>
using namespace std;

class Human{
  string religion, color;

  protected:
  string name;
  int age, weight;
};

class Student: private Human{
  int roll, fees;

  public:
  // void fn(string s){
  //   name = s;
  // }

  Student(string name, int age, int roll, int weight){
    this->name = name;
    this->age = age;
    this->roll =roll;
    this->weight = weight;
  }

  void display(){
    cout<<name<<" "<<age<<" "<<roll<<" "<<weight<<endl;
  }
};

int main(){
    // Student A;
    // A.name = "rohit";
    // A.fn("rohit");


    Student B("Safee", 23, 255, 55);
    B.display();


  return 0;
}