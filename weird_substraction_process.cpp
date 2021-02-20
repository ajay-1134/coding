#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int a,b;;
    cin>>a>>b;
    while( (a == 0 || b == 0) || (a >= 2*b) || (b >= 2*a) ){
        if(a ==0 || b==0){
            break;
        }
        else if(a>= 2*b){
            // a = a - 2*b;
            a = a % (2*b);
        }
        else if(b > 2*a){
            // b = b - 2*a;
            b = b % 2*b;
        }
    }
    cout<<a<<" "<<b;
    return 0;
}