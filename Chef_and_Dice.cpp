#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n >= 4){
            if(n%4 == 1) cout<<(n/4)*44 + 32 <<endl;
            else if(n%4 == 2) cout<<(n/4)*44 + 44<<endl;
            else if(n%4 == 3) cout<<(n/4)*44 + 55<<endl;
            else cout<< (n/4) *44 + 16<<endl;
        }
        else{
            if(n == 1) cout<<20<<endl;
            else if(n == 2) cout<<36<<endl;
            else cout<<51<<endl;
        }
    }
    return 0;
}