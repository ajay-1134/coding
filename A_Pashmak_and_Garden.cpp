#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
        
    if(x1!=x2 && y1 != y2 && abs(x1-x2) == abs(y1-y2) ){
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
    }
    else if(x1 == x2){
        cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x2+abs(y2-y1)<<" "<<y2;
    }
    else if(y1 == y2){
        cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y2+abs(x2-x1);
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;
}