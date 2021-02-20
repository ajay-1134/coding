#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;

int gcd(int a, int b){
    if(b == 0) return a;
    return  gcd(b, a%b);
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n+1), b(n+1);
        for(int i=1; i<=n; i++) a[i] = i;
        int flag = 0;
        for(int i=1; i<=n; i++) cin>>b[i];
        for(int i=1; i<=n; i++){
            if(b[i] != a[i]){
                if(gcd(a[i], b[i]) == b[i]){
                    a[i] = b[i];
                }
                else{
                    flag = 1;
                }
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}