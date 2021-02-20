#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a > c){
        int temp1 = c;
        int temp2 = d;
        c = a;
        d = b;
        a = temp1;
        b = temp2;
    }
    if(a<c){
        if(c<=b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if(a==c){
        cout<<"Yes"<<endl;
    }
    else{
         if(b<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}