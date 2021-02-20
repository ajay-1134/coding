#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n>10){
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}