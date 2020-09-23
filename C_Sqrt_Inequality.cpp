#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,b,c;
cin>>a>>b>>c;

if((c) < (a+b)){
    cout<<"No"<<endl;
}
else if(4*a*b < ((c-a-b)*(c-a-b))){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
    return 0;
}
