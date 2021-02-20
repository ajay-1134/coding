#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}
sort(arr, arr + 5, greater<int>());
int mn = 0;
for(int i=1; i<5; i++){
    mn = mn + arr[i];
}
int mx = 0;
for(int i=0; i<4; i++){
    mx = mx + arr[i];
}
cout<<mn<<" "<<mx<<endl;
    return 0;
}