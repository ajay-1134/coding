#include<bits/stdc++.h>
using namespace std;
#define int long long int
int check(int n, int pr[], int q[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( (pr[i] < pr[j] && q[i] > q[j] ) || (pr[i]>pr[j] && q[i]<q[j])  ){
                return 1;
            }
        }
    }
    return 0;
}

bool cmp(const pair<int,int>&a, const pair<int,int>&b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}

signed main(){
    int n;
    cin>>n;
    int pr[n],q[n];
    vector<pair<int,int>>vp;
    for(int i=0; i<n; i++){
        cin>>pr[i]>>q[i];
        vp.push_back({pr[i], q[i]});
    }
    sort(vp.begin(), vp.end());
    int flag = 0;
    for(int i=1; i<n; i++){
        if(vp[i-1].second > vp[i].second){
            flag = 1;
        }
    }
    if(flag) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}