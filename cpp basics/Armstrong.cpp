#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n = 371;
  int ans = n, sum = 0;

  while(n > 0){
    int last_digit = n%10;
    sum += pow(last_digit,3);
    n /= 10;
  }

  // cout<<"safee";
  if(ans == sum){
    cout<<"true"<<endl;
  }
  else
  cout<<"false"<<endl;
}