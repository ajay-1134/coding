#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
int Fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * Fact(n-1);
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int fact = 1;
        for(int i =1; i<=n; i++){
            fact = fact * i;
        }
        cout<<fact<<" "<<Fact(n)<<endl;
    }
    return 0;
}