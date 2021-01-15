#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

//Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int cnt = 0;
        cnt = cnt + n/100;
        n = n % 100;
        cnt = cnt + n/50;
        n = n % 50;
        cnt = cnt + n/10;
        n = n % 10;
        cnt = cnt + n/5;
        n = n % 5;
        cnt = cnt + n/2;
        n = n % 2;
        cnt = cnt + n;
        cout<<cnt<<endl;
    }
    return 0;
}