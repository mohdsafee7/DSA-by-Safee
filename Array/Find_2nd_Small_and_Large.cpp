#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if(n < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int firstsmall = arr[0];
    int secondsmall = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != firstsmall) {
            secondsmall = arr[i];
            break;
        }
    }

    int firstlarge = arr[n-1];
    int secondlarge = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != firstlarge) {
            secondlarge = arr[i];
            break;
        }
    }

    if(secondsmall == -1) {
        cout << "There is no second smallest number." << endl;
    } else {
        cout << "First small num: " << firstsmall << ", Second small num: " << secondsmall << endl;
    }

    if(secondlarge == -1) {
        cout << "There is no second largest number." << endl;
    } else {
        cout << "First large num: " << firstlarge << ", Second large num: " << secondlarge << endl;
    }

    return 0;
}
/*
Solution 2(Better Solution)
Intuition:
Even though we want to have just the second smallest and largest elements, we are still sorting the entire array for that 
and thus increasing the time complexity. Can we somehow try to not sort the array and still get our answer?

Approach:
Find the smallest and largest element in the array in a single traversal
After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
Similarly, we would find the largest element which is just smaller than the largest element we just found
Indeed, this is our second smallest and second largest element.
*/


#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}



/*
Intuition:
In the previous solution, even though we were able to bring down the time complexity to O(N), we still needed to do 
two traversals to find our answer. Can we do this in a single traversal by using smart comparisons on the go?

Approach:
We would require four variables: small,second_small, large, and second_large. Variable small and second_small are initialized 
to INT_MAX while large and second_large are initialized to INT_MIN.

Second Smallest Algo:

If the current element is smaller than ‘small’, then we update second_small and small variables
Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’
Once we traverse the entire array, we would find the second smallest element in the variable second_small.
Here’s a quick demonstration of the same.
Second Largest Algo:

If the current element is larger than ‘large’ then update second_large and large variables
Else if the current element is larger than ‘second_large’ then we update the variable second_large.
Once we traverse the entire array, we would find the second largest element in the variable second_large.
Here’s a quick demonstration of the same.
*/




#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}


