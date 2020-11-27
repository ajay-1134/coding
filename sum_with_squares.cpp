//You’re given an integer N as input.

//Write a function that determines the smallest number of perfect squares that sum up to N.
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n;
cin>>n;
int sum=0;
int cnt;
for(int i=n;i>; i++){
    sum = i*i;
    if(sum>=n){
        cnt = i;
        break;
    }
}
if(sum==n){
    cout<<cnt<<endl;
}
    return 0;
}