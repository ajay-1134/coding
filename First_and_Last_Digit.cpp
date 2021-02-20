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
        string s;
        cin>>s;
        int n = s.length();
        int sum = (s[0] - '0') + (s[n-1] - '0');
        cout<<sum<<endl;
    }
    return 0;
}