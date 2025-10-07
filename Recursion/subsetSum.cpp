#include<iostream>
#include<vector>
#include<numeric> //for accumulate
using namespace std;


//tc will be O(2^n)
void subsequence(int arr[], int index, int n, vector<int>& ans, int temp){
  //base condition if index comes out of arrr
  if(index == n)
    {
      ans.push_back(temp);
      // temp = 0;
      return;
    }


  //if not included
    subsequence(arr, index+1, n, ans, temp);
  //if included then add to temp then call
    subsequence(arr, index+1, n, ans, temp+arr[index]);
  
}

int main(){
  int arr[] = {3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  // cout<<n;
  vector<int> ans;
  int temp=0;

  subsequence(arr,0,n,ans,temp);


  cout<<endl<<"The subset sum of each vector in ans: ";
  for(int i: ans)
    cout<<i<<" ";

  return 0;
}