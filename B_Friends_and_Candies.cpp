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
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int k=0;
        if(sum % n != 0) k=-1;
        else{
            int num = sum/n;
            for(int i=0; i<n; i++){
                if(arr[i] > num) k++;
            }
        }
        cout<<k<<endl;
    }
}