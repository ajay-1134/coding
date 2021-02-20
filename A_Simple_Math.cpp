#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int a,b,c;
cin>>a>>b>>c;
int m = 998244353;
a = (a*(a+1))/2;
b = (b*(b+1))/2;
c = (c*(c+1))/2;
a = a % m;
b = b % m;
c = c % m;
int ans = (a%m *b%m *c%m)%m;
cout<<ans<<endl;
    return 0;
}