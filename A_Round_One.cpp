#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(abs(a-b)==1){
    if(a+b==3){
    cout<<"3"<<endl;}
    else{
        cout<<"1"<<endl;
    }
}
else{
    cout<<"2"<<endl;
}

    return 0;
}