#include<iostream>
#include<utility> //for swap function
//Time complex is O(n^2)
using namespace std;
int main(){
    int arr[] = {2,4,1,99,11,9,5,18,13};
    int n = 9;

    //selection sort
    //let i points to the first ele and j is i+1 , we will compare every arr(j) with i, if it is smaller then do swap
    for(int i=0; i<= n-2; i++){
        int mini = i;
        for(int j=i+1; j<= n-1; j++){
            //we will find out the minimum ele in the range j to n-1
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
    swap(arr[i], arr[mini]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}