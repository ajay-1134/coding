#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
char f(char ch){
    if(ch >= 97){
        return ch-32;
    }
    return ch;
}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s1, s2;
    cin>>s1>>s2;
    int n = s1.length();
    int flag=0;
    for(int i=0; i<n; i++){
        if(f(s1[i]) != f(s2[i])){
            flag = 1;
            if(f(s1[i]) < f(s2[i])){
                cout<<"-1"<<endl;
                break;
            }
            else{
                cout<<"1"<<endl;
                break;
            }
        }
    }
    if(flag == 0){
        cout<<"0"<<endl;
    }
    return 0;
}