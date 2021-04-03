#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] <= h) ans++;
        else ans+=2;
    }
    cout<<ans<<endl;
}