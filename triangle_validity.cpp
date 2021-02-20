#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<=0 || b<=0 || c<=0 || a>= b+c || b>=a+c || c>=a+b){
    cout<<"Invalid"<<endl;
}
else{
    int arr[3] = {a,b,c};
    sort(arr, arr + 3, greater<int>());
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
}
    return 0;
}