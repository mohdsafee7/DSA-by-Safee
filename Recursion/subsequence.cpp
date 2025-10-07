#include<iostream>
#include<vector>
#include<numeric> //for accumulate
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>>& ans, vector<int>& temp){
  //base condition if index comes out of arrr
  if(index == n)
    {
      ans.push_back(temp);
      return;
    }


  //if not included
    subsequence(arr, index+1, n, ans, temp);
  //if included then add to temp then call
    temp.push_back(arr[index]);
    subsequence(arr, index+1, n, ans, temp);
    //after executing and pushing temp back to ans, remove that element before going back in thiw way we can save space ...O(n)
    temp.pop_back();
}

int main(){
  int arr[] = {3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  // cout<<n;
  vector<vector<int>> ans;
  vector<int> temp;

  subsequence(arr,0,n,ans,temp);

  for(size_t i=0; i<ans.size(); i++){
    for(size_t j=0; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }


  //Now printing the sum of each subset 
  vector<int> subsetSum(ans.size(),0);
  //traverse in ans(2d vector) and find out the sum of each vector
  for(size_t i=0; i<ans.size(); i++){
    subsetSum[i] = accumulate(ans[i].begin(), ans[i].end(), 0);
  }

  cout<<endl<<"The subset sum of each vector in ans: ";
  for(int i: subsetSum)
    cout<<i<<" ";

  return 0;
}