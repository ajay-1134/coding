#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int arrmn(int arr[], int n){
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn,arr[i]);
    }
    return mn;
}

int find_index(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return 6678;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[20]={0};
        int arr1[n];
        int w[n],p[n];
        for(int i=0; i<n; i++){
            cin>>w[i];
            arr1[i] = w[i];
        }
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        sort(w,w+n);
        int m = find_index(arr1,n,arrmn(w,n));
        int j = m;
        for(int i=0; i<n; i++){
            arr[j] = w[i];
            int x = find_index(arr1,n,w[i+1]);
            j = x ;
            while(j <= m){
                j+=p[x];
            }
            m = j;
        }
        // for(int i=0; i<20; i++){
        //     cout<<arr[i]<<" ";
        // }
        int cnt=0; 
        for(int i=0; i<n; i++){
            cnt += ( find_index(arr,20,arr1[i]) - find_index(arr1,20,arr1[i]) ) / p[i];
        }
        cout<<cnt<<endl;
    }
    return 0;
}