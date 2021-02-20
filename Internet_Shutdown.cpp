#include<bits/stdc++.h>
using namespace std;
#define int long long int
// map<int,int>m;
signed main(){
int t;
cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;
    // int sm = a + b;
    // if(m.find(sm) != m.end()){
    //     cout<<m[sm]<<endl;
    // }
    // else
    // {
    //     cout<<-1<<endl;
    // }
    
    // n*n + n  = 2*(a + b);
    double ans = (-1.0 + sqrt(1 + 8*(a+b)))/2.0;
    int nn = (int)ans;
    if(nn != ans){
        cout<<"-1"<<endl;
    }
    else
        cout<<ans<<endl;
}
    return 0;
}