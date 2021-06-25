#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    char mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    int flag = 0;
    char ch = mat[0][0];
    char ch1 = mat[0][1];
    if(ch == ch1) flag = 1;
    for(int i=0; i<n; i++){
        if(mat[i][i] != ch || mat[i][n-i-1] !=ch) flag=1;
        for(int j=0; j<n; j++){
            if(j != i && j!= (n-i-1) && mat[i][j] != ch1){
                flag=1;
            }
        }
    }
    if(flag == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}