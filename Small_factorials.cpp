#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int factorial(int n){
    if(n <=1){
        return 1;
    }
    return n * factorial(n-1);
}

void calculate(string s1, string s2){
    string ans = "";
    // "11" * "9"
    int carry = 0;
    for(int i=s2.length()-1; i>0; i--){
        for(int j=s1.length()-1; j>0; j--){
            int val  = (s2[i]-'0') * (s1[j]-'0');
            val +=  carry;
            int rem = val%10;
            carry = val - rem;
            ans += to_string(rem);
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}

signed main()
{
    calculate("11", "9");
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    vector<int>v;
    string s1 = "11";
    string s2 = "9";
    // string ans = calculate(s1, s2);
    // while (t--) {
    //     int n;
    //     cin>>n;
    //     cout<<factorial(n)<<endl;
    // }
    return 0;
}