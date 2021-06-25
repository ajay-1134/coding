#include<bits/stdc++.h>
using namespace std;
#define int long long int

string rev(string s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        swap(s[i],s[n-i-1]);
    }
    return s;
}

void f(string &s){
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == '6') s[i] = '9';
        else if(s[i] == '9') s[i] = '6';
    }
}

signed main(){
    string s;
    cin>>s;
    string res = rev(s);
    f(res);
    cout<<res<<endl;
}