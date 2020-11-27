#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int arr[] = {8,5,6,2,9,15,23,98,10,64};
//for size of array
int n = sizeof(arr) / sizeof(arr[0]);
//for ascending order
sort(arr,arr+n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//for descending order
sort(arr,arr+n,greater<int>());
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}