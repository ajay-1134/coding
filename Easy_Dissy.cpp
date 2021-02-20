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
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=n; i>=1; i--){
        for(int j = i+i; j<=n; j += i){
                arr[j] = (arr[j] + arr[i]) % mod;
        }
    }
    int mx = INT_MIN;
    for(int i=1; i<=n; i++){
        if(arr[i] > mx) mx =  arr[i];
    }
    cout<<mx%mod<<endl;
    return 0;
}