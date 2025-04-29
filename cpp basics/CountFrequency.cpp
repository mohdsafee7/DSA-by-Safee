// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int maxfreq = 0;
    int maxele = 0;
    for(auto mpp : mp){
        int freq = mpp.second;
        int ele = mpp.first;

        if(freq > maxfreq) { maxfreq = freq; maxele = ele; }

        cout<<mpp.first<<"->"<<mpp.second<<endl;

    }
    cout<<"The highes frequency element is" << maxele << "having frequency: " << maxfreq;
}

/*
We can simply use two loops, in which the first loop points to one element and the second loop finds 
that element in the remaining array. We will keep track of the occurrence of that same element by
 maintaining a count variable. We also have to maintain a visited array so that it will keep track of 
 the duplicate elements that we already count.  

Approach: 

Make a visited array of type boolean.
Use the first loop to point to an element of the array.
Initialize the variable count to 1.
Make that index true in the visited array.
Run second loop, if we find the element then mark the visited index true and increase the count.
If the visited index is already true then skip the other steps.*/

/*
 
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}*/