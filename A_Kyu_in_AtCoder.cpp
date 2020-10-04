#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n>=400 and n<=599){
    cout<<"8"<<endl;
}
else if(n>=600 and n<=799){
    cout<<"7"<<endl;
}
else if(n>=800 and n<=999){
    cout<<"6"<<endl;
}
else if(n>=1000 and n<=1199){
    cout<<"5"<<endl;
}
else if(n>=1200 and n<=1399){
    cout<<"4"<<endl;
}
else if(n>=1400 and n<=1599){
    cout<<"3"<<endl;
}
else if(n>=1600 and n<=1799){
    cout<<"2"<<endl;
}
else if(n>=1800 and n<=1999){
    cout<<"1"<<endl;
}
    return 0;
}