#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

char f(char ch){
    if(ch < 97){
        return ch+32;
    }
    return ch;
}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'i' || s[i] == 'I'|| s[i] == 'e'|| s[i] == 'E' || s[i] == 'o' ||s[i] == 'O' ||s[i] == 'u' ||s[i] == 'U' ||s[i] == 'y' ||s[i] == 'Y' ){
            continue;
        }
        else{
            cout<<"."<<f(s[i]);
        }
    }
    return 0;
}