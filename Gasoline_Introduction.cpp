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
    int curr = arr[0];
    for(int i=1; i<n; i++){
        if(curr >= i){
            curr = curr + arr[i];
        }
    }
    cout<<curr<<endl;
}
    return 0;
}