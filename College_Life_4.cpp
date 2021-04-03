#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
        int price = 0;
        if( ( min(e,h) + abs(e-h)/3 ) < n && ( min(e,h) + abs(e-h)/2 ) < n ) cout<<"-1"<<endl;
        else{
            // cout<<"YeS"<<endl;
            
        }
    }

    return 0;
}