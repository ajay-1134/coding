#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4];
for(int i=0; i<4; i++){
    cin>>arr[i];
}
if(arr[0] == 2){
    if(arr[1] == 28){
        cout<<"1"<<endl;
    }
    else    
        cout<<"0";    
}
else if(arr[0] == 2 or arr[0] == 4 or arr[0] == 6 or  arr[0] == 9 or arr[0] == 11){
    if(arr[1]==30){
        cout<<"1";
    }
    else
    cout<<"0";
}
else if(arr[0] == 1 or arr[0] == 3 or arr[0] == 5 or arr[0] == 7 or arr[0] == 8 or arr[0] == 10 or arr[0] == 12)
    if(arr[1]==31){
        cout<<"1";
    }
    else
    cout<<"0";


    return 0;
}