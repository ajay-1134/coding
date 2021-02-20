#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
     if(arr[i] + 3 < 40 ){
        cout<<arr[i]<<endl;
    }
    else{
        if(arr[i]%5 < 3){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i] +(5-(arr[i]%5))<<endl;
        }
    }
}


    return 0;
}
