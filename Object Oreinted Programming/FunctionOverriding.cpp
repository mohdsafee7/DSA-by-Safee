//Virtual Function , Function Overriding Concepts
#include<iostream>
using namespace std;

class Animal
{

public:
  // Animal(/* args */){cout<<"animal constructor\n"; };

  // virtual void speak(){
  //   cout<<"HuHu\n";
  // }

  virtual void speak()=0; //Abstract Class

  // ~Animal( ){};
};

class Dog: public Animal{
  public:

  void speak() override {
    cout<<"Bark\n";
  }

  void mess(){
    cout<<"Hello\n";
  }
};

class Cat: public Animal{
  public:

  void speak() override {
    cout<<"Meow Meow\n";
  }

  void mess(){
    cout<<"Hello\n";
  }
};

int main(){
  Animal *p; //compile time pe memory allocate
  p = new Dog(); //runtime memory allocation in case of new keyword
  p->speak(); //compile time
  
  p = new Cat();
  p->speak();
  Dog d;
  d.mess();
  return 0;
}