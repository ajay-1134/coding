#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        int v1,v2;
        cin>>v1>>v2;
        double t1 = ( sqrt(2.0) * n ) / v1;
        double t2 = (2.0*n) / v2;
        if(t1 < t2){
            cout<<"Stairs"<<endl;
        }
        else{
            cout<<"Elevator"<<endl;
        }
    }
    return 0;
}