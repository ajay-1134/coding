#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    int n,m;
    cin>>n>>m;
    int cnt1 = 0, cnt2 = 0;
    while(n>0){
        cnt1 = cnt1 + n % 10;
        n = n/10;
    }
    while(m>0){
        cnt2 = cnt2 + m%10;
        m = m/10;
    }
    cout<<max(cnt1,cnt2);
    return 0;
}