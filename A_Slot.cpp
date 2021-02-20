#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    char ch1,ch2,ch3;
    cin>>ch1>>ch2>>ch3;
    if(ch1 == ch2 && ch1 == ch3){
        cout<<"Won"<<endl;
    }
    else{
        cout<<"Lost"<<endl;
    }
    return 0;
}