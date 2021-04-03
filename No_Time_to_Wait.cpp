#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,h,x;
    cin>>n>>h>>x;
    int arr[n];
    int mx = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    if(x + mx >= h) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}