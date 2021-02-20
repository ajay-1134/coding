#include<iostream>
using namespace std;
#define int long long int
signed main(){
    int a,b,n=1;
    cin>>a>>b;
    while (n)
    {
        if(a==0||b==0){
            n=0;
            }
        if(a-2*b>=0){
            a=a-2*b;
            continue;
        }
        if(b-2*a>=0){
            b=b-2*a;
            continue;
        }

    }
    cout<<a<<" "<<b<<endl;
    return 0;
}