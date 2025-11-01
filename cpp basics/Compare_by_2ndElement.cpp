#include<iostream>
#include<math.h>
#include<algorithm>
#include<bit>
// #include<std/c++.h>

#include<vector>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
  return tie(p1.second, p1.first) < tie(p2.second, p2.first);
}


// bool comp(pair<int,int> p1, pair<int,int> p2){
//   if(p1.second < p2.second) return true;
//   if(p1.second > p2.second) return false;
//   if(p1.first > p2.first)   return true;

//   return false;
// }
int main(){
  vector<pair<int, int>> arr = {{2,34}, {2,21}, {22,3}, {23,43},{1,2},{2,-1},{1,34}};

  sort(begin(arr), end(arr), comp);
  for(auto arri : arr)
   cout << arri.first<<","<<arri.second <<endl;

  int num = 10;
  int set_bits = __builtin_popcount(num);
  cout<<"The number of set bits in num : "<<set_bits<<endl;
  // int set_bit = popcount(num);
  // cout<<"total bits 1"<<set_bit;


  //permutation
  string s = "123";
  while(next_permutation(s.begin(), s.end())){
    cout<<s<<" AND "<<endl;
  }
  int n = 778889;

  cout<< (int)log10(n)+1;
  return 0;
}