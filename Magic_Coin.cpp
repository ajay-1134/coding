#include<bits/stdc++.h>
using namespace std;
#define int long long int
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
signed main()
{
int t;
cin>>t;
while(t--){    
int n,m;
    cin>>n>>m;
    int ans = (n*binpow(2, 2*(m-1),1000000007))%1000000007LL;
    cout<<ans<<endl;
}

    return 0;
}