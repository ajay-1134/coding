#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int cal(int a, int b){
    int mn = min(a,b);
    int mx = max(a, b);
    int ans = 0;
    while(mx > 2*mn){
        mn = mn * 2;
        ans++;
    }
    // cout<<ans-1<<endl;
    return ans;
}
int solve(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n-1; i++){
        ans += cal(arr[i], arr[i+1]);
    }
    return ans;
}

void insert(int arr[],int *n,int i,int x){
    int arr1[*n];
    for(int i=0; i<*n; i++){
        arr1[i] = arr[i];
    }
    *n = *n+1;
    arr[i] = x;
    for(int j=i; j<*n+1; j++){
        arr[i+1] = arr1[j];
    }
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        cout<<solve(arr, n)<<endl;
        // int cnt=0;
        // for(int i=0; i<n-1; i++){
        //     if( 2*min(arr[i],arr[i+1]) < max(arr[i],arr[i+1]) ){
        //         int mn = min(arr[i],arr[i+1]);
        //         int mx = max(arr[i],arr[i+1]);
        //         for(int j=mn+1; j<mx; j++){
        //             if( 2*min(arr[i],j) >= max(arr[i],j) ){
        //                 insert(arr,&n,i+1,j);
        //                 cnt++;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // cout<<n<<endl;
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        // cout<<cnt<<endl;
    }
    return 0;
}