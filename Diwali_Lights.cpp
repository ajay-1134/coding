#include<bits/stdc++.h>
using namespace std;
#define int long long int

long long power(long long a, long long b, long long m) {
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

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int k = (power(2,n,100000)) - 1;
    int res = k % 100000;
    cout<<res<<endl;
}
    return 0;
}