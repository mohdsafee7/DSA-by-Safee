#include<iostream>
using namespace std;

class  Area{
  public:

  int calculateArea(int r){ //circle
    return 3.14*r*r;
  }

  int calculateArea(int l, int b){ //rectange
    return l*b;
  }

  int calculateArea(int l, int b, int h){ //cuboid
    return l*b*h;
  }
};

int main(){
  Area A1;
  cout<<A1.calculateArea(4)<<endl;
  cout<<A1.calculateArea(4,5)<<endl;
  cout<<A1.calculateArea(4,5,4)<<endl;
  return 0;
}