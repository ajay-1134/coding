#include<bits/stdc++.h>
using namespace std;
#define int long long int

int checker(int n){
    int cnt = 0;
    while(n){
        int k = sqrt(n);
        if(k*k<n){
            n = n - (k*k);
            cnt++;
        }
        else{
            cnt++;
            if(n=1){
                break;
            }
        }
    }
    return cnt;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<checker(n)<<endl;
    }
    return 0;
}