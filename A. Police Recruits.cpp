#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0; 
    for(int i=0; i<n; i++){
        if(arr[i] == -1 ){
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
}