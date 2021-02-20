#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int b,a;
cin>>b>>a;
int h = 2*a/b;
if((2*a)%b != 0)    h++;
cout<<h<<endl;
    return 0;
}