#include<bits/stdc++.h>
using namespace std;
#define int long long int

char f(char ch){
    if(ch == 'R') return 'W';
    else if(ch == 'W') return 'R';
    return -1;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char mat[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
            }
        }
        int r=0,c=0;
        char ch = 'R';
        for(int i=0; i<n; i++){
            int flag=0;
            for(int j=0; j<m; j++){
                if(mat[i][j] != '.'){
                    r=i;
                    c=j;
                    ch=mat[i][j];
                    flag=1;
                    break;
                }
            }
            if(flag == 1) break;
        }
        // cout<<r<<" "<<c<<" "<<ch<<endl;
        if((r+c)%2 != 0){ 
            ch = f(ch);
        }
        int flag=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == '.'){
                    mat[i][j] = ch;
                    ch = f(ch);
                }
                else {
                    if(mat[i][j] == ch){
                        ch = f(ch);
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
            }
            if(m%2==0) ch = f(ch);
            if(flag == 1) break;
        }
        if(flag == 1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout<<mat[i][j];
                }
                cout<<endl;
            }
        }
    }
}