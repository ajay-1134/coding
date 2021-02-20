#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    if(mn == mx){
        cout<<-1<<endl;
    }
    else{
        int ans = -1;
        int flag = 0;
        for(int i=1; i<n-1; i++){
            if(arr[i] == mx && (arr[i+1] != mx || arr[i-1] != mx)){
                ans = i;
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            if(arr[0] == mx && arr[1] != mx){
                ans = 0;
            }
            if(arr[n-1] == mx && arr[n-2] != mx){
                ans = n-1;
            }
        }
        cout<<ans+1<<endl;
    }
    
}
    return 0;
}