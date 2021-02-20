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
    int cnt = 0;
    while (t--) {
        int n;
        cin>>n;
        int m = n;
        int k = 0;
        while(n){
            k = (k*10) + n%10;
            n = n / 10;
        }
        if(m == k){
            cout<<"wins"<<endl;
        }
        else{
            while(m,k){
                if((m % 10) != (k % 10)){
                    cnt++;
                }
                m = m/10;
                k = k / 10;
            }
            cout<<"loses"<<" "<<cnt<<endl;
        }
    }
    return 0;
}