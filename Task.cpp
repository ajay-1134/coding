#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e=0, o=0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] %2 == 0) e++;
            else o++;
        }
        cout<<min(o,e)<<endl;
    }
}