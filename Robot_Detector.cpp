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
    int r, c;
    cin>>r>>c;
    for(int i=0; i<r;i++)
        cout<<"U";
    for(int  i=0; i<c-1; i++) cout<<"R";
    cout<<endl;
    return 0;
}