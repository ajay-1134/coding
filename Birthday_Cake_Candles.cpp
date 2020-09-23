#include<bits/stdc++.h>
using namespace std;
// #define int long long int;
// signed main(){
    int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int ans = 0;
     for(int i=0; i<n; i++){
         if(arr[i] == arr[0])
         ans = ans + 1;
     }
   
    cout<<ans<<endl;
    return 0 ;
}