#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    for(int i=10; i>0; i--){
        if(n%i==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}