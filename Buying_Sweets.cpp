#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int sum = 0;
for(int i=0; i<n; i++){
    sum = sum + arr[i];
}
int k = sum / x ;
if(sum % x == 0){
    cout<<k<<endl;
}
else if(sum > k*x){
    int cnt = 0;
    for(int i=0; i<n; i++){
    if(sum % x >= arr[i])
    {cnt = cnt + 1;}
    }
    if(cnt >= 1){
    cout<<"-1"<<endl;}
    else{
        cout<<k<<endl;}
}


}
    return 0;
}