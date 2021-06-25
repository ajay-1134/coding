#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int index = n;
        for(int i=1; i<n; i++){
            if(arr[i] + arr[0] > r){
                index = i;
                break;
            }
        }
        int cnt=0;
        for(int i=0; i<index; i++){
            for(int j=i+1; j<index; j++){
                if(arr[i] + arr[j] >= l && arr[i]+arr[j] <= r) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}