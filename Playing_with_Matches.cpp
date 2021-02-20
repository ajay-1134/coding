#include<bits/stdc++.h>
using namespace std;
#define int long long int
// 0 - 6, 1 - 2, 2 - 5, 3 - 5, 4- 4 , 5 - 5, 6 - 6, 7 - 3, 8 - 7, 9 - 6:
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k = a+b;
        int cnt = 0;
        if(k == 0){
            cout<<"6"<<endl;
        }
        else{
            while(k){
                int ss = k % 10;
                if(ss == 0 ){
                    cnt += 6;
                }
                else if(ss == 1){
                    cnt += 2;
                }
                else if(ss == 2 || ss == 3 || ss == 5){
                    cnt += 5;
                }
                else if(ss == 6 || ss  == 9){
                    cnt += 6;
                }
                else if(ss == 7){
                    cnt += 3;
                }
                else if(ss == 8){
                    cnt += 7;
                }
                else{
                    cnt += 4;
                }
                k = k/10;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}