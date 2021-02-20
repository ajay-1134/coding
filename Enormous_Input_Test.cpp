#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int cnt = 0;
for(int i=0; i<n; i++){
    if(arr[i] % k == 0){
        cnt = cnt + 1;
    } 
}
cout<<cnt<<endl;
    return 0;
}