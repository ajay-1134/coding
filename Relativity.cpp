#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int g,c;
        cin>>g>>c;
        int res = (c*c)/(2*g);
        cout<<res<<endl;
    }
}