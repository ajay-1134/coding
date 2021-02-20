#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n<=9){
        cout<<(10*(n-1))+1<<endl;
    }
    else if(n>9 && n<100){
        int k1 = n%10;
        cout<<(10*(k1-1))+1+2<<endl;
    }
    else if(n>99 && n<1000){
        int k2 = n%10;
        cout<<(10*(k2-1))+1+2+3<<endl; 
    }
    else{
        int k3 = n%10;
        cout<<(10*(k3-1))+1+2+3+4<<endl;
    }
}
    return 0;
}