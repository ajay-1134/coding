#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans = 0;
    while(n){
        ans = ans + n%10;
        n = n / 10;
    }
    cout<<ans<<endl;
}
    return 0;
}