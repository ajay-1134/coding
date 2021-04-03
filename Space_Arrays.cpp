#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr,arr+n);
        int ans = n * (n+1) / 2;
        int prcnt = -1, cnt = 0;
        int res[n];
        for(int i=0; i<n; i++){
            res[i] = i+1;
        }
        int flag = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > res[i] ){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cnt = ans - sum;
        }

        // cout<<cnt<<endl;
        if(cnt % 2 == 0 ) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}