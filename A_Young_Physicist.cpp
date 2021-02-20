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
    int p[n],q[n],r[n];
    int s1= 0, s2=0, s3 =0;
    for(int i=0; i<n; i++){
        cin>>p[i]>>q[i]>>r[i];
        s1 += p[i];
        s2 += q[i];
        s3 += r[i];
    }
    
    if(s1 == 0 && s2 == 0 && s3 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}