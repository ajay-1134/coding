#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int p1 = 0, p2 = n-1;
    int s=0, d=0;
    int flag = 0;
    while(n--){
        if(flag == 0){
            if(arr[p1] >= arr[p2]){
                s+=arr[p1];
                p1++;
            }
            else{
                s+=arr[p2];
                p2--;
            }
            flag = 1;
        }
        else{
            
            if(arr[p1] >= arr[p2]){
                d+=arr[p1];
                p1++;
            }
            else{
                d+=arr[p2];
                p2--;
            }
            flag = 0;
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}