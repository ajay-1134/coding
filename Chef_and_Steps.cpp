#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] % k == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}