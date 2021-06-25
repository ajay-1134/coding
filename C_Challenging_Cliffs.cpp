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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        int r=0;
        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                r = i;
                break; 
            }
        }
        if(r == 0){
            swap(arr[1],arr[n-1]);
        }
        else if( r == n-2 ){
            swap(arr[0],arr[n-2]);
        }
        else{
            swap(arr[0],arr[r+1]);
            swap(arr[r],arr[n-1]);
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}