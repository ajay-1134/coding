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
    int flag =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int cnt = 0;
            if(mat[i+1][j] == 'o'){
                cnt++;
            }
            if(mat[i-1][j] == 'o'){
                cnt++;
            }
            if(mat[i][j+1] == 'o'){
                cnt++;
            }
            if(mat[i][j-1] == 'o'){
                cnt++;
            }
            if(cnt %2 != 0){
                flag =1;
            }
        }
    }
    if(flag == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}