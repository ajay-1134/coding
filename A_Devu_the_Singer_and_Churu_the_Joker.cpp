#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,time;
    cin>>n>>time;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if( (10 * (n-1) ) + sum > time){
        cout<<"-1"<<endl;
    }
    else{
        cout<<(time - sum)/5<<endl;
    }
    return 0;
}