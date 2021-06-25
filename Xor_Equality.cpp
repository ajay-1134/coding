#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int

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

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = binpow(2, n-1, mod);
        cout<<ans<<endl;
    }
    return 0;
}