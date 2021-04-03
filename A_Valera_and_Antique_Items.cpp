#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,price;
    cin>>n>>price;
    int cnt=0;
    vector<int>ans;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        int arr[m];
        int flag = 0;
        for(int j=0; j<m; j++){
            cin>>arr[j];
        }
        for(int j=0; j<m; j++){
            if(price > arr[j]){
                // cout<<i+1<<" ";
                ans.push_back(i+1);
                cnt++;
                break;
            }
        }
    }
    int p = ans.size();
    cout<<cnt<<endl;
    for(int i=0; i<p; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}