#include<iostream>
#include<utility>
using namespace std;

int main(){
    int arr[] = {2,4,1,99,11,9,5,18,13};
    int n = 9;


    for(int i=0; i < n; i++){
        int j=i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}