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
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int cnt=0;
        if(sum == n) cnt=0;
        else if(sum<n) cnt = 1;
        else cnt = sum - n; 
        cout<<cnt<<endl;
    }
}