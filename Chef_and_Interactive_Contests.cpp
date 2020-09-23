#include<bits/stdc++.h>
using namespace std;
int main(){
int n,r;
cin>>n>>r;
int a,b;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
if(arr[i] < r){
    cout<<"Bad"<<" "<<"boi"<<endl;
}
else{
    cout<<"Good"<<" "<<"boi"<<endl;
}}
    return 0;
}