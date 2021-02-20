#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0; i<n;){
        for(int j=0; j<m; j++){
            cout<<"#";
        }
        cout<<endl;
        if(i+1 == n) break;
        for(int j=0; j<m-1; j++){
            cout<<".";
        }
        cout<<"#"<<endl;
        if(i+2 == n) break;
        for(int j=0; j<m; j++){
            cout<<"#";
        }
        cout<<endl;
        if(i+3 == n) break;
        cout<<"#";
        for(int j=1; j<m; j++){
            cout<<".";
        }
        cout<<endl;
        if(i+4 == n) break;
        i+=4;
    }
    return 0;
}