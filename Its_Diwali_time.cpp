#include<bits/stdc++.h>
using namespace std;
#define int long long int
int func(int n){
    if(n==0) return 1;
    else return 0;
}

signed main(){
    int n;
    cin>>n;
    // int arr[n+1] = {0};
    // for(int i=1; i<=n; i++){
    //     for(int j=i; j<=n; j+=i){
    //         arr[j] = func(arr[j]);
    //     }
    // }
    // int cnt=0;
    // for(int i=1; i<=n; i++){
    //     // cout<<arr[i]<<" ";
    //     if(arr[i] == 1){
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<endl;
    int k = sqrt(n);
    cout<<k<<endl;
    return 0;
}


//by observing pattern
//Method 2
