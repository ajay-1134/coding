#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,c;
    cin>>n>>c;
    int x[n];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    int maxdiff = 0;
    for(int i=0; i<n-1; i++){
        maxdiff = max(maxdiff,x[i]-x[i+1]);
    }    
    int res = maxdiff-c;
    if(res<=0) cout<<0<<endl;
    else cout<<res<<endl;
    return 0;
}