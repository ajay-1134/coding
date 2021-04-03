#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int cnt=0;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n-1; i++){
        if(s[i][1] == s[i+1][0]) cnt++;
    }
    cout<<cnt+1<<endl;
    return 0;
}