#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        // cout<<"a"<<endl;
        cin>>n;
        int arr[n];
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] == (arr[i] & arr[j])){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}