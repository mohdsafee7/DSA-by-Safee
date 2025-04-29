// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

void check(int i,string &s){
    int n = s.size();

    if(i >= n/2) {cout<<"true";
                    return; }
    if(s[i] != s[n-i-1]) {cout<<"false";
                            return; }

    check(i+1,s);
}

int main(){
    string s = "gungun";
    check(0,s);

    return 0;
}



