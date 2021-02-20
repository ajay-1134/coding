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
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    int res = 0;
    int sum1 = 0;
    int i=n-1;
    while(sum1 <= sum/2){
        sum1 += arr[i];
        res++;
        i--;
    }
    cout<<res<<endl;
}