#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,s,d;
    cin>>n>>s>>d;
    int flag = 0;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
        if(x[i] < s && y[i] > d){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}