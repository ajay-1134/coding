#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int var = 1;
        int cnt = 0;
        while(var<=n){
            var *= 2;
            cnt++;
        }
        int m = cnt;
        int mx = INT_MIN;
        int num = pow(2,m)-1;
        int f = num/2;
        int s = (f ^ n);
        cout<<f*s<<endl;
    }
    return 0;
}