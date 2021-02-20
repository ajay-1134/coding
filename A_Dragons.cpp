#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int s,n;
    cin>>s>>n;
    vector<pair<int,int> >arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort( arr.begin(),arr.end());
    int flag = 0;
    for(int i=0; i<n; i++){
        if(s > arr[i].first){
            s += arr[i].second;
        }
        else{
            flag  = 1;
            break;
        }
    }
    if(flag ==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}