#include<bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int left[n];
        int right[n];
        int res = arr[0];
        left[0] = res;
        for(int i = 1; i < n; i++){
            res = gcd(res, arr[i]);
            left[i] = res;
        }

        res = arr[n-1];
        right[n-1] = res;
        for(int i = n-2; i >= 0; i--){
            res = gcd(res, arr[i]);
            right[i] = res;
        }
        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        int ans = max(right[1], left[n-2]);
        int idx = -1;
        if(ans == right[1]){
            idx = 0;
        }
        if(ans == left[n-2]){
            idx = n-1;
        }
        for(int i = 1; i < n-1; i++){
            if(gcd(left[i-1], right[i+1]) > ans){
                ans = gcd(left[i-1], right[i+1]);
                idx = i;
            }
            // ans = max(ans, gcd(left[i-1], right[i+1]));
        }

        int sum = 0;
        for(int i = 0; i <n; i++){
            if(i != idx){
                sum += arr[i]/ans;
            }
        }
        cout << sum + 1 << endl;
    }
}