#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int xa,xb,Xa,Xb;
        cin>>xa>>xb>>Xa>>Xb;
        int res= Xa/xa + Xb/xb;
        if(Xa%xa != 0) res += 1;
        if(Xb%xb !=0 ) res += 1;
        cout<<res<<endl;
    }
}