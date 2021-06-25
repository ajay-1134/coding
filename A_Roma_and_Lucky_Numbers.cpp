#include<bits/stdc++.h>
using namespace std;
#define int long long int

int luckyCount(int n){
    int cnt=0;
    while(n){
        if(n%10 == 4 || n%10 == 7) cnt++;
        n/=10;
    }
    return cnt;
}

signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0; i<n; i++){
        if(luckyCount(arr[i])<= k) res++;
    }
    cout<<res<<endl;
}