#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int sm = 0;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            sm += max( (a[i] + b[j] ) , (b[i] + a[j] ) );
        }
    }
    cout<<sm<<endl;
    return 0;
}