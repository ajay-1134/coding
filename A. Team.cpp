#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n){
        int a,b,c;
        cin>>a>>b>>c;
        if(a == b && b == c && a==1 || a == b && a == 1 || a == c && a == 1 || b == c && b == 1) cnt++;
        n--;
    }
    cout<<cnt<<endl;
}