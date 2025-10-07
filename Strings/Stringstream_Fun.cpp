#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
  string str = "Safee is the Name of the owner which is here";

  stringstream ss(str);

  //to store each parts of str
  vector<string> stream;

  string token= "";

  while(getline(ss, token, ' ')){
    stream.push_back(token);
  }

  for(auto it : stream)
    cout<<it<<endl;
  return 0;
}