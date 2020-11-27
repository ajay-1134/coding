#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n;
cin>>n;
int sum = 0;
for(int i=1; i<=n; i++){
    int a,b;
    cin>>a>>b;
    int sum1 = ((b*(b+1))/2) - ((a*(a+1))/2) +a;
    sum = sum + sum1; 
}
cout<<sum<<endl;
    return 0;
}