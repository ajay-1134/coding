#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool f(int n,int x,int k){
    int p = 0;
    if(x%k == 0) return true;
    else if(x%k == (n+1)%k) return true;
    return false;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(f(n,x,k) == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}