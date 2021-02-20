#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int x,v;
cin>>x>>v;
int y,w;
cin>>y>>w;
int t;
cin>>t;
if(x == y){
    cout<<"YES"<<endl;
}
if(x<y){
    if((v>w) and  (t * (v-w) ) >= y-x)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
else{if((v>w) and (t * (v-w) ) >= x-y)
   {cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}
}

    return 0;
}