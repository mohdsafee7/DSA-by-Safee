#include<iostream>
#include<vector>
using namespace std;

//Quick sort TC - O(NlogN) and SC - O(1)

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high) {
            i++;
        }

        while(arr[j] > pivot && j >= low){
            j--;
        }
        
        //when j crosss i
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
        swap(arr[low], arr[j]); //j is the last element of left index

        return j;
}


void quicksort(int arr[], int low, int high){
    if(low < high){
        int partition_idx = partition(arr,low,high);
        quicksort(arr,low, partition_idx-1);
        quicksort(arr,partition_idx+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the n: ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after Quick sorting: "<<endl;
    quicksort(arr,0,n-1);
    
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
