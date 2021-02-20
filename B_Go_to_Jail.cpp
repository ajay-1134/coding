#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[2*n];
for(int i=0; i<2*n; i++){
    cin>>arr[i];

}
int cnt = 0;
for(int i=0; i<2*n; i++){
if(arr[i] == arr[i+1] && arr[i+2] == arr[i+3] && arr[i+4] == arr[i+5]){
    cnt = cnt + 1;
}
}
if(cnt >= 1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    return 0;
}