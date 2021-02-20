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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // sort(arr, arr+n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int cnt = 0;
    for(int i=1; i<n; i++){
        cnt = cnt + abs(arr[i] - arr[i-1] )-1;
    }
    cout<<cnt<<endl;
}
    return 0;
}