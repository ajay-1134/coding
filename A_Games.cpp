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
    int h[n],g[n];
    for(int i=0; i<n; i++){
        cin>>h[i]>>g[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
                if(h[i] == g[j] && j!=i){
                    cnt++;
                }
        }
    }
    cout<<cnt<<endl;
    return 0;
}