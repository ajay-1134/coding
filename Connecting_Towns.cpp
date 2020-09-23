#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=1; i<n; i++){
    cin>>arr[i];
}
int p =1;
for(int i=1; i<n; i++){
    p = (p*arr[i])%1234567;
}
cout<<p%1234567<<endl;
}
    return 0;
}