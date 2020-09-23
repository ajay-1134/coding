#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx = n;
    for(int i=1; i<=32; i++){
        int val = (n >> i)|(n << (32 - i)); 
        mx = max(mx, val); 
    }
    cout<<mx<<endl;
    return 0;
}