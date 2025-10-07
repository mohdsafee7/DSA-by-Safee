#include<iostream>
#include<vector>
using namespace std;

// Recursive function to generate all permutations of the array.
// It swaps elements to fix one position at a time and explores all possibilities.
void permut(vector<int> &arr, vector<vector<int>>& ans, size_t index){
  // Base condition: If index reaches the end, store the current permutation in ans.
  if(index == arr.size()){
    ans.push_back(arr);
    return ;
  }

  // Iterate through the array, swapping each element with the current index.
  for(size_t i=index; i<arr.size(); i++){
    swap(arr[i], arr[index]); // Swap to fix the element at 'index' position.
    permut(arr, ans, index+1); // Recursively generate permutations for the next index.
    swap(arr[index], arr[i]); // Backtrack: Restore the array to its previous state.
  }
}

int main(){
  vector<int> arr = {1,2,3}; // Input array for which permutations are to be generated.
  vector<vector<int>> ans; // Stores all generated permutations.

  permut(arr, ans, 0); // Start generating permutations from index 0.

  // Print all generated permutations.
  for(auto num : ans){
  for(auto i : num){
    cout << i << " "; // Print each element of the permutation.
  }
  cout << endl; // Move to the next line after each permutation.
  }

  // Print the total number of permutations generated.
  cout << "size of ans is: " << ans.size();
  return 0;
}
