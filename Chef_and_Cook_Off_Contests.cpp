#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int cnt1 =0 ,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0;
        while(n--){
            string s;
            cin>>s;
            if(s == "cakewalk" && cnt1 != 1){
                cnt1++;
            }
            else if(s == "simple" && cnt2 != 1){
                cnt2++;
            }
            else if(s == "easy" && cnt3 != 1){
                cnt3++;
            }
            else if((s ==  "easy-medium" || s == "medium") &&  cnt4 != 1){
                cnt4++;
            }
            else if((s==  "medium-hard" || s =="hard") && cnt5 != 1){
                cnt5++;
            }
        }
        int cnt = cnt1 + cnt2 + cnt3 + cnt4 + cnt5;
        if(cnt == 5){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}