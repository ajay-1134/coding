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
        int l,u;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 1) l=i;
            if(arr[i] == n) u=i;
        }
        int res = n+1 - abs(l-u);
        // if(l<u) res = l+1 + n-u;
        // else res = u+1 + n-l;
        cout<<min(max(l,u)+1,min(n - min(l,u) ,res )  )<<endl;;
        
    }
}