#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int a,b,k;
cin>>a>>b>>k;
if(a+b <= k){
    cout<<"0"<<" "<<"0";
}
else {if(a <= k){
    cout<<"0"<<" "<<b-(k-a);
}
        else{
            cout<<a-k<<" "<<b;
        }
    return 0;}
}

