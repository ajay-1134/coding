#include<bits/stdc++.h>
using namespace std;
#define int long long int

void rev(string* s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        swap(s[i],s[n-i-1]);
    }
}

string int_to_binary(int n){
    string s = "";
    while(n){
        if(n%2 == 0) s+='0';
        else s+='1';
        n /= 2;
    } 
    return rev(&s);
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        
    }
}