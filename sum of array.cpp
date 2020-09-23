#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];}
int sum=0;
for(int i=0; i<n; i++){
    sum=sum+arr[i];
}
cout<<sum<<endl;
    return 0;
}