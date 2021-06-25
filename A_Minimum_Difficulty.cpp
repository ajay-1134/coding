#include<bits/stdc++.h>
using namespace std;
#define int long long int

int f(int arr[],int n,int index){
    int res = 0;
    for(int i=1; i<n-1;){
        if(index == i+1){
            res = max(arr[i+2] - arr[i],res);
            i+=2;
        }
        else if(index == i){
            res = max(res,arr[i+1]-arr[i-1]);
            i++;
        }
        else{
            res = max(res,arr[i+1] - arr[i]);
            i++;
        }
    }
    return res;
}

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans[n-2];
    for(int i=1; i<n-1; i++){
        ans[i-1] = f(arr,n,i); 
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int res = INT_MAX;
    for(int i=0; i<n-2; i++){
        res = min(res,ans[i]);
    }
    cout<<res<<endl;
    
}