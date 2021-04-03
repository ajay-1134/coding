#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    string s;
    cin>>s;
    int n = s.length();
    int l=0, u=0;
    for(int i=0; i<n; i++){
        if(s[i] >= 97 ) l++;
        else u++;
    }
    // cout<<l<<" "<<u<<endl;
    if(l>=u){
        for(int i=0; i<n; i++){
            if(s[i] < 97 ) s[i] += 32;
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(s[i] >= 97 ) s[i] -= 32;
        }
    }
    cout<<s<<endl;
    return 0;
}