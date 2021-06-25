#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double time = 958;
        v = k1*k2*k3*v;
        double tt = 100.0/v;
        tt = (int) (tt*100 + 0.5);
        // cout<<tt<<endl;
        if(tt < time) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}