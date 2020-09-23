#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
float b;
cin>>b;
if(a > (b-0.50))  {
     cout<<fixed<<setprecision(2);
    cout<<b<<endl;
}
else {if(a%5 != 0){
     cout<<fixed<<setprecision(2);
    cout<<b<<endl;}

    else{
    cout<<fixed<<setprecision(2);
    cout<<( b-(a + 0.50))<<endl;
    }
}
return 0;}