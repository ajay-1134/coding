#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int var = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            int j = i-1;
            int flag = 0;
            while(j>=0){
                if(arr[j] == arr[i]){
                    flag = 1;
                    break;
                };
                j--;
            }
            if(flag == 0) var++;
        }
        // cout<<var<<endl;
        if(n-var >= x){
            cout<<var<<endl;
        }
        else cout<<n-x<<endl;
    }
}