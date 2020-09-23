#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,b;
cin>>a>>b;
long long int k=__gcd(a,b);
cout<<(a*b)/k<<endl;
    return 0;
}
