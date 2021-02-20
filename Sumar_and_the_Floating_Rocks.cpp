#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
int t;
cin>>t;
while(t--){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double slope =(y2-y1)/(x2-x1);
    int cnt = 0;
    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            double slope1 = (j-y1)/(i-x1);
            if(slope1 == slope){
                cnt = cnt + 1;
            }
        }
    }
    cout<<cnt<<endl; 
}
    return 0;
}