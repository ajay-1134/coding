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
    int mn = INT_MAX;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat[i][j];
            mn = min(mat[i][j],mn);
        }
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cnt = cnt + (mat[i][j] - mn);
        }
    }
    cout<<cnt<<endl;
    return 0;
}