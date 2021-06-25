#include<bits/stdc++.h>
using namespace std;
#define int long long int

double f(int p,int t){
    return max(3.0*p/10.0, p - ( (p*t)/250.0 ) );
}

signed main(){
    int p1,p2,t1,t2;
    cin>>p1>>p2>>t1>>t2;
    if(f(p1,t1) == f(p2,t2) ) cout<<"Tie";
    else if(f(p1,t1) > f(p2,t2)) cout<<"Misha";
    else cout<<"Vasya";
}