#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int feven(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0) return i;
    }
    return -1;
}

int fodd(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0) return i;
    }
    return -1;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int ev=0,od=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2 == 0) ev++;
        else od++;
    }
    // cout<<ev<<" "<<od<<endl;
    if(od == 1){
        cout<<fodd(arr,n) + 1<<endl;
    }
    else{
        cout<<feven(arr,n)+1<<endl;
    }

    return 0;
}