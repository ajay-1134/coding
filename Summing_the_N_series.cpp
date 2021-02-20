#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int res = ((n%mod)*(n%mod))%mod;
    cout<<res<<endl;
}
    return 0;
}