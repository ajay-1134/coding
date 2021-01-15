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
    while (t--) {
        int n;
        cin>>n;
        int arr[100005] = {0};
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            arr[val]++;
        }
        for(int i=0; i<100005; i++){
            if(arr[i]%2 != 0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}