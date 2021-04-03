#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int groups = 0;
        for (int i = 0; i < n;)
        {
            if(s[i] == '0') i++;
            else{
                int j= i;
                int cnt = 0;
                while(s[j] == '1'){
                    j++;
                    cnt++;
                }
                // cout<<cnt<<" ";
                i+=cnt;
                groups+=1;
            }
        }
        cout << groups << endl;
    }
    return 0;
}