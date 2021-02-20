#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int cnt1 = 0, cnt2 = 0;
        int sum = 0;
        int as = 1;
        while(sum <= a){
            cnt1++;
            sum = sum + as;
            as += 2;
        }
        sum = 0;
        as = 2;
        while(sum <= b){
            cnt2++;
            sum = sum + as;
            as += 2;
        }

        if(cnt1 > cnt2){
            cout<<"Limak"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
        

    }
    return 0;
}