#include<iostream>
//#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
	string pattern = "for";
	unordered_map<char,int> freqMap; //created a freq map where key is char , is empty now
	
	//insert the freq of each character in map
	for(char ch : pattern){
		freqMap[ch]++;
	}
	
	//printing key and its freq
	for(auto pairs : freqMap){
		cout<< pairs.first << "->" <<pairs.second <<endl ;
	}
	
	return 0;
}

