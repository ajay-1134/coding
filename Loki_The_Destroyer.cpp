#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
vector<int>adj[1005];
bool vis[1005];
vector<vector<int>>as;
vector<int>v;

void dfs(int u){
    vis[u] = true;
    v.push_back(u);
    for(auto i : adj[u]){
        if(!vis[i]){
            dfs(i);
        }
    }
    return;
}

signed main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[i+1] = arr[i];
    }
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i);
            as.push_back(v);
            v.clear();
        }
    }
    int res =  1;
    for(int i=0; i<as.size(); i++){
        vector<int>vs = as[i];
        int mn = INT_MAX;
        for(int j=0; j<vs.size(); j++){
            mn = min(mn, mp[vs[j]]);
        }
        int cnt = 0;
        for(int j=0; j<vs.size(); j++){
            if(mp[vs[j]] == mn){
                cnt++;
            }
        }
        res = (res * cnt)%mod;
    }
    cout<<res%mod<<endl;
    return 0;
}