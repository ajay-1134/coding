#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        int res = 10 * ( a + b*(100-x) );
        cout<<res<<endl;
    }
}