#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag1 = 0;
        int flag2 = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'I'){
                flag1 = 1;
            }
            else if(s[i] == 'Y'){
                flag2 = 1;
            }
            else{
                continue;
            }
        }
        if(flag1 == 1){
            cout<<"INDIAN"<<endl;
        }
        else if(flag2 == 1){
            cout<<"NOT INDIAN"<<endl;
        }
        else{
            cout<<"NOT SURE"<<endl;
        }
    }
    return 0;
}