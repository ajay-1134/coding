#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k,n;
    cin>>k>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int mn = INT_MAX;
    if(n == k){
        cout<<arr[n-1] - arr[0]<<endl;
    }
    else{
        for(int i=0; i<n-k+1; i++){
            mn = min( (arr[i+k-1]-arr[i]) , mn);
        }
        cout<<mn<<endl;
    }
    return 0;
}