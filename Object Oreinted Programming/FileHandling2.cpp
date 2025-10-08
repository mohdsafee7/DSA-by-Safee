#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
  vector<int> arr {3,4,2,4,1};


  //open file
  ofstream fout;
  fout.open("zero.txt");

  fout<<"Original Data: ";
  for(int i=0; i<arr.size(); i++){
    fout<<arr[i]<<" "; //data ko file me daal rhe hain
  }

  //sorting
  fout<<"\nSorted data: ";
  sort(arr.begin(), arr.end());
  //inserting it again to file after sorting
  for(int i=0; i<arr.size(); i++){
    fout<<arr[i]<<" "; //data ko file me daal rhe hain
  }

  fout.close();
  return 0;
}