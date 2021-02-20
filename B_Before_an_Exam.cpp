#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int mn[n],mx[n];
    int mnsum = 0, mxsum = 0; 
    for(int i=0; i<n; i++){
        cin>>mn[i]>>mx[i];
        mnsum += mn[i];
        mxsum += mx[i];
    }
    int res[n];
    int currsum = h;
    if(h >= mnsum && h <= mxsum){
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            res[i] = mn[i];
        }
        currsum -= mnsum;
        for(int i=0; i<n; i++){
            if(currsum > (mx[i]-mn[i])){
                res[i] = mx[i];
                cout<<res[i]<<" ";
                currsum -= (mx[i]-mn[i]);
            }
            else{
                res[i] += currsum;
                cout<<res[i]<<" ";
                currsum = 0;
            }
        }
        
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}