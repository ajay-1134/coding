#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int lead = 0;
    int W;
    int ply1[n],ply2[n];
    for(int i=0; i<n; i++){
        cin>>ply1[i]>>ply2[i];
        if(i>0){
            ply1[i] += ply1[i-1];
            ply2[i] += ply2[i-1];
        }
        int newlead =  abs(ply1[i] - ply2[i]);
        if(newlead >= lead){
            lead = newlead;
            if(ply2[i] > ply1[i]){
                lead = ply2[i] - ply1[i];
                W = 2;
            }
            else{
                lead = ply1[i] - ply2[i];
                W = 1 ;  
            }
        }
    }
    cout<<W<<" "<<lead;
    return 0;
}