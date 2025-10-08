#include<iostream>
#include<exception>
using namespace std;

int main(){
  try{
    int *p = new int[199999999999999];
    cout<<"Memory allocation is successful\n";
    delete []p;
  }
  //const bad_alloc &e
  catch(const exception &e){
    cout<<"Exception Occured : "<<e.what()<<endl;
  }
  return 0;
}