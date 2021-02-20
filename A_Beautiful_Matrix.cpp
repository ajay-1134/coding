#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int mat[5][5];
    int k1,k2;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                k1 = i;
                k2 = j;
            }
        }
    }
    // cout<<k1<<" "<<k2<<endl;
    int res = abs(k1-2) + abs(k2 - 2);
    cout<<res<<endl;
    return 0;
}