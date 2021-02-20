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
    int flag = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > (i+1) ){
            flag = 0;
            break;
        }
        else{if(__gcd(arr[i],(i+1)) == arr[i]){
            flag = 1;
        }
            else{
            flag = 0;
            break;
            }
            
        }
        
    }
    if(flag == 0 ){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}