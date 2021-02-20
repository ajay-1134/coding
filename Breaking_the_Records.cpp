#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn = arr[0];
    int mx = arr[0];
    int mncnt = 0;
    int mxcnt = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < mn){
            mncnt++;
            mn = arr[i];
        }
        if(arr[i] > mx){
            mxcnt++;
            mx = arr[i];
        }
    }
    cout<<mxcnt <<" "<<mncnt<<endl;
    return 0;
}