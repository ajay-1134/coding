#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int arr[4];
for(int i=0; i<4; i++){
    cin>>arr[i];
}
int sum = 0;
for(int i=0; i<4; i++){
 sum = sum + arr[i];
}
if(sum%2 != 0){
    cout<<"No"<<endl;
}
else{
    int val = sum/2;
    if(arr[0] == val ||
    arr[1] == val ||
    arr[2] == val ||
    arr[3] == val ||
    (arr[0]+arr[1] == val) ||
    (arr[0] + arr[2] == val) ||
    (arr[0] + arr[3] == val) ||
    (arr[1] + arr[2] == val) ||
    (arr[1] + arr[3] == val) ||
    (arr[2] + arr[3] == val)
    ){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
    return 0;
}