#include<iostream>
using namespace std;

class Human{
  string religion, color;

  protected:
  string name;
  int age, weight;
};

class Student: public Human{
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

class Teacher: public Human{
  int salary;

  public:
  Teacher(int salary, string name, int age){
    this->salary = salary;
    this->name = name;
    this->age = age;
  }
  
  void display(){
    cout<<name<<" "<<age<<" "<<salary<<endl;
  }
};

int main(){
    // Student A;
    // A.name = "rohit";
    // A.fn("rohit");


    Student B("Safee", 23, 255, 55);
    B.display();

    Teacher C(45000, "Sofia", 22);
    C.display();
  return 0;
}