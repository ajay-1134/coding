#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int binpow(int a, int b, int m) {
    a %= m;
    int res = 1;
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
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<< binpow(binpow(2,n,mod)-1,m,mod) <<endl;
    }
    return 0;
}

