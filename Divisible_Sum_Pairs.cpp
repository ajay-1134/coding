#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( (arr[i]+arr[j]) % k == 0){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}