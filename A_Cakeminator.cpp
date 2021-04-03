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
    char mat[n][m];
    int cnt = n*m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    int r=0, c=0;
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<m; j++){
            if(mat[i][j] == 'S'){
                flag = 1;
            }
        }
        if(flag == 0){
            r++;
        }
    }
    for(int i=0; i<m; i++){
        int flag=0;
        for(int j=0; j<n; j++){
            if(mat[j][i] == 'S'){
                flag = 1;
            }
        }
        if(flag == 0){
            c++;
        }
    }
    // cout<<r<<" "<<c<<" "<<endl;
    cout<<r*m + c*n - (r*c)<<endl;
    return 0;
}