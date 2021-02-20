#include <bits/stdc++.h>
using namespace std;
#define int long long int

int func(int n){
    if(n>=0){
        return n;
    }
    else{
        return max(n/10, (n/100)*10 + n%10 );
    }
}
signed main()
{
    int n;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}