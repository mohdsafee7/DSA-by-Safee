#include<iostream>
using namespace std;

class Engineer{
  public:
  string specialization;

  void work(){
    cout<<"I have specialized in "<<specialization<<endl;
  }
};

class Youtuber{
  public:
  int subscribers;

  void contentCreator(){
    cout<<"I have a total of "<<subscribers<<" subscribers"<<endl;
  }
};

class CodeTeacher: public Engineer, public Youtuber{
  public:
  string name;

  CodeTeacher(string name, string specialization, int subscribers){
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
  }

  void showcase(){
    cout<<"My name is "<<name<<endl;
    work();
    contentCreator();
  }
};

int main(){
  CodeTeacher A1("Safee", "CSE", 50000);
  A1.showcase();
  return 0;
}