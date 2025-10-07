#include<iostream>
#include<vector>
using namespace std;

// Recursive function to generate all permutations
void permut(vector<int> &arr, vector<int>& temp, vector<vector<int>>& ans, vector<int>& visited){
  // Base case: if temp has same size as arr, we found a permutation
  if(arr.size() == temp.size()){
    ans.push_back(temp); // Add current permutation to answer
    return;
  }

  // Try every element in arr for the current position
  for(int i = 0; i < arr.size(); i++){
    // If element arr[i] is not used in current permutation
    if(visited[i] == 0){
      visited[i] = 1; // Mark as used
      temp.push_back(arr[i]); // Add to current permutation

      // Recurse to fill next position
      permut(arr, temp, ans, visited);

      // Backtrack: unmark and remove last element to try next possibility
      visited[i] = 0;
      temp.pop_back();
    }
  }
}

int main(){
  vector<int> arr = {1,2,3,4}; // Input array
  int n = arr.size();
  vector<vector<int>> ans; // Stores all permutations
  vector<int> temp; // Current permutation being built
  vector<int> visited(n, 0); // Tracks used elements

  // Generate all permutations
  permut(arr, temp, ans, visited);

  // Print all permutations
  for(auto num : ans){
    for(auto i : num){
      cout << i << " ";
    }
    cout << endl;
  }

  // Print total number of permutations
  cout << "size of ans is: " << ans.size();
  return 0;
}