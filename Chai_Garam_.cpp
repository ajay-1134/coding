#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cost = 0;
    for(int i=n-1; i>=0; i--){
        cost = cost + arr[i] * (n-i);
    }
    cout<<cost<<endl;
    return 0;
}