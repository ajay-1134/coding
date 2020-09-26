#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int flag = 0;
        for(int i=0; i<n; i++){
            int cnt1 = 0, cnt2 = 0;
            for(int j=0; j<=i; j++){
                for(int k=j+1; k<=i; k++){
                    if(arr[k] > arr[j]) cnt1++;
                }
            }
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[k] > arr[j]) cnt2++;
                }
            }
            if(cnt1 == cnt2){
                flag = 1;
                break;
            }
        }
        // cout<<cnt<<endl;
        if(n == 1) flag = 1;
        if(flag == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}