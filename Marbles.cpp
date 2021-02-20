#include<bits/stdc++.h>
using namespace std;
#define int long long int

 
void solve(){
    int n,r;cin>>n>>r;
    n--,r--;
    if(r>n-r)r=n-r;//WA if i remove this line
    int ans=1;
    for(int i=1;i<=r;i++){
        ans=ans*(n-i+1)/i;
    }
    cout<<ans<<"\n";
}
 
signed main(){
int t;
cin>>t;
while(t--){
    solve();
}
    return 0;
}