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
        int n,k;
        int cnt = 0;
        cin>>n>>k;
        for(int i =0; i<n; i++){
            int val;
            cin>>val;
            val += k;
            if(val % 7 == 0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}