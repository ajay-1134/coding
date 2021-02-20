#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int arr1[n];
    arr1[0] = arr[0];
    for(int i=1; i<n; i++){
    arr1[i] = arr1[i-1]- k + arr[i];
    }
    int flag = 0;
    int num;
    for(int i=0; i<n; i++){
        if(arr1[i] < k){
            flag = 1;
            num = (i+1);
            break;
        }
    }
    if(flag == 1){
        cout<<"NO"<<" "<<num<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}