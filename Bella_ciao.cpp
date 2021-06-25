#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int D,d,p,q;
        cin>>D>>d>>p>>q;
        int n = D/d;
        int res = ( n*p +q * ( (n*(n-1) )/2) ) *d;
        // for(int i=0; i<n; i++){
        //     res += (p + (i*q) ) * d;
        // }
        if(D%d != 0) res += (p + n*q) * (D%d);
        cout<<res<<endl;
    }
}