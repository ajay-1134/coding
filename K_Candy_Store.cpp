#include<bits/stdc++.h>
using namespace std;
#define int long long int
int fact(int n){
    if(n<=1){
        return 1;
    }
    return (n*fact(n-1));
}
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int res = nCr((n+k-1),k);
    cout<<res<<endl;
}
    return 0;
}