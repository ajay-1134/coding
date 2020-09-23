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
    int cnt = 0;
    int cn2 = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] > 2){
            cnt++;
        }
        else if(arr[i] == 2){
            cn2++;
        }
    }
    cout<<cnt*cn2 + ((cnt)*(cnt-1))/2<<endl;
}
    return 0;
}