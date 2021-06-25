#include<bits/stdc++.h>
using namespace std;
#define int long long int

int arrmax(int arr[],int n){
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
    }
    return mx;
}

signed main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }
    for(int i=1; i<=n; i++){
        cin>>c[i];
    }
    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(b[c[j]] == a[i]){
                // cout<<a[i]<<"   "<<b[c[j]]<<"   "<<j<<endl;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}