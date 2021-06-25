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
        vector<int>odd;
        vector<int>even;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2 == 0){
                even.push_back(arr[i]);
            }
            else odd.push_back(arr[i]);
        }
        int sz1 = odd.size();
        int sz2 = even.size();
        for(int i=0; i<sz1; i++){
            cout<<odd[i]<<" ";
        }
        for(int i=0; i<sz2; i++){
            cout<<even[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}