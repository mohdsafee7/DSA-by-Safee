#include<iostream>
using namespace std;

class Human{
  public:
  string name;

  void display(){
    cout<<"My name is: "<<name<<endl;
  }
};

class Engineer: public virtual Human{
  public:
  string specialization;

  void work(){
    cout<<"I have specialized in "<<specialization<<endl;
  }
};

class Youtuber: public virtual Human{
  public:
  int subscribers;

  void contentCreator(){
    cout<<"I have a total of "<<subscribers<<" subscribers"<<endl;
  }
};

class CodeTeacher: public Engineer, public Youtuber{
  public:
  int Salary;

  CodeTeacher(string name, string specialization, int subscribers,int Salary){
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
    this->Salary = Salary;
  }

  void display(){
    cout<<"Everythin is working fine by using Virtual Keyword, No ambiguity in name now";
  }

};

int main(){
  CodeTeacher A1("Safee", "CSE", 50000, 99);
  A1.display();

  return 0;
}