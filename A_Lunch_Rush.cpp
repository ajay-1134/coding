#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,k;
    cin>>n>>k;
    int f[n], t[n];
    int joy = INT_MIN ;
    for(int i=0; i<n; i++){
        int joy1;
        cin>>f[i]>>t[i];
        if(t[i] > k) joy1 = f[i] - (t[i] - k);
        else joy1 = f[i];
        joy = max(joy,joy1);
    }
    cout<<joy<<endl;
    return 0;
}