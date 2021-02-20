#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int check(char ch, string s,int n){
    for(int i=0; i<n; i++){
        if(s[i] == ch){
            return 0;
        }
    }
    return 1;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    getline(cin,s);
    int n = s.length();
    // cout<<n;
    string s1;
    for(int i=1; i<n-1; i+=3){
        s1 += s[i]; 
    }
    // cout<<s1<<endl;
    int n1 = s1.length();
    string s2;
    int len = 0;
    for(int i=0; i<n1; i++){
        if(check(s1[i],s2,len) == 1){
            s2 += s1[i];
            len++;
        }
    }
    // cout<<s2<<endl;
    cout<<len<<endl;
    return 0;
}