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
    int k1,k2;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
             k1 = i;
             break;
        }
        
    }
    for(int i=(n-1); i>=0; i--){
        if(arr[i] == 1){
             k2 = i;
             break;
        }
        
    }
    int cnt = 0;
    for(int i=k1; i<k2; i++){
        if(arr[i] == 0){
            cnt = cnt + 1;
        }
    }
     cout<<cnt<<endl;
}
    return 0;
}