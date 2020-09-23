#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        int cnt = 0;
        int i = 0;
        while(i < n){
            if(arr[i] != arr[i+1]){
                cnt++;
                i = i + 2;
            }
            else{
                i++;
                cnt++;
            }
        }
        // cout<<cnt<<endl;

        int cnt2 = 0;
        i = n-1;
        while(i > 0){
            if(arr[i] != arr[i-1]){
                cnt2++;
                i = i - 2;
            }
            else{
                i--;
                cnt++;
            }
        }
        cout<<min(cnt2, cnt)<<endl;
    }
    
    return 0;
}