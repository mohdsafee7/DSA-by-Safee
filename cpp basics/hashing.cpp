#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements of size "<<n<<": ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precomputing
    int hash[n+1] = {0};
    for(int i=0; i <=n; i++){
        hash[arr[i]] += 1;
    }

    //taking queries 
    int q;
    cout<<"Enter number of queries.";
    cin>>q;

    cout<<"Enter queries(Numbers whose occurence/freq you want to find: )"<<endl;
    while(q--){
        int number;
        cin >> number;

        //fetching
        cout<<"->"<< hash[number];
    }

    

    


}