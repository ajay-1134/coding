#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int res;
    if(m*a >= b){
        if(n%m == 0){
            res = (n/m)*b;
        }
        else{
            res = min ( ( (n/m)*b + ( (n%m)*a) ),( (n/m)*b + b )  );
        }
    }
    else{
        res = n*a;
    }
    cout<<res<<endl;
    return 0;
}