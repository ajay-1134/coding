#include<bits/stdc++.h>
using namespace std;
#define int long long int

int ugliness(int arr[],int  n){
    int res=0;
    for(int i=0; i<n-1; i++){
        res += abs(arr[i]-arr[i+1]);
    }
    return res+arr[0]+arr[n-1];
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int res = ugliness(arr,n);
        int ans = res;
        int p = res;
        sort(arr,arr+n);
        int cnt=0;
        while(p <= ans){
            sort(arr,arr+n);
            arr[n-1] -= 1;
            cnt++;
            ans = ugliness(arr,n)+cnt;
            res = min(ans,res);
        }
        cout<<res<<endl;
    }
}