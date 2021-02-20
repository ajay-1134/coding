#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a+b+c<x+y || (x<a && x<b && x<c)|| (y<a && y<b && y<c)||a+b+c>x+y){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}