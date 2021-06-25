#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int amin,bmin,cmin,cm,a,b,c;
        cin>>amin>>bmin>>cmin>>cm>>a>>b>>c;
        if(a>=amin && b>=bmin && c>= cmin && a+b+c >= cm){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}