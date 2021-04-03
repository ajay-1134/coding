#include<bits/stdc++.h>
using namespace std;
#define int long long int 
char f(char ch){
    if(ch >= 97) return ch-32;
    return ch;
}
signed main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length();
    int flag = 0;
    for(int i=0; i<n; i++){
        if(f(s1[i]) < f(s2[i]) ){
            flag = -1;
            break;
        }
        else if(f(s1[i]) > f(s2[i])){
            flag = 1;
            break;
        }
    }
    cout<<flag;
    return 0;
}