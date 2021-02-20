#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int mx1 = 0;
        int mx2 = 0;
        int cnt1 = 0, cnt2 = 0; 
        int arr1[n],arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
            cnt1 += arr1[i];
            mx1 = max(mx1,arr1[i]);
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
            cnt2 += arr2[i];
            mx2 = max(mx2,arr2[i]);
        }
        // cout<<mx1<<" "<<mx2<<endl;
        if((cnt1 - mx1) < (cnt2 - mx2)){
            cout<<"Alice"<<endl;
        }
        else if((cnt1 - mx1) > (cnt2 - mx2)){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}