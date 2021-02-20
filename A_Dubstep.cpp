#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin>>s;

    int n = s.length();
    string s1 = "WUB";
    for(int i=0; i<n-2; i++){
        string s2;
        for(int j=i; j<i+3; j++){
            s2 += s[j];
        }
        if(s1 == s2){
            s[i] = ' ';
            s[i+1] = ' ';
            s[i+2] = ' ';
        }
    }
    // cout<<s<<endl;
    int n1 = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            if(s[i-1] == ' '){
                continue;
            }
            else{
                cout<<s[i];
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}