#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
        cout<<(6-b+1)+ (b-a-1)/2<<" ";
        if( (b-a-1)%2 == 0  ) cout<<"0"<<" ";
        else cout<<"1"<<" ";
        cout<<a+ (b-a-1)/2<<" ";
    }
    else if(a<b){
        cout<<a+ (b-a-1)/2<<" ";
        if( (b-a-1)%2 == 0  ) cout<<"0"<<" ";
        else cout<<"1"<<" ";
        cout<<(6-b+1)+ (b-a-1)/2 ;
    }
    else cout<<"0"<<" "<<"6"<<" "<<"0"<<endl;
    return 0;
}