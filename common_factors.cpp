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
    int a, b;
    cin>>a>>b;
    int cnt = 0;
    for(int i=1; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            // cout<<i<<endl;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}