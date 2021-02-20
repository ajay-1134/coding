#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=1 && b!= 1 && c!= 1){
        cout<<a*b*c;
    }
    else{
        cout<<( max( (a+b+c),max( (a*b*c), max(a*(b+c),(a+b) *c)  ) ) );
    }
    return 0;
}