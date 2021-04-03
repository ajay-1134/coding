#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[k];
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }
        string ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        for(int i=0; i<n; i++){
            int marks = 0;
            for(int j=0; j<k; j++){
                if( (ar[i][j] - '0') == 1){
                    marks += arr[j];
                }
            }
            cout<<marks<<endl;
        }
    }
    return 0;
}