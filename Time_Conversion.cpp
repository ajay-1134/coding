
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin>>s;
    string ss = s.substr(8);
    if(ss == "PM"){
        string sh = s.substr(0, 2);
        int h = stoi(sh);
        if(h == 12){
            cout<<h;
        }
        else{
            // if(h%12<10) cout<<"0";
            cout<<(h+12);
        }
        cout<<s.substr(2,6);
    }
    else
    {
        string sh = s.substr(0, 2);
        int h = stoi(sh);
        if(h%12<10) cout<<"0";
        cout<<(h)%12;
        cout<<s.substr(2,6);
    }
    
    return 0;
}