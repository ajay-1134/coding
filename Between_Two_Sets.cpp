#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int mx(int arr[],int n){
    int mxx = INT_MIN;
    for(int i=0; i<n; i++){
        mxx = max(mxx, arr[i]);
    }
    return mxx;
}

int mn(int arr[],int n){
    int mnn = INT_MAX;
    for(int i=0; i<n; i++){
        mnn = min(mnn, arr[i]);
    }
    return mnn;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    int start = mx(arr1,n);
    int end = mn(arr2,m);
    int cnt = 0;
    // cout<<start<<" "<<end<<endl;
    for(int i=start; i<=end; i++){
        int flag = 0;
        for(int j=0; j<n; j++){
            if(i % arr1[j] != 0){
                flag = 1;
                continue;
            }
        }
        if(flag == 1){
            continue;
        }
        else{
            for(int j=0; j<m; j++){
                if(arr2[j]  % i != 0){ 
                    flag = 1;
                    continue;
                }
            }
        }
        if(flag == 0){
            cnt++;
        }    

    }
    cout<<cnt<<endl;
    return 0;
}