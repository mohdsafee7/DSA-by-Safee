#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

//brute force
/*int main(){
    vector<int> v1 = {1,1,2,3,4,5};
    vector<int> v2 = {2,3,4,4,5,6};
    set<int> st;

    for(int i=0; i<v1.size(); i++){ //O(n1logn)
        st.insert(v1[i]);
    }
    for(int i=0; i<v2.size(); i++){ //O(n2logn)
        st.insert(v2[i]);
    }

    // for(auto it : st)
    //     cout<<it<<" ";

    vector<int> unian; //SC - O(n1+n2)

    for(auto it : st){  //O(n1+n2) every element is unique
        unian.push_back(it);
    }

    for(int i=0; i<unian.size(); i++)  
        cout<<unian[i]<<" ";

return 0;

} */

int main(){
    vector<int> v1 = {1,1,2,3,4,5};
    vector<int> v2 = {2,3,4,4,5,6};
    vector<int> temp;
    int i=0,j=0;
    while(i < v1.size() && j < v2.size()){
        if(v1[i] <= v2[j]){
            if(temp.empty() || temp.back() != v1[i]){
            temp.push_back(v1[i]);
            }
            i++;
        }
        else {
            if(temp.empty() || temp.back() != v2[j]){
                temp.push_back(v2[j]);
                }
                j++;
        }
    }

    while(i < v1.size()){
        if(temp.empty() || temp.back() != v1[i]){
            temp.push_back(v1[i]);
            }
            i++;
    }

    while(j < v2.size()){
        if(temp.empty() || temp.back() != v2[j]){
            temp.push_back(v2[j]);
            }
            j++;
    }

    for(int x : temp){
        cout << x << " ";
    }

    return 0;
    
}