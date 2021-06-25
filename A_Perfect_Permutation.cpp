#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    if(n%2 != 0) cout<<"-1";
    else{
        int index = 1;
        for(int i=1; i<=n; i++){
            if(i%2 != 0){
                cout<<index*2<<" ";
                index++;
            }
            else cout<<i-1<<" ";
        }
    }
    cout<<endl;
}