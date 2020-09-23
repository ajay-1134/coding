#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
int k1 = a*c;
int k2 = a*d;
int k3 = b*c;
int k4 = b*d;
int ans = max(k1,max(k2,max(k3,k4)));
cout<<ans<<endl;
    return 0;
}