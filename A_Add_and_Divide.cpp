#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int step1(int a,int b){
    a = a/b;
    if(a==0){
        return -1;
    }
    return a/b;
}
int step2(int a,int b){
    return a/(b+1);
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int cnt=0;
        while(a){
            if(step1(a,b) < step2(a,b)){
                if(step1(a,b) == -1){
                    cnt+=1;
                    break;
                }
                else{
                    a = step1(a,b);
                    cnt+=2;
                }
            }
            else{
                if(step2(a,b) == 0){
                    a = step2(a,b);
                    cnt+=2;
                }
                else{
                    b += 2;
                    cnt += 2;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}