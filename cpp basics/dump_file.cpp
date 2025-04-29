#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int i,int n){
    
    if(i>n)
        return;
    // cout<<"Name";
    cout<< i;
    // i++;
    print(i+1,n);

}


int main(){
    int i=1,n = 1f4;
    print(i,n);

    return 0;
}