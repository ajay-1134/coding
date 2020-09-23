#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
cin>>c;
if(a>b){
    if(c%a==0){
        cout<<c/a<<endl;
    }
    else{cout<<(c/a)+1<<endl;}
}
else{
    if(c%b==0){
        cout<<c/b<<endl;
    }
    else{cout<<(c/b)+1<<endl;}
}
    return 0;
}