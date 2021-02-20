#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    // cout<<t<<endl;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        int arr[1005] = {0};
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            mp[val]++;
            // arr[val]++;
        }

        for(int j=0; j<m; j++){
            int val;
            cin>>val;
            mp[val]++;
            // arr[val]++;
        }

        int cnt = 0;
        for(auto x : mp){
            if(x.second > 1) cnt++;
        }
        // for(int i=0; i<1005; i++){
        //     if(arr[i] > 1) cnt++;
        // }
        // cout<<"Hi"<<endl;
        cout<<cnt<<endl;
    }
    return 0;
}