#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int i,j;
        cin>>i>>j;
        int r1,c1,r2,c2;
        if(i <= n/2 && j <= m/2){
            r1 = n; 
            c1 = 1;
            r2 = 1; 
            c2 = m; 
        }
        else if(i>n/2 && j<=m/2){
            r1 = 1; 
            c1 = 1;
            r2 = n; 
            c2 = m; 
        }
        else if(i<=n/2 && j>m/2){
            r1 = 1; 
            c1 = 1;
            r2 = n; 
            c2 = m; 
        }
        else{
            r1 = 1;
            c1 = m;
            r2 = n; 
            c2 = 1;
        }
        cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
        
    }
}