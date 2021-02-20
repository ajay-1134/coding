#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int n;
    cin>>n;
    int flag = 0;
    int width[n],height[n];
    for(int i=0; i<n; i++){
        cin>>width[i]>>height[i];
    }
    int h[n] = {0};
    h[0] = max(height[0],width[0]);
    for(int i=0; i<n-1; i++){
        if( h[i] >= max(height[i+1], width[i+1])){
            h[i+1] = max(height[i+1], width[i+1]);
        }
        else{
            h[i+1] = min(height[i+1], width[i+1]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<h[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        if(h[i] < h[i+1]){
            flag = 1;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}