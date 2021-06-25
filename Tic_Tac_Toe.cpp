#include<bits/stdc++.h>
using namespace std;
#define int long long int

int f(char mat[3][3],char ch){
    int cnt = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j] == ch) cnt++;
        }
    }
    return cnt;
}
int f1(char mat[3][3]){
    int i=0,j=0;
    if(
        mat[i][j] == mat[i+1][j] == mat[i+2][j] == 'X' ||
        mat[i][j+1] == mat[i+1][j+1] == mat[i+2][j+1] == 'X' ||
        mat[i][j+2] == mat[i+1][j+2] == mat[i+2][j+2] == 'X' ||
        mat[i][j] == mat[i][j+1] == mat[i][j+2] == 'X' ||
        mat[i+1][j] == mat[i+1][j+1] == mat[i+1][j+2] == 'X' ||
        mat[i+2][j] == mat[i+1][j+1] == mat[i+2][j+2] == 'X' ||
        mat[i][j] == mat[i+1][j+1] == mat[i+2][j+2] == 'X' ||
        mat[i+2][j] == mat[i+1][j+1] == mat[i][j+2] == 'X'
    ){
        return 1;
    }
    return 0;
}

int f2(char mat[3][3]){
    int i=0,j=0;
    if(
        mat[i][j] == mat[i+1][j] == mat[i+2][j] == 'O' ||
        mat[i][j+1] == mat[i+1][j+1] == mat[i+2][j+1] == 'O' ||
        mat[i][j+2] == mat[i+1][j+2] == mat[i+2][j+2] == 'O' ||
        mat[i][j] == mat[i][j+1] == mat[i][j+2] == 'O' ||
        mat[i+1][j] == mat[i+1][j+1] == mat[i+1][j+2] == 'O' ||
        mat[i+2][j] == mat[i+1][j+1] == mat[i+2][j+2] == 'O' ||
        mat[i][j] == mat[i+1][j+1] == mat[i+2][j+2] == 'O' ||
        mat[i+2][j] == mat[i+1][j+1] == mat[i][j+2] == 'O'
    ){
        return 1;
    }
    return 0;
}

void fill(char mat[3][3],char ch){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j] == '_') mat[i][j] = ch;
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        char mat[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>mat[i][j];
            }
        }
        int i = 0, j = 0;
        if(
            abs(f(mat,'O') - f(mat,'X')) >1 ||
            ( f1(mat) == 1 && f2(mat) == 1 ) ||
            (f1(mat) == 0 && f2(mat) == 0 && fill((mat),'X') )
        ){
            cout<<"3"<<endl;
        }
        else{
            if(f1(mat) == 1 || f2(mat) == 1 ) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
    }
}