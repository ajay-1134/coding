#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int time = 0;
    while(a){
        if(a%2==0){
            time += (a/2)*c;
            time += b;
            c = c*2;
            a = a/2;
        }
        else{
            time += ((a+1)/2)*c;
            time += b;
            c = c*2;
            a = a - (a+1)/2 ; 
        }
    }
    cout<<time-b<<endl;
}
    return 0;
}