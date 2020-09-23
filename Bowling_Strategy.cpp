#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int n,k,l;
    cin>>n>>k>>l;
    if(k == 1 && n > 1){
        cout<<-1<<endl;
    }
    else if(k*l >= n){
        int cnt = 0;
        while(n--){
            cout<< cnt % k + 1<<" ";
            cnt++;
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}
    return 0;
}