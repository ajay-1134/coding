#include<bits/stdc++.h>
using namespace std;
#define int long long int
// int fib(int n){
//     int k;
//     if(n==0||n==1){
//         return n;
//     }
//     for(int i=0; i<n; i++){
//         fib(i) = fib(i-1) + fib(i-2);
//         if(fib(i)>=n){
//              k = fib(i);
//             break;
//         }
//     }
//     return k;
// }
int arr[1000];
bool checker(int n){
    int start = 0;
    int end = 99;
    while(start <= end){
        // int mid = (start + end)/2;
        int mid = start + (end - start)/2;
        // cout<<arr[mid]<<endl;
        if(arr[mid] == n) return true;
        else if(arr[mid] < n) start = mid + 1;
        else end = mid - 1;
    }
    return false;
}
signed main(){
arr[0] = 0;
arr[1] = 1;
for(int i=2; i<100; i++){
    arr[i] = arr[i-1] + arr[i-2];
}

// cout<<checker(0)<<endl;
// for(int i=0; i<10 ;i++) cout<<arr[i]<<" ";
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    if(checker(n) == true){
        cout<<"IsFibo"<<endl;
    }
    else{
        cout<<"IsNotFibo"<<endl;
    }
}
    return 0;
}