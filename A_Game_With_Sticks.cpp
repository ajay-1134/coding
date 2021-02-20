#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a,b;
    cin>>a>>b;
    int pts = a*b;
    int sticks = a+b;
    int cnt = 0;
    while(pts){
        pts -= (sticks-1);
        sticks -= 2;
        cnt++;
    }
    if(cnt % 2 ==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}