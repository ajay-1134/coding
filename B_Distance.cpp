#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
     int n, d;
    cin>>n>>d;
    int cnt = 0;
    while(n--){
        int x, y;
        cin>>x>>y;
        int var1= (x*x + y*y);
        int var2= d*d;
        if(var1 <= var2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}