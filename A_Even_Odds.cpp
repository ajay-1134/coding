#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,i;
    cin>>n>>i;
    if(i <= ( n+1)/2){
        cout<<(i*2)-1;
    }
    else{
        cout<<(i - ( (n+1)/2 ) )*2;
    }
    return 0;
}