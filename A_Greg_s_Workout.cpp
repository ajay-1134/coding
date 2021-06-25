#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n;
    cin>>n;
    int arr[n];
    int chest=0,biceps=0,back=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i%3 == 0) chest+=arr[i];
        else if(i%3 == 1) biceps+=arr[i];
        else back+=arr[i];
    }
    if(max(chest,max(biceps,back)) == chest) cout<<"chest";
    else if( max(chest,max(biceps,back)) == biceps ) cout<<"biceps";
    else cout<<"back";

}