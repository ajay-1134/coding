#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    int ptsx[n],ptsy[n];
    for(int i=0; i<n; i++){
        cin>>ptsx[i]>>ptsy[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<n; j++){
            if(ptsx[j] == ptsx[i]+1 && ptsy[j] == ptsy[i]){
                flag++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(ptsx[j] == ptsx[i]-1 && ptsy[j] == ptsy[i]){
                flag++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(ptsx[j] == ptsx[i] && ptsy[j] == ptsy[i]+1){
                flag++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(ptsx[j] == ptsx[i] && ptsy[j] == ptsy[i]-1){
                flag++;
                break;
            }
        }
        if(flag >= 4) cnt++;
    }
    cout<<cnt<<endl;
}