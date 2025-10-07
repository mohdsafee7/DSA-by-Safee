#include<iostream>
using namespace std;

class Student {
  private:
  int id;
  int age;
  string name;
  // int age;

  //Getter and Setter 
  public:
  void setId(int i){
    id = i;
  }

  void setName(string s){
    name = s;
  }

  void setAge(int a){
    age = a;
  }

  void getId(){
    cout<<id<<" ";
  }

  void getName(){
    cout<<name<<" ";
  }

  int getAge(){
    return age;
  }

};

int main(){
  
  Student s1;
  cout<<sizeof(s1)<<endl; //concept of PADDING applying here
  // s1.id = 101;
  // s1.name = "Safee";
  // s1.age = 21;

  // cout<<s1.id<<" "<<s1.name<<" "<<s1.age<<endl;

  s1.setId(1);
  s1.setName("Safia");
  s1.setAge(22);

  s1.getId();
  s1.getName();
  cout<<s1.getAge()<<endl;;


  //dynamic memory allocation
  cout<<"Dynamic Memory Allocation: ";
  Student *s2 = new Student;
  s2->setAge(25);
  cout<<"Age: " <<s2->getAge();
  return 0;
}