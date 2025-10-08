#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  try{
    if(b==0)
      throw "Divide by 0 error";
      
    int c = a/b;
    cout<<"Answer: "<<c<<endl;

  }
  catch(const char *e){
      cout<<"exception occured"<<e<<endl;
  }

  return 0;
}