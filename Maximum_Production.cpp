#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int res = max(7*x,d*y + (7-d)*z);
        cout<<res<<endl;
    }
}