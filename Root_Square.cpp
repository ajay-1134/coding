#include<bits/stdc++.h>
using namespace std;
#define long long int
signed main(){
    int t, x;
    cin>>t>>x;
    while(t--){
        int n;
        cin>>n;
        if(n < 0){
            cout<<"no"<<endl;
            continue;
        }
        int s = (int)sqrt(n);
        if((n - s*s) <= 0.01 * x*n){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    } 
    return 0;
}