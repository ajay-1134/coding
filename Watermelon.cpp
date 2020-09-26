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
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    if(sum < 0){
        cout<<"NO"<<endl;
    }
    else if(sum >= 0){
        cout<<"YES"<<endl;
    }
    else{

    }
}
    return 0;
}