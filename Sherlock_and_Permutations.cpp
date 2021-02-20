#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = pow(10,9)+7;
int fact(int n){
    if(n <= 1){
        return 1;
    }
    return (n * fact(n-1))%mod;
}

signed main(){
    // cout<<fact(5)<<endl;
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int res = (fact(a+b-1)/((fact(a))%mod*fact(b-1)%mod))%mod;
    cout<<res<<endl;
        
    }
    return 0;
}