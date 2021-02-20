#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.

int find_index(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr1[i] = arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout<<find_index(arr1,n,arr[i]) + 1 <<" ";
    }
    return 0;
}