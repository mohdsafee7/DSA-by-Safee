#include<iostream>
#include<vector>
using namespace std;
void perfectsum(vector<int>& arr, int index, int n, int sum, int & count, int target) {
    // Base case: if we've reached the end of the array
    if (index == n) {
        if (sum == target) {
            count++;
        }
        return;
    }

    // Pruning condition: if the current sum already exceeds the target, stop this path
    if (sum > target) {
        return;
    }

    // Include the current element and recurse
    perfectsum(arr, index + 1, n, sum + arr[index], count, target);

    // Exclude the current element and recurse
    perfectsum(arr, index + 1, n, sum, count, target);
}

int main(){
  vector<int> arr = {5,2,3,6,10,8};
  int n = arr.size();
  int sum = 0;
  int target = 10;
  int count = 0;

  //fn call
  perfectsum(arr,0,n, sum, count, target);

  cout<<"Perfect Sum Subarrays are: "<<count;

  return 0;
}