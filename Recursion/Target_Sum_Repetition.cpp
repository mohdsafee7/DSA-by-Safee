#include<iostream>
#include<vector>

/*
This code counts the number of ways to reach a given target sum by repeatedly 
choosing elements from an array (each element can be chosen any number of times or skipped).
*/



using namespace std;
void target_sum(vector<int>& arr, int index, int n, int sum, int & count) {
    // Base case: if we've reached the end of the array
    if (index == n) {
        if (sum == 0) {
            count++;
        }
        return;
    }

    // Pruning condition: if the current sum already exceeds the target, stop this path
    if (sum < 0) {
        return;
    }

    // Include the current element and recurse
    target_sum(arr, index, n, sum-arr[index], count);

    // Exclude the current element and recurse
    target_sum(arr, index + 1, n, sum, count);
}

int main(){
  vector<int> arr = {2,3,4,0};
  int n = arr.size();
  int sum = 6;
  int count = 0;

  //fn call
  target_sum(arr,0,n, sum, count);

  cout<<"The target sum by repeating of elements are: "<<count;

  return 0;
}