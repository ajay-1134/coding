#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
    }
    if(n==2){
        if(arr[0]>=arr[1]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
    else{
        int index1,index2;
        for(int i=0; i<n; i++){
            if(arr[i] == mx){
                index1 = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i] == mn){
                index2 = i;
                break;
            }
        }
        int res = a(n-1-index2) + abs(index1 - 0);
        cout<<res<<endl;
    }
    return 0;
}