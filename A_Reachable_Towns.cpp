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
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        arr[u] = v;
    }
    set<int>st;
    vector<int>as(n+1, 0);
    for(int i=n; i>=1; i--){
        auto val1 = st.lower_bound(arr[i]);
        int ans = st.size() - distance(st.begin(), val1);
        as[i] += ans;
        st.insert(arr[i]);
    }
    set<int>st2;
    for(int i=1; i<=n; i++){
        auto val = st2.lower_bound(arr[i]);
        int ans = distance(st2.begin(), val);
        as[i] += ans;
        st2.insert(arr[i]);
    }
    for(int i=1; i<=n; i++) cout<<as[i]+1<<endl;
    return 0;
}