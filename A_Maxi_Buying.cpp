#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int res = n * 1.08;
    if(res < 206) cout<<"Yay!"<<endl;
    else if(res == 206) cout<<"so-so"<<endl;
    else cout<<":("<<endl;
}