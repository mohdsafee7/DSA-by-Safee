#include<iostream>
using namespace std;
bool targetSum(int arr[], int index, int n, int target){
      //if the target becomes zero return true;
      if(target == 0)
        return true;
      //if index goes out of the bound or target becomes negative
      if(index == n || target < 0)
        return false;

        //if not included in target sum OR if included in target sum
  return targetSum(arr,index+1,n,target) || targetSum(arr,index+1,n,target-arr[index]);
}

int main(){
  int arr[] = {3,6,4,5};
  int target = 12;

  cout<<targetSum(arr,0,4,target);

  return 0;
}