#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        char news[n+1];
        for(int i=0; i<n; i++){
            news[i] = s[i];
            if(s[i]!= 'a'){
                news[i+1] = 'a';

            }
        }
    }
    return 0;
}