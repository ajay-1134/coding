#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int is_prime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }    
    return 1;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        for(int i = sum+1; i<100005; i++){
            if(is_prime(i)){
                cout<<i-sum<<endl;
                break;
            }
        }
    }
    return 0;
}