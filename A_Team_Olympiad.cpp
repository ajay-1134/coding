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
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>a1; vector<int>a2; vector<int>a3;
    for(int i=0; i<n; i++){
        if(arr[i] == 1) a1.push_back(i+1);
        else if(arr[i] == 2) a2.push_back(i+1);
        else a3.push_back(i+1);
    }
    int p = a1.size(),q = a2.size(), r = a3.size();
    int res = min(p,min(q,r));
    cout<<res<<endl;
    int j=0, k=0, l=0;
    for(int i=0; i<res; i++){
        cout<<a1[j]<<" "<<a2[k]<<" "<<a3[l]<<endl;
        j++,k++,l++;
    }
    return 0;
}