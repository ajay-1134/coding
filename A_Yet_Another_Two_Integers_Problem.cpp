#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int d=abs(a-b);
    int ans=0;
    ans=(d/10);
    if(d%10 != 0){
        ans++;

    }
    cout<<ans<<endl;


}
    return 0;

}