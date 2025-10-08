#include<iostream>
using namespace std;

class Complex{
  int real,img;

  public:
  Complex(){ 
    //default constructor
  }
  Complex(int real, int img){
    this->real = real;
    this->img = img;
  }

  void display(){
    cout<<real<<" + i"<<img<<endl;
  }

  //operator overloading
  //within the class same private member ko access kar sakte hain
  Complex operator +(Complex &C2){
    Complex ans;
    ans.real = real + C2.real;
    ans.img = img + C2.img;

    return ans;
  }
};

int main(){
  Complex C1(3,2);
  // C1.display();
  Complex C2(4,6);

  Complex C3 = C1+C2; //C1.funtion(C2) aise ho rha h call

  C3.display();
  return 0;
}