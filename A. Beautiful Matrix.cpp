#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int ans;
    int mat[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1) ans = abs(i-2) + abs(j-2);
        }
    }
    cout<<ans<<endl;
}