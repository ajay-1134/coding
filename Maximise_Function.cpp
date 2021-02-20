#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int mx = arr[n-1];
        int mn1 = arr[0];
        int mn2 = arr[1];
        int res = abs(mx - mn1) + abs(mx - mn2) + abs(mn1-mn2);
        cout<<res<<endl;
    }
    return 0;
}